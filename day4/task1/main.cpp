#include <iostream>

using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex()
    {
        real=0;
        img=0;
        cout<<"parameterless cont "<<endl;
    }
    Complex (Complex const& c)
    {
        real=c.real;
        img=c.img;
        cout<<"copyyyyyy"<<endl;
    }
    Complex(int _real)
    {
        real=_real;
        img=0;
        cout<<" one parameter cont "<<endl;
    }

    Complex(int _real, int _img)
    {
        real=_real;
        img=_img;
        cout<<" two parameter cont "<<endl;
    }

    int setReal (int _real)
    {
        real=_real;
    }
    int setImg (int _img)
    {
        img=_img;
    }

    int getReal ()
    {
        return real;
    }

    int getImg ()
    {
        return img;
    }

    void print ()
    {

        if (img>0)
        {
            cout<<real << "+"<<img <<"j"<<endl;
        }
        else if (img<0)
        {
            cout<<real <<img <<"j"<<endl;
        }
        else
        {
            cout<<real<<endl;
        }

    }
    Complex add(Complex const &c)
    {
        Complex res;
        res.real=real+c.real;
        res.img=img+c.img;
        return res;
    }
    Complex operator +(Complex const &c)
    {
        Complex res;
        res.real=real+c.real;
        res.img=img+c.img;
        return res;
    }
    Complex operator+(int x)
    {
        Complex res;
        res.real=real+x;
        res.img=img;
        return res;
    }
    friend Complex operator +(int left,Complex right);
    Complex operator +=(Complex const &c)
    {
        real=real+c.real;
        img=img+c.img;
        return *this;
    }
    int operator ==(Complex &c)
    {
        if(real==c.real&&img==c.img)
        {
            return 1;
        }
        else
            return 0;
    }
    int operator !=(Complex c)
    {
        return !(*this==c);
    }
    Complex operator ++()
    {
        real++;
        return *this;
    }
    Complex operator ++(int)
    {
        Complex res(real,img);
        real++;
        return res;
    }
    explicit operator int(){
        return real;
    }
    ~Complex(){
        cout<<"dessssss"<<endl;
    }
};


int main()
{
    Complex c1(5,4),c2(2,3),c4(10,5),c3;
    c3=c1+c2;
    /*
    c4+=c3;
    c3=3+c1;
    c2=c1+3;
    c2=++c1;
    c2=c1++;*/
    /*c2=c1+3;
    c2.print();
    Complex c5=c4+c3;
    c4+=c3;
    c3=3+c1;
    c2=++c1;
    c4=c2++;*/
    /*Complex c5=c4+c3;
    c5.print();
    c2=c1+3;
    c2.print();
    c3=3+c1;
    c4+=c3;
    c4.print();
    if  (c1==c2)
        cout<<"yes"<<endl;
    else
        cout<<"noooooooo"<<endl;
    if(c1!=c2)
        cout<<"yes"<<endl;
    else
        cout<<"noooooooo" <<endl;
    c2=++c1;
    c2.print();
    c1.print();
    c3=c2++;
    c3.print();
    c2.print();
    int x=5;
    x=(int)c1;
    cout<<x;*/
    return 0;
}

Complex operator +(int left,Complex right)
{
    Complex res (right.real+left,right.img);
    return res;
}




















