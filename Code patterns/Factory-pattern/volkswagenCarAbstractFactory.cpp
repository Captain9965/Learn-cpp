//This is an example implementation of the Abstract Factory pattern using an example of the volkswagen group which manufactures
//vehicles under the variants: volkswagen, Audi, bentley, Bugatti, lamborghini among others
#include <cstdio>
#include <iostream>

//step 1: declare abstract product interfaces for all product types
//product 1: the SUV
class Suv{
    public:
        virtual ~Suv(){};
        virtual std::string engineCapacity() const = 0;
};
//concrete products are created by corresponding concrete factories
class bentleySuv: public Suv{
    public:
        std::string engineCapacity()const override{
            return "the bentley Bentegya packs a mammoth 5600cc engine";
        }

};
class audiSuv: public Suv{
    public:
        std::string engineCapacity() const override{
            return "the Audi Q5 packs a respectable 4500cc engine";
        }
};

//product 2: The sedan

class Sedan{
    public:
        virtual ~Sedan(){};
        virtual std::string driveTrain() const = 0;
        virtual std::string bodyMaterial(const Suv &collabarator) const = 0;
};
//The conctrete products 

class bentleySedan: public Sedan{
    public:
        std::string driveTrain() const override {
            return "This Bentley sports a cutting edge AWD drivetrain";
        }
        std::string bodyMaterial(const Suv &collaborator) const override{
            const std::string result = collaborator.engineCapacity();
            return "This bentley is made of composite carbon fibre and  (" + result +")";
        }
};

class audiSedan: public Sedan{
    public:
        std::string driveTrain() const override {
            return "This Audi sports a quattro AWD drivetrain";
        }
        std::string bodyMaterial(const Suv &collaborator) const override{
            const std::string result = collaborator.engineCapacity();
            return "This audi is made of aluminium and (" + result +")";
        }
};
//The abstract Factory interface declares a set of methods that return different abstract products
class volkswagenCar{
    public:
        virtual Suv *createSuv() const = 0;
        virtual Sedan *createSedan() const = 0;
};

class bentleyCar: public volkswagenCar{
    public:
        Suv *createSuv() const override{
            return new bentleySuv();
        }
        Sedan *createSedan() const override{
            return new bentleySedan();
        }
};
class audiCar: public volkswagenCar{
    public:
        Suv *createSuv() const override{
            return new audiSuv();
        }
        Sedan *createSedan() const override{
            return new audiSedan();
        }
};
//The client code only works through factories and products through the abstract types: volkswagenCar and Suv

void clientCode( const volkswagenCar &car){
    const Sedan *sedan1 = car.createSedan();
    const Suv *suv1 = car.createSuv();
    std::cout << sedan1->driveTrain() << "\n";
    std::cout <<  sedan1->bodyMaterial(*suv1)<< "\n";
    delete sedan1;
    delete suv1;
}

int main(){
    std::cout << "Testing the code with the first factory type\n";
    bentleyCar *b1 = new bentleyCar();
    clientCode(*b1);
    delete b1;
    std::cout << std::endl;
    std::cout << "Testing the same client code with the second factory type: \n";
    audiCar *a1 = new audiCar();
    clientCode(*a1);
    delete a1;
    return 0;
}