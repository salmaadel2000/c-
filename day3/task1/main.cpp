
#include <iostream>

using namespace std;
class Complex{
    int real;
    int img;
public:
    void setReal(int _real){
       real=_real;
    }
    int getReal(){
        return real;
    }
     void setImg(int _img){
       img=_img;
    }
    int getImg(){
        return img;
    }
    void print (){
         if(img>0)
    cout<< real<<"+"<< img<<"j" <<endl;
    else if (img<0)
    cout<< real<<"-"<< img<<"j" <<endl;
    else
        cout<< real <<endl;
    };
    Complex(){
        cout<<"constttttt"  <<endl;
    }
    Complex(int _real){
        real=_real;
    }
     Complex(int _real,int _img){
        real=_real;
        img=_img;
    }
    ~Complex(){
       cout<<"destttttt" <<endl;
    }
    Complex complex_Add(Complex c){
        Complex res;
        res.real = real + c.real;
        res.img = img + c.img;
        return res;
    }
    Complex (Complex &c){
        cout<<"copy";
        real=c.real;
        img=c.img;
    }
};
Complex add(Complex c1, Complex c2);
/*Complex add(Complex & c1, Complex & c2);*/
int main()
{
    Complex c1(10);
    Complex c2(c1);
   Complex c3,c4;
    Complex c5(1);
    Complex c6(2,3);
    c1.setReal(10);
    c1.setImg(20);
    c2.setReal(30);
    c2.setImg(40);
    c1.print();
    c2.print();
    c3=c1.complex_Add(c2);
    c3.print();
    c4=add(c1,c2);
    c4.print();
    return 0;
}
Complex add(Complex c1, Complex c2){
    Complex res;
    res.setReal(c1.getReal()+c2.getReal());
    res.setImg(c1.getImg()+c2.getImg());
    return res;
}
Complex add(Complex & c1, Complex & c2){
    Complex res;
    res.setReal(c1.getReal()+c2.getReal());
    res.setImg(c1.getImg()+c2.getImg());
    return res;
}

