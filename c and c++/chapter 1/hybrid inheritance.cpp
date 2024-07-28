#include <iostream>  
using namespace std;  
class A  
{  
    protected:  
    int a;  
    public:  
    void in_a()  
    {  
       std::cout << "Enter the value of 'a' : " << std::endl;  
       cin>>a;  
    }  
};  
  
class B : public A   
{  
    protected:  
    int b;  
    public:  
    void in_b()  
    {  
        std::cout << "Enter the value of 'b' : " << std::endl;  
       cin>>b;  
    }  
};  
class C   
{  
    protected:  
    int c;  
    public:  
    void in_c()  
    {  
        std::cout << "Enter the value of c is : " << std::endl;  
        cin>>c;  
    }  
};  
  
class D : public B, public C  
{  
    protected:  
    int d;  
    public:  
    void mul()  
    {  
         in_a();  
         in_b();  
         in_c();  
         std::cout << "Multiplication of a,b,c is : " <<a*b*c<< std::endl;  
    }  
};  
int main()  
{  
    D d;  
    d.mul();  
    return 0;  
}