/*
This is the seperation technique that relies on seperation of the interface and implementation
Two important advantages of data abstraction:
    1. It protects the class inernals from user-level errors which might corrupt the state of the object.
    2. The class implementation may evolve over time due to changing requirements or bug reports without changing the user-level or client code.

*/
#include <iostream>
using namespace std;

class Adder {
   public:
      // constructor
      Adder(int i = 0) {
         total = i;
      }
      
      // interface to outside world
      void addNum(int number) {
         total += number;
      }
      
      // interface to outside world
      int getTotal() {
         return total;
      };
      
   private:
      // hidden data from outside world
      int total;
};

int main() {
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);

   cout << "Total " << a.getTotal() <<endl;
   return 0;
}