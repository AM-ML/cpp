#include <iostream>


using namespace std;

void f(){
    char c, cap;
    
    for(int i = 97; i < 123; i++){
        c = i;
        cout << c  << ' ';
    }
    
    cout << endl;
    
    for(int i = 97; i < 123; i++){
        cap = i - 32;
        cout << cap  << ' ';
    }
    
    cout << endl;
    
    for(int i = 0; i < 10; i++) {
        cout << i << ' ';
    }

}

int main(void)
{
  f();

  return 0;
}
