#include <iostream>
#include <utility>
#include "c:/cs/back/cpp/f/lib/mod.hpp"
#define FACTOR 2.54f;

using std::cout;using std::endl;using std::string;using std::swap; using std::cin;

void p(bool isC, float a, float b) {
  if(isC)
    printf("%.2fcm ---> %.2fin\n", a, b);
  else
    printf("%.2fin ---> %.2fcm\n", a, b);
}

void f(){
  const float factor = 2.54; // 1 inch equals 2.54 cm
  float i, in, cm;
  string unit;


  cout << "enter length: ";
  cin >> i; // read a floating-point number
  cin >> unit; // read a suffix

  if(unit == "cm" || unit == "centimeter"){
    cm = i;
    in = cm / factor;
    p(true, cm, in);
  }
  else if(unit == "in" || unit == "inch"){
    in = i;
    cm = in * factor;
    p(false, in, cm); 
  }
  else {
    cout << "broZER, IYZ yow StAWpID..?" << endl;
  }
}

int main(void)
{
  f();

  return 0;
}
