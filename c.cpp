#include <iostream>
#include <utility>
#include "c:/cs/back/cpp/f/lib/mod.hpp"


using std::cout;using std::endl;using std::string;using std::swap;

void p(){
  string name = "Niels Stroustrup";

  string s = name.substr(6, sizeof(name) / sizeof(name[0]) - 1);
  cout << s << endl;  
}


int main(void)
{
  p();
}
