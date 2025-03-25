#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter three numbers:";
  cin>>a>>b>>c;

  (a>b && a>c)?cout<<a:(b>a && b>c) ?cout<<b:cout<<c;
  cout<<a;


return 0;
}