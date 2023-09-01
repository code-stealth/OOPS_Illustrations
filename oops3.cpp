// Implementing Default and Parameterized Constructor along with Destructor.

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int id;

        Student(){
            name = "";
            id = -1;
            cout<<"Default Constructor is Called"<<endl;
        }

        Student(string name, int id){
            this->name = name;
            this->id = id;
            cout<<"Parameterized Constructor is Called"<<endl;
        }

        ~Student(){
            cout<<"Destructor is Called"<<endl;
        }

        void printDetails(){
            cout<<"Student name is: "<<name<<endl;
            cout<<"Student ID is: "<<id<<endl;
        }
};

int main(){
    Student st1;
    st1.name = "Chirag";
    st1.id = 1;
    st1.printDetails();
    {
        Student st2("Jay", 2);
        st2.printDetails();
        {
            Student st3("Ananjay", 3);
            st3.printDetails();
        }
    }
    return 0;
}