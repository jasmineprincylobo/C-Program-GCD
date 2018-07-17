
//to find GCD(HCF) of 2 numbers
#include<iostream>
using namespace std;


int gcd(int x,int y)
{
int a,b,r;
a=(x<y)?x:y;
b=(x>y)?x:y;
r=b;
while(a%b!=0)
{
r=a%b;
a=b;
b=r;
}
return r;
}


int main()
{
int a,b,h;
cout<<"enter 2 numbers:"<<endl;
cin>>a>>b;
h=gcd(a,b);
cout << "gcd = " << h;

return 0;
}

