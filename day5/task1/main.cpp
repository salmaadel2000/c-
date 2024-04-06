#include <iostream>

using namespace std;
class Point
{
    int x;
    int y;
public:

    Point(int _xy)
    {
        y=x=_xy;
        cout <<"point one par cons"<<endl;
    }
    Point(){
       cout <<"point defult"<<endl;
    }
    Point(int _x,int _y)
    {
        x=_x;
        y=_y;
        cout <<"point 2 para cons"<<endl;
    }
    void setX(int _x)
    {
        x=_x;
    }
    void setY(int _y)
    {
        y=_y;
    }
    void setPoint(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void print ()
    {
        cout<<x<<":"<<y<<endl;
    }
    ~Point()
    {
        cout<<"des for point"<<endl;
    }

};
class Rec
{
    Point p1;
    Point p2;
public:
    Rec()
    {
        cout <<"rec defult cons"<<endl;
    }
    Rec(int x1,int y1,int x2,int y2)
    {
        p1.setPoint(x1,y1);
        p2.setPoint(x2,y2);
        cout<<"2 recc"<<endl;
    }
    void print()
    {
        p1.print();
        p2.print();
    }
    void setP1(int x,int y)
    {
        p1.setPoint(x,y);
    }
    void setP2(int x,int y)
    {
        p2.setPoint(x,y);
    }
    void setPoint(Point p)
    {
        p2=p;
    }
    ~Rec()
    {
        cout<<"des for rec"<<endl;
    }
};
class Tra
{
    Point p3,p4,p5;
public:
    void setP3(int x,int y)
    {
        p3.setPoint(x,y);
    }
    void setP4(int x,int y)
    {
        p4.setPoint(x,y);
    }
    void setP5(int x,int y)
    {
        p5.setPoint(x,y);
    }
    Point getP3()
    {
        return p3;
    }
    Point getP4()
    {
        return p4;
    }
    Point getP5()
    {
        return p5;
    }
    void print()
    {
        p3.print();
        p4.print();
        p5.print();
    }
    Tra()
    {
        cout<<"defult for tar"<<endl;
    }
    ~Tra()
    {
        cout<<"des for tar"<<endl;
    }
    Tra(int x1,int y1,int x2,int y2,int x3,int y3):p4(x1,y1),p5(x2,y2),p3(x3,y3)
    {
       /* p3.setPoint(x1,y1);
        p4.setPoint(x2,y2);
        p5.setPoint(x3,x3);*/
          cout<<" para cons for tar"<<endl;
    }
};
class Circ{
     Point p1;
     int rad;
public:
    Circ(int x1=0,int y1=0,int _rad=0):p1(x1,y1)
    {
        p1.setPoint(x1,y1);
        rad=_rad;
    }
    void print()
    {
        p1.print();
        rad=3;
        cout<<rad;
    }
    void setP1(int x,int y)
    {
        p1.setPoint(x,y);
    }
      Point getP1()
    {
        return p1;
    }
    void setP1(Point p)
    {
        p1=p;
    }
    ~Circ()
    {
        cout<<"des for circ"<<endl;
    }
};
int main()
{
    Rec r1(10,20,30,40);
    r1.print();
    return 0;
}
