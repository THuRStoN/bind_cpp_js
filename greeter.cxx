#include <string>
#include <iostream>

using std::cout;
using std::endl;

struct Greeter {
  // static void say_hello(const std::string& name) <- references are not supported as a valid data type
  static void say_hello(std::string name)
  {
    cout << "Hello, " << name << "!" << endl;
    if ( "José Elías" == name  ) {
      cout << name << " que la lías!!!" << endl;
    }
  }
};

// List classes and methods for binding
#include "nbind/nbind.h"

NBIND_CLASS(Greeter) {
  method( say_hello );
}
