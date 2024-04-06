#include <iostream>

using namespace std;
class Stack
{
public:
    int *arr;
    int tos;
    int size;
    Stack()
    {
        tos=0;
        size=2;
        arr=new int [size];
    }
    Stack(int _size)
    {
        tos=0;
        size=_size;
        arr=new int [size];
    }
    Stack(Stack const & s){
        tos=s.tos;
        size=s.size;
        arr=new int [size];
        for(int i=0;i<tos;i++){
            arr[i]=s.arr[i];
        }
    }
    int push(int d)
    {
        if(tos==size)
        {
            cout<<"stack is full";
            //return 0;
        }
        else
        {
            arr[tos]=d;
            tos++;
            return 1;
        }
    }
    int pop(int &d)
    {
        if(tos==0)
        {
            cout<<"stack is empty";
            return 0;
        }
        else
        {
            tos--;
            d=arr[tos];
            return 1;
        }
    }
    ~Stack(){
        delete [] arr;
    }
};
void ViewAll(Stack &s);
int main()
{
    Stack s1(2);
    Stack s2(s1);
    s1.push(10);
    s1.push(1);
    ViewAll(s1);
    ViewAll(s2);
    return 0;
}
void ViewAll(Stack &s){
    int res;
    while(s.pop(res)==1)
        cout<<res<<endl;
}


