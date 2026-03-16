#include<iostream>

using namespace std;

int main()
{
    int length=0;
    int *Arr=NULL;
    cout<<"Enter the number of Element :\n";
    cin>>length;
     //step1:allocate the memory 
     Arr=new int [length];
     if(Arr==NULL)
     {
        cout<<"unable to allocate the memory\n";

     }
     else
     {
        cout<<"memory get sucessfully allocated\n";

     }
     //step2:use the memory 
     //step3:dealocate the memory

     delete [] Arr;


    return 0;

}