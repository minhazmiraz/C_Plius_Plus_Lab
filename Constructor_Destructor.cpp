#include<iostream>
using namespace std;
class myclass {
    int a;
public:
    myclass();
    ~myclass();
    void show();
};

myclass::myclass()
{
    cout<<"In constructor \n";
    a=10;
}

myclass::~myclass()
{
    cout << "Destructor...\n";
}

void myclass::show()
{
    cout << a<< "\n";
}

int main()
{
    myclass ob;
    ob.show();
    return 0;
}

