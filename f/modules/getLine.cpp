#include <iostream>
#include <utility>
#include "c:/cs/back/cpp/f/lib/mod.hpp"


using std::cout;using std::endl;using std::string;using std::swap;using std::cin;

void f(){
  string str;

  cout << "enter your name: ";
  getline(cin, str);

  cout << "hello, " << str << "!" << endl;
}

int main(void)
{
  f();

  return 0;
}
