#include<iostream>

using namespace std;

class PPA
{
    public:
       int No1;
       int No2;

    //default contsuctor

    PPA()
    {
        cout<<"Inside default construction\n";
    }

    //parametrised constructor

     PPA(int a,int b)
    {
        cout<<"Inside parametrised construction\n";
    }

    //copy constructor

    PPA(PPA &obj)
    {
        cout<<"Inside copy constructor\n";
    }

    ~PPA()
    {
        cout<<"Inside destructor\n";
    }
    
};

int main()
{
    PPA pobj1;          //default
    PPA pobj2(11,21);   //parametrised
    PPA pobj3(pobj1);   //copy

     return 0;

}

       
