#include <iostream>
using namespace std;

  
// This function swaps values referred by 
// x and y,
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
  
int main()
{
    int x, y;
    cout<<"enter value of x";
    cin>>x;
    
    cout<<"Enter Value of y ";
    cin>>y;
    swap(x, y);
    cout<<"\nAfter Swapping: x = "<< x ;
    cout<<"\nAfter Swapping: y = "<< y ;
    
    return 0;
}