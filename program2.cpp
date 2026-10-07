#include<iostream>
using namespace std;

#pragma pack(1)
class  Base
{
public:
     int i,j;

     
     int Addition(int no1,int no2)
     {
        return no1+no2;
     }
     virtual int substraction(int no1,int no2)=0;
    
};

#pragma pack(1)

class Derived: public Base
{
    public:
       int x;

       int substraction(int no1,int no2)
       {
        return no1-no2;
       }

       int multiplication(int no1,int no2)
       {
        return no1*no2;
       }
};

int main()
{
    Derived dobj;
    int Ret=0;

    cout<<"Size of base class is:"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class is:"<<sizeof(Derived)<<"\n";

    Ret=dobj.Addition(11,10);
    cout<<"Addition is:"<<Ret<<"\n";

    Ret=dobj.substraction(11,10);
    cout<<"substraction is:"<<Ret<<"\n";
    
    Ret=dobj.multiplication(11,10);
    cout<<"multiplication is:"<<Ret<<"\n";
    

    return 0;
}
