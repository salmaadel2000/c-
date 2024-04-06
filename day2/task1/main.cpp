#include <iostream>

using namespace std;
int swap(int &a, int & b);
int main()
{
    int x=10;
    int y=20;
  swap(x,y);
  cout << x <<" :"<<y;
    return 0;
}
int swap(int &a, int & b){
    int temp=a;
    a=b;
    b=temp;
}
