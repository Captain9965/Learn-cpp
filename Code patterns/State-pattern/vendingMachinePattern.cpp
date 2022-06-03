/*
This example shows an implementation of the state machine machine pattern in c++
*/
#include <iostream>
#include <typeinfo>
#include <chrono>
#include <thread>
//define the base state class that declares methods that all state classes should implement and 
// also provides a backreference to the context object associated with the state that can be used to transition the context to another state
//declare the context class:
 
class Vmc_ctx_t;
class State{
    protected:
        Vmc_ctx_t *vmc_ctx;
    public:
        virtual ~State(){

        }
        void set_ctx(Vmc_ctx_t *ctx){
            this->vmc_ctx = ctx;
        }
        virtual void start()=0;
        // virtual void stop()=0;
        // virtual void display()=0;
        // virtual void comms_event()=0;

};
//The context defines the interface of interest to the client
//it also maintains a reference to an instance of a state subclass , which represents the current state of the context

class Vmc_ctx_t{
    private:
        State *vmc_state;
    public:
        int error = 0;
        Vmc_ctx_t(State *state):vmc_state(nullptr){
            this->transitionTo(state);
            error = 0;
        }
        ~Vmc_ctx_t(){
            delete vmc_state;
        }
        //changing the state object at runtime
        void transitionTo(State *state){
            std::cout << "vmc context transitioning to " << typeid(*state).name() << "\n";
            if(this->vmc_state != nullptr){
                delete this->vmc_state;
            }
            this->vmc_state = state;
            this->vmc_state->set_ctx(this);
        }
        //the context delegates part of its behavior to the current state object

        void start_(){
            this->vmc_state->start();
        }
        void stop_(){
            // this->vmc_state->stop();
        }
        void set_display(){
            // this->vmc_state->display();
        }
        void send_comms_event(){
            // this->vmc_state->comms_event();
        }
        void show_errors(){
            std::cout << "These are the errors:"<< error << std::endl;
        }
};
//concrete states implement state specific behavior:

class Vmc_state_idle: public State{
    public:
        void start() override{
            std::cout << " Vmc is in idle state";
            
        }
};
class Vmc_state_dispensing: public State{
    void start() override{
            std::cout << " Vmc is dispensing";
        }
};
class Vmc_state_booting: public State{
    void start() override{
            std::cout << " Vmc is booting.....please wait\n";
            using namespace std::this_thread;     // sleep_for, sleep_until
            using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
            using std::chrono::system_clock;
            sleep_for(5s);
            std::cout << " Transitioning to idle \n";
            this->vmc_ctx->error = 404;
            this->vmc_ctx->transitionTo(new Vmc_state_idle);
        }
};
class Vmc_state_errors: public State{
    void start() override{
            std::cout << " Vmc is in error state";
        }
};
class Vmc_state_admin: public State{
    void start() override{
            std::cout << " Vmc is in idle state";
        }
};

//client code:
void run_vmc(){
    Vmc_ctx_t *ctx = new Vmc_ctx_t(new Vmc_state_booting);
    ctx->start_();
    ctx->show_errors();
    delete ctx;
}
int main(){
    run_vmc();
    return 0;
}