#include<iostream>
using namespace std;
int v{5};

int adj[5][5];

void add_edge(int n, int m) {
   adj[n][m] = 1;
   adj[m][n] = 1;
}

void display(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout <<adj[i][j] << " ";
      }
      cout << endl;
   }
}

int main() {
   add_edge(0, 1);
   add_edge(0, 2);
   add_edge(1, 3);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 1);
   add_edge(2, 2);
   add_edge(4, 3);

   display(v);
  return 0;
}
