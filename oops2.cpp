#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int id;

        void printName();

        void printId(){
            cout<<"Student Id is = "<<id<<endl;
        }
};
void Student :: printName(){
    cout<<"Student name is : "<<name<<endl;
}

int main(){
    Student st;
    st.name = "Chirag";
    st.id = 7;

    st.printName();
    st.printId();
    return 0;
}