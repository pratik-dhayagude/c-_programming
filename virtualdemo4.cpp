#include<iostream>

using namespace std;
class Base 
{
  public:
  int i,j;
  void fun()
  {
    cout<<"inside Base fun\n";

  }
    void gun()
  {
    cout<<"inside Base gun\n";
    
  }
   virtual void sun()
  {
    cout<<"inside Base sun\n";
    
  }
   virtual void bun()
  {
    cout<<"inside Base bun\n";
    
  }

};

class Derived : public Base 
{
  public:

  int x;

    void gun()
  {
    cout<<"inside Derived gun\n";
    
  }
    void sun()
  {
    cout<<"inside Derived sun\n";
    
  }
   void run()
  {
    cout<<"inside Derived run\n";
    
  }
   void mun()
  {
    cout<<"inside Derived mun\n";
    
  }

};


int main()
{
    cout<<sizeof(Base)<<"\n";  //16
    cout<<sizeof(Derived)<<"\n";  //20
    Base *bp = new Derived(); //up casting 

    /*bp->fun();  //Base fun
    bp->gun();  //Base gun
    bp->sun();  //Base sun
    //bp->run();  //ERROR
    //bp->mun();  //ERROR
    bp->bun();  //Base bun
    */

   

    

    return 0;
}
