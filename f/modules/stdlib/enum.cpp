#include <iostream>


using namespace std;

void f(){
/* 
    a 0100000  2
    b 1100000  3
    c 1001000  9
   OR 1101000 11
 
    a 0100000  2
    b 1100000  3
    c 1001000  9
  XOR 0101000 10
*/
    
  enum flag { a=2, b=3, c=9 }; // range 0:31

  flag fg = flag(a);    // output: 2
  fg = flag(b);         // output: 3
  fg = flag(b ^ c);     // output: 10   XOR
  fg = flag(b | c);     // output: 11    OR
  fg= flag(b & c);      // output: 1    AND
  
  cout << fg << endl;
}

int main(void)
{
  f();

  return 0;
}
