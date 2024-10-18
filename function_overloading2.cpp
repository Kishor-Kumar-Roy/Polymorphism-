#include<iostream>
using namespace std;
class calculate{
    int p,q,r;
    public:   
    void add(int a,int b)
    {
        int sum=a+b;
        cout<<"sum of a and b="<<sum<<endl;
    }
     void add(int a,int b,int c)
    {
        int sum2=a+b+c;
        cout<<"sum of a,b and c="<<sum2<<endl;
    }
     void add(double p,double q)
    {
        double sum3=p+q;
        cout<<"sum of p and q="<<sum3<<endl;
    }
};

int main()
{
    int a,b,c;
    double p,q;
    cout<<"enter value of a,b&c: ";
    cin>>a>>b>>c;
     cout<<"enter value of p and in double: ";
    cin>>p>>q;
    calculate obj;
    obj.add(a,b);
    obj.add(a,b,c);
    calculate obj2;
    obj2.add(p,q);
}