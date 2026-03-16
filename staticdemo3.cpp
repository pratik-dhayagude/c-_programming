#include<iostream>

using namespace std;
class demo
{
    public:
    int i;
    int j;
    static int x;


    demo()
    {
        this->i=0;
        this->j=0;
    }
    demo(int a,int b)
    {
        this->i=a;
        this->j=b;
    }
    void fun() //void fun(demo*const this )
    {
        cout<<"inside fun\n";
        cout<<"value of i is :"<< this->i<<"\n";
        cout<<"value of j is :"<< this->j<<"\n";
        cout<<"value of x is :"<<x<<"\n";
      

    }
    static void gun() //static void gun 
    {
       cout<<"inside gun\n";
       //cout<<"j\n"; //error
       
       // cout<<"i\n";

       cout<<"x\n";
       


    }

};

int demo:: x=11;  //:: (scope resulation operator) 
int main()

{
    demo::gun();
    cout<<"value of x is:"<<demo::x<<"\n";
    demo obj(10,20);
    obj.fun();
    obj.gun(); //demo::gun()
    cout<<"size of obj is :"<<sizeof(obj)<<"\n";
    return 0;
}