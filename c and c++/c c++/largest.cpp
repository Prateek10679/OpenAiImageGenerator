#include<iostream>
using namespace std;

template <class A>

int find(A x, A y, A z) {

   A large;

   if (x > y && x > z) {
       large = x;
   } else if (y > z) {
       large = y;
   } else
    {
       large = z;
   }
   return large;
}

int main() {

   int x, y, z, large;
   cout << "Enter three numbers:";
   cin >> x >> y>>z;

   large = find(x, y, z);
   cout << "Largest is:" << large;

   return 0;
}