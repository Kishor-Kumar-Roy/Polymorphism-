#include<iostream>
using namespace std;
class complex{
    int p,q;
    public:
    complex(int r1,int i1)
    {
        p=r1; q=i1;
    }
    void operator ++()
    {
    p=++p;
    q=++q;
    }

       void operator --()
    {
    p=--p;
    q=--q;
    }

    void display()
    {
        cout<<p<<"+"<<q<<"i"<<endl;
    }
};
int main()
{
   int r1,i1;
   cout<<"enter real part and imag part of complex no: ";
   cin>>r1>>i1;
   cout<<"___before overloading___"<<endl;
   cout<<"complex no="<<r1<<"+"<<i1<<"i"<<endl;
cout<<"after using ++  operator"<<endl<<"complex no=";
complex obj(r1,i1);
++obj;
obj.display();
complex obj2(r1,i1);
--obj2;
cout<<"after using -- operator"<<endl<<"complex no=";
obj2.display();
    return 0;
}