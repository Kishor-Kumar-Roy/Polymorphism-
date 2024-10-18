#include<iostream>
using namespace std;
class complex{
    int p,q,r,s;
    public:
    complex(int r1,int i1, int r2, int i2)
    {
        p=r1; q=i1; r=r2; s=i2;
    }
    void operator +()
    {
    p=p+r;
    q=q+s;
    }

void operator -()
    {
    p=p-r;
    q=q-s;
    }

void operator *()
    {
    p=p*r;
    q=q*s;
    }
    void display()
    {
        cout<<p<<"+"<<q<<"i"<<endl;
    }
};
int main()
{
   int r1,i1,r2,i2;
   cout<<"enter real part and imag part of 1st complex no: ";
   cin>>r1>>i1;
   cout<<"1st complex no="<<r1<<"+"<<i1<<"i"<<endl;
    cout<<"enter real part and imag part of 2nd complex no: ";
   cin>>r2>>i2;
   cout<<"2nd complex no="<<r2<<"+"<<i2<<"i"<<endl;
  complex obj(r1,i1,r2,i2);
  +obj;
  cout<<"addition: ";
  obj.display();
    complex obj1(r1,i1,r2,i2);
    -obj1;
      cout<<"substraction: ";
  obj1.display();
   complex obj2(r1,i1,r2,i2);
    *obj2;
      cout<<"multiplication: ";
  obj2.display();
    return 0;
}