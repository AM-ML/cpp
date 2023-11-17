#include <iostream>
// #include "c:/cs/back/cpp/f/lib/mod.hpp"


using namespace std;

struct UF {
  int id[100];
  int sz[100];

  void initialize(){
    for(int i = 0; i < 100; i++){
      id[i] = i;
      sz[i] = 1;
    }
  }

  int root(int n) {
    while(n != id[n]) {
      id[n] = id[id[n]];
      n = id[n];
    }

    return n;
  }

  void unite(int p, int q){
    int j = root(p);
    int k = root(q);

    if(j == k) return;

    if(sz[j] < sz[k]) {
      id[j] = k;
      sz[k] += j;
    }
    else {
      id[k] = j;
      sz[j] += k;
    }
  }

  bool connected(int p, int q){
    return root(p) == root(q);
  }
};

void f(){
  UF uf;
  uf.initialize();
  uf.unite(0, 1);
  uf.unite(1, 2);
  uf.unite(5, 3);
  cout << uf.connected(0, 2) << endl; // output: 1 / true
  cout << uf.connected(0, 3) << endl; // output: 0 / false
}

int main(void)
{
  f();

  return 0;
}
