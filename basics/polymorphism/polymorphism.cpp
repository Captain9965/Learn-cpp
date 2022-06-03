/*
*This means having many forms. This means that a call to a member function will 
*cause a different function to be executed depending on the type of object that invokes the function
*Without declaring the function as virtual, there is static linkage/static resolution of the base class function call.
*Defining it as virtual causes late binding of dynamic linkage.
*/
#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
    //   virtual int area() {
    //      cout << "Parent class area :" <<endl;
    //      return 0;
    //   }
      //or one can use a pure virtual function by assigning the function declaratin to zero ie.
      virtual int area() = 0;
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

// Main function for the program
int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;
   
   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   shape->area();
   
   return 0;
}