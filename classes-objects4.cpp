#include <iostream>
using namespace std;

class line
{
public:
int a;

void seta(int b)
{
a=b;
}

};

int main()
{
line obj1;
obj1.seta(10);

cout<<obj1.a;
}
