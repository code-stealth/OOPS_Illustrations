// Copy constructor

#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int rollno;
        Student(){}
        Student(Student& t){
            cout<<"Copy constructor is called"<<endl;
            name = t.name;
            rollno = t.rollno;
        }
};

int main(){
    Student s1;
    s1.name = "Chirag";
    s1.rollno = 7;
    Student s2(s1);
    Student s3 = s1;
    Student s4;
    s4 = s1;
    return 0;
}