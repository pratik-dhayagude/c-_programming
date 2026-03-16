#include<iostream>

using namespace std;
class Base 
{
  public:
  int i,j;
  int Addition(int a,int b)
  {
    return a+b;  //concrete 
  }
  virtual int subtraction(int a,int b)=0;  //abstraction
 
};

class Derived : public Base  
{
  public:

  int x;
  int subtraction(int a,int b)  //concrete
  { 
    return a-b;

  }
    int multiplication(int a,int b)  //concrete
  { 
    return a*b;

  }




};


int main()
{
   
    Base *bp = new Derived(); //up casting 

    int iRet = 0;

    iRet = bp->Addition(11,10);  //21

    cout<<iRet<<"\n";
    iRet = bp->subtraction(11,10);  ///1

    cout<<iRet<<"\n";
    iRet = bp->multiplication(11,10); 

    cout<<iRet<<"\n";

    

   

    

    return 0;
}
