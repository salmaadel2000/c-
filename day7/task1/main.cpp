#include<iostream>
using namespace std;
class Parent {
    protected:
    int x;
    int y;
public:
    Parent(int _x=0,int _y=0) {
        x=_x;
        y=_y;
    }
    void setX(int _x) {
        x= x;
    }
    void setY(int _y) {
        y=_y;
    }
    void setParent(int _x,int _y) {
        x=_x;
        y=_y;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    virtual void print() {
        cout<<x<<":"<<y;
    }
    virtual int add() {
        return x+y;
    }
    virtual int multi(){
        return x*y;
    }
};
class Child:public Parent {
    int z;
public:
    Child(int _x=0,int _y=0,int _z=0):Parent(_x,_y) {
        z=_z;
    }
    void print() {
        Parent::print();
        cout<<":"<<z;
    }
    int add() {
        return Parent::add()+z;
    }
    int multi(){
        return Parent ::multi()*z;
    }
};

class Child2:public Parent {
    int z,a;
public:
    Child2(int _x,int _y,int _z,int _a):Parent(_x,_y) {
        z=_z;
        a=_a;
    }
    void print() {
        Parent::print();
        cout<<":"<<z<<":"<<a<<":";
    }
    int add() {
        return Parent::add()+z+a;
    }
    int multi(){
        return Parent::multi()*z*a;
    }
};
void myfun(Parent* c) {
    c->print();
    cout<<endl;
};
void myfun2(Parent * arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i]->add();
    }
    cout<<"sum is "<<sum<<endl;
}
void myfun3(Parent * arr[],int size){
    int mul=0;
    for(int i=0;i<size;i++){
        mul+=arr[i]->multi();
    }
    cout<<"mul is "<<mul<<endl;
}
int main()
{
   Parent p1(1,2);
    Child c1(3,4,5);
    Child2 c2(6,7,8,9);
    myfun(&c2);
    cout<<endl;
    Parent* ptrp=&c1;
    ptrp->print();
    cout<<endl;
    ptrp=&c2;
    ptrp->print();
    cout<<endl;
    Parent *arr2[3]={&p1,&c1,&c2};
     myfun2(arr2,3);
    myfun3(arr2,3);
    return 0;
}
