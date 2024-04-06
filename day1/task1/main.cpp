#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "add size pls of array "<< endl;
    cin >> size ;
    cout << "add num pls of array "<< endl;
    int * ptr = new int [size];
    for (int i=0;i<size;i++){
        cin >> ptr[i];
    }
    for (int i=0;i<size;i++){
        cout<< ptr[i] << " ,";
    }
    cout<<"hii";
    delete[] ptr;
    return 0;
}
