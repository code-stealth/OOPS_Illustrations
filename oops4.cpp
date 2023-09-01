// Implementing all 3 access modifiers in the same code. 

#include<bits/stdc++.h>

using namespace std;

class Student{
    int id;
    protected:
        string branch;
    public:
        string name;
    
        void setId(int id){
            this->id = id;
        }
    
        void desplayID(){
            cout<<"id = "<<id<<endl;
        }
};

class Branch : public Student{
    public:
        void setBranch(string br){
            branch = br;
        }
        void desplayInfo(){
            cout<<"Name = "<<name<<endl;
            cout<<"Branch = "<<branch<<endl;
        }
};

int main(){
    Branch st;
    st.name = "Chirag";
    st.setBranch("ECE");
    st.setId(1);

    st.desplayInfo();
    st.desplayID();
}