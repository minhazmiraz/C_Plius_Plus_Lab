#include<iostream>
#include<cstring>
using namespace std;

class inventory{
    char item[20];
    double cost;
    int on_hand;
public:
    inventory(char *i, double c, int o)
    {
        strcpy(this->item,i);
        this->cost=c;
        this->on_hand=o;
    }
    void show();
};

void inventory::show()
{
    cout<<this->item;
    cout<<":$"<<this->cost;
    cout<<" On hand: "<<this->on_hand<<"\n";
}

int main()
{
    inventory ob("wrench",4.95,4);
    ob.show();
    return 0;
}
