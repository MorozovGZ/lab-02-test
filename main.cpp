// ... //
#include <iostream>

using namespace std;

int main()
{
   cout << "Enter A and B: ";

int a, b,max,min;




cin >> a >> b;
cout<<"a+b="<<a+b<<endl;
cout<<"a-b="<<a-b<<endl;
cout<<"a*b="<<a*b<<endl;
cout<<"a/b="<<a/b<<endl;

max=b;
{

if(a>b)
 max=a;
}
cout<<"max="<<max;

min=b;
{

if(a<b)
 min=a;
}
cout<<"min="<<min;

    return 0;
}
