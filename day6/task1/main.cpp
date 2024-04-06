
#include <cstring>
#include <iostream>
using namespace std;

class Person{
    protected:
int age;
int id;
char name[10];
public:
    Person(){
    cout<<"parametless cons";

    }
    Person(int _age){
    age =_age;
    strcpy(name,"undefined");
    id= 0;
    cout<<"one param cons";

    }
    Person(int _age,int _id){
    age =_age;
    strcpy(name,"undefined");
    id= _id;
    cout<<"two param cons";

    }
    Person(int _age,char* _name,int _id){
    age =_age;
    strcpy(name,_name);
    id= _id;
    cout<<"three param cons";

    }
    void setId(int _id){
    id =_id;
    }
    int getId(){
    return id;
    }
    void setAge(int _age){
    age =_age;
    }
    int getAge(){
    return age;
    }
    void setName(char* _name){
    strcpy(name ,_name);
    }
    char* getName(){
    return name;
    }
    void print(){

    cout<<"id : "<<id<<" - " <<" Name : "<<name<<" - "<<" Age : "<<age;

    }
    ~Person(){
        cout<<"dessss person";
    }
};
class Student : public Person{
char grade;
public:
    /*
    Student(){
        cout<<"paramtless cons";

    }*/
    Student(int _age ):Person(_age){
        cout<<"Student one para cons";
    }
    Student(int _id,int _age):Person(_id,_age){
        cout<<"Student two para cons";

    }
    Student(int _id,char* _name, int _age):Person(_id,_name,_age){
        cout<<"Student three para cons";

    }
    Student(int _id,char* _name, int _age,char _grade):Person(_id,_name,_age){
        grade =_grade;
        cout<<"Student four para cons"<<endl;

    }
    void setGrade(char _grade){
    grade =_grade;
    }
    char getGrade(){
    return grade;
    }
    void printStudent(){
    print();
    cout<<" - "<<"Grade : "<<grade<<endl;

    }
    ~Student(){
        cout<<"dessss Stu"<<endl;
    }
};
class Emp:public Person{
    int salary;
    public:
    void setSal(int _sal){
        salary=_sal;
    }
    int getSal(){
        return salary;
    }

     Emp(int _age ):Person(_age){
        cout<<"defult one para cons";

    }
    Emp(int _id,int _age):Person(_id,_age){
        cout<<"emp two para cons";

    }
    Emp(int _id,char* _name, int _age):Person(_id,_name,_age){
        cout<<"emp three para cons";

    }
    Emp(int _id,char *_name,int _age,int _sal):Person(_id,_name,_age){
        salary=_sal;
         cout<<"emp four para cons"<<endl;
    }
     void printEmp(){
    print();
    cout<<" - "<<"salary : "<<salary;

    }

};
int main()
{
    Student s1(1,"salma",20,'a');
    s1.printStudent();
    return 0;
}
