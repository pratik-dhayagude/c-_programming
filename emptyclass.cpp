#include<iostream>

using namespace std;

class Demo
{
    public:
    void display()
    {
        cout<<"inside display\n";
    }
};

int main()
{
    Demo dobj;  //1byte
    cout<<sizeof(Demo);

    return 0;
}
