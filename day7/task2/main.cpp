#include <iostream>
#include <graphics.h>
using namespace std;
class Shape{
    public:
    virtual void draw(){

    }
};

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
    Point(int _x=0,int _y=0)
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
class Rec:public Shape
{
    Point p1;
    Point p2;
public:
    Rec()
    {
        cout <<"rec defult cons"<<endl;
    }
    Rec(int x1,int y1,int x2,int y2):p1(x1,y1),p2(x2,y2)
    {

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
    void draw()
    {
        rectangle(p1.getX(),p1.getY(),p2.getX(),p2.getY());
    }
};
class Circ:public Shape
{
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
    void draw ()
    {
        circle(p1.getX(),p1.getY(),rad);
    }
};
class pic:public Shape
{
    Rec *rptr;
    Circ *cptr;
    int nr;
    int nc;
public:
    pic()
    {
        rptr=NULL;
        nr=0;
        cptr=NULL;
        nc=0;
    }
    pic(Rec * _rptr,Circ *_cptr,int _nr,int _nc)
    {
        rptr=_rptr;
        cptr=_cptr;
        nr=_nr;
        nc=_nc;
    }
    void paint ()
    {
        for(int i=0; i<nr; i++)
            rptr[i].draw();
        for(int i=0; i<nc; i++)
            cptr[i].draw();

    }
};
void drawShape(Shape * s){
    s->draw();
}
int main()
{
    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"");
     Rec r1(50,50,100,100);
    Circ c1(100,100,30);
     drawShape(&r1);
     drawShape(&c1);
    getch();
    closegraph();
    return 0;
}
