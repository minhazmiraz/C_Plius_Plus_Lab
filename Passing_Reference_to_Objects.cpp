#include<iostream>
using namespace std;

class myclass{
    int who;
public:
    myclass(int n){
        who=n;
        cout<< "Constructing "<<who<<"\n";
    }
    ~myclass(){cout<<"Destructing "<<who<<"\n";}
    int set_o(int o){who=o;}
    int id(){return who;}
};

void f(myclass o)
{
    o.set_o(2);
    myclass v(3);
    cout<<"Received "<<o.id()<<"\n";
}
int main()
{
    myclass x(1);
    f(x);
    return 0;
}
