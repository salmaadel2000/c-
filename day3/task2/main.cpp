#include <iostream>

using namespace std;
 class Stack {
      int arr[2];
      int tos;
      int size;
  public:
    Stack(){
        tos=0;
        size=2;
    }
    int push(int d){
        if(tos==size){
            cout<<"stack is full";
            //return 0;
        }
        else{
           arr[tos]=d;
           tos++;
           return 1;
        }
    }
     int pop(int &d){
         if(tos==0){
            cout<<"stack is empty";
            return 0;
         }
         else{
            tos--;
            d=arr[tos];
            return 1;
         }
     }
  };
int main()
{

    Stack s1;
    s1.push(10);
    s1.push(1);
    int x=0;
    if(s1.pop(x)==1){
        cout<<x<<",";
    }
    if(s1.pop(x)==1){
        cout<<x<<",";
    }
    return 0;
}
