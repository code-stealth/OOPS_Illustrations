// Static data members and static member functions.

#include<bits/stdc++.h>

using namespace std;

class Account{
    int balance;
    static float roi;
    public:
        void setBalance(int b){
            balance = b;
        }
        static void setRoI(float r){
            roi = r;
        }
        void show(){
            cout<<balance<<endl;
            cout<<roi<<endl;
        }
};
float Account::roi = 3.5f;
int main(){
    Account a1, a2;
    a1.setRoI(4.5f);
    a1.setBalance(55);
    Account::setRoI(5.5f);
    a1.show();
}