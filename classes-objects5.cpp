#include <iostream>
using namespace std;

class line
{
public:

int distance(int a,int b)
{
return a+b;
}

};

int main()
{
line obj1;

int c,d;

cout<<"Please enter two distances \n";
cin>>c>>d;
cout<<obj1.distance(c,d);
}
