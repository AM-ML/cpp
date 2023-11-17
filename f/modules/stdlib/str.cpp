#include <iostream>
#include <utility>
#include "c:/cs/back/cpp/f/lib/mod.hpp"


using std::cout;using std::endl;using std::string;using std::swap;

void f(){
  string name = "Computer Engineer";

  int size = sizeof(name) / sizeof(name[0]);

  string s = name.substr(9, size - 1);
  name.replace(0, 8, "Software");
  cout << s << endl;  
  cout << name << endl; 
  printf("s: %s, name: %s\n", s.c_str(), name.c_str()); // using c like syntax
}


int main(void)
{
  f();
}
