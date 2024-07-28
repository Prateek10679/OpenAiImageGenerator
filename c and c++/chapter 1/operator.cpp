#include<iostream>
using namespace std;

class learn
{
    int a,b;
    public:
    getval1()
    {
        cin>>a;
    }
    getval2()
        {
            cin>>b;
        }
    learn operator +(learn &obj)
    {
        learn x;
        
        x.a = a + obj. b;
        return(x);

    }
    learn operator -(learn &obj)
    {
        learn x;
        
        x.a = a - obj. b;
        return(x);

    } 
    learn operator *(learn &obj)
    {
        learn x;
        
        x.a = a * obj. b;
        return(x);

    } 
    learn operator /(learn &obj)
    {
        learn x;
        
        x.a = a / obj. b;
        return(x);

    } 
    void sum()
    {
        cout<<"the sum is ="<<a<<endl;

    }
    void sub()
    {

    cout<<"the sub is = "<<a<<endl;
    }
    void mul()
    {

    cout<<"the mul is = "<<a<<endl;
    }
    void div()

    cout << "the div is = "<<a<<endl;
    }
};

int main()
{
    learn x1,y1,z1;
    x1.getval1();
    y1.getval2();
    z1=x1+y1;
    z1.sum();
    z1=x1-y1;
    z1.sub();
    z1=x1*y1;
    z1.mul();
    z1=x1/y1;
    z1.div();

    return 0;

}