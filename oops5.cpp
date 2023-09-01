// Using Friend Class to Access the private and protected members of a class.

#include<bits/stdc++.h>

using namespace std;

class Student{
    string name;
    protected:  
        int id;
    public:
        Student(){
            name = "Chirag";
            id = 1;
        }
    
    // friend class declaration. 
    friend class F;
};

class F{
    public:
        void printDetails(Student s){
            cout<<"Name: "<<s.name<<endl;
            cout<<"id: "<<s.id<<endl;
        }
};

int main(){
    Student s;
    F fri;
    fri.printDetails(s);
}