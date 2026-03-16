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

class Derived : public Base  //ERROR
{
  public:

  int x;





};


int main()
{
   
    Base *bp = new Derived(); //up casting 

    

   

    

    return 0;
}
