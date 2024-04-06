#include <iostream>

using namespace std;
class Stack
{
    int* arr;
    int tos;
    int size;
public:
    Stack(Stack const &s)
    {
        size = s.size;
        tos = s.tos;
        delete [] arr;
        arr = new int [size];
        int i;
        for(i=0; i<tos; i++)
        {
            arr[i]=s.arr[i];
        }
        cout<<"copyyyyyy";
    }

    Stack()
    {
        tos=0;
        size = 5;
        arr = new int [size];
    }

    Stack(int _size)
    {
        tos=0;
        size = _size;
        arr = new int [size];
        //cout<<"one contr";
    }
    Stack operator=(Stack const & s)
    {
        size = s.size;
        tos = s.tos;
        delete [] arr;
        arr = new int [size];
        int i;
        for(i=0; i<tos; i++)
        {
            arr[i]=s.arr[i];
        }
        return *this;
    }
    Stack operator+(Stack const& s)
    {
        Stack res(size+s.size);
        res.tos=tos+s.tos;
        for(int i=0; i<tos; i++)
            res.arr[i]=arr[i];
        int z=tos,i=0;
        while(z<res.tos)
        {
            res.arr[z]=s.arr[i];
            z++;
            i++;
        }
        return res;
    }

    int push(int d)
    {
        if(tos==size)
        {
            cout<<"is full";

        }
        else
        {
            arr[tos]=d;
            tos++;
            return 1;
        }
    }
    int pop(int & d)
    {
        if(tos==0)
        {
            cout<<"is empty\n";
            return 0;
        }
        else
        {
            tos--;
            d=arr[tos];
            return 1;

        }
    }
    int getTos()
    {
        return tos;
    }

};
void viewContent(Stack & s);
int main()
{
    Stack s1(7),s2(4),s3, s4 , s5(5);

    s1.push(10);
    s1.push(12);
    s1.push(14);
    s1.push(16);
    s1.push(18);
    s1.push(18);
    s1.push(18);

    s2.push(2);
    s2.push(4);
    s2.push(10);

    s4=s1;
    viewContent(s4);

  cout<<"---------- \n";

    s3=s1+s2;

    viewContent(s3);

  cout<<"---------- \n";
    return 0;
}
void viewContent(Stack & s)
{
    int x=0;
    while(s.pop(x)==1)
    {
        cout<<x<<endl;
        if(s.getTos()==0)
            break;
    }
}
