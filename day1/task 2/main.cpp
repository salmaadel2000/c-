#include <iostream>
#include <string.h>
using namespace std;
struct emp {
private:
    int id;
    int age;
    char name[10];
    public:

        void setId(int _id){
            if( _id >= 1)
                id =_id ;
            else
                cout<<"not valid" ;

        }

        int getId(){
            return id ;
        }

        void setage(int _age){
            if(_age<20&&_age>60){
                cout<<"not valid";
            }
            else{
                age=_age;
            }
        }
        int getage(){
            return age;
        }
        void setname(char * _name){
            if(strlen(_name)>1){
                strcpy(name,_name);
            }
            else{
                cout <<" not valid ";
            }
        }
        char* getname(){
            return name;
        }
        void info(){
            cout <<" name :"<< name <<" age :" <<age <<" id :" << id <<endl;

                    }

};
void printInfo(emp e2);
int main()
{
     emp e1;
     int id;
     int age;
     char name[10];
      cout<< "pls add your id";
     cin>> id ;
     e1.setId(id);
     cout<<"id = "<< e1.getId() <<endl ;
      cout<< "pls add your age";
      cin>> age ;
     e1.setage(age);
     cout<<"age = "<< e1.getage() <<endl ;
        cout<< "pls add your name";
      cin>> name;
     e1.setname(name);
     cout<<"name = "<< e1.getname() <<endl ;
    e1.info();
    printInfo(e1);


    return 0;
}
void printInfo(emp e2){
    cout<<"id = "<< e2.getId() <<endl ;
    cout<<"age = "<< e2.getage() <<endl ;
    cout<<"name = "<< e2.getname() <<endl ;
}
