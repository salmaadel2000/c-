#include <iostream>

using namespace std;
class Shape
{
protected:
    int dim1;
    int dim2;
public:
    Shape(int _dim1=1, int _dim2=1)
    {
        dim1=_dim1;
        dim2=_dim2;
    }
    virtual void setDim1(int _dim1)
    {
        dim1=_dim1;
    }
   virtual void setDim2(int _dim2)
    {
        dim2=_dim2;
    }
    int getDim1(int _dim1)
    {
        return dim1;
    }
    int getDim2(int _dim2)
    {
        return dim2;
    }
    virtual void print()
    {
        cout<<dim1<<dim2;
    }
    virtual float getArea()
    {
        return 0;
    };

};
class Rec:public Shape
{
public:
    Rec(int _dim1=1, int _dim2=1):Shape(_dim1,_dim2) {   }


    float getArea()
    {
        return dim1*dim2;
    }
    void print()
    {
        Shape ::print();
    }
};
class Tri:public Shape
{
public:
    Tri(int _dim1=1,int _dim2=1):Shape(_dim1,_dim2){

    }
        float getArea()
    {
        return 0.5*dim1*dim2;
    }
    void print()
    {
        Shape ::print();
    }

};
class Spu:public Shape
{
public:
    Spu(int _dim1=1):Shape(_dim1,_dim1){ }
    void print()
    {
        Shape ::print();
    }
      float getArea()
    {
        return dim1*dim1;
    }
      void setDim1(int _dim1)
    {
        dim1=dim2=_dim1;
    }
    void setDim2(int _dim2)
    {
         dim2=dim1=_dim2;
    }
};
void myFun(Shape* s)
{
  cout<< s->getArea()<<endl;
}
int main()
{
    Rec r1(10,20);
    Tri t1(10,30);
    Spu s1(10);
    myFun(&r1);
    myFun(&t1);
    myFun(&s1);
    return 0;
}
