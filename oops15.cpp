// Operator Overloading using Friend Function

#include<bits/stdc++.h>

using namespace std;

class Complex{
    int a, b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }

        void showData(){
            cout<<"a = "<<a<<" b = "<<b<<endl;
        }

        friend Complex operator -(Complex);
};

Complex operator - (Complex c){
    Complex temp;
    temp.a = -c.a;
    temp.b = -c.b;
    return temp;
}

int main(){
    Complex c1, c2;
    c1.setData(1, 2);
    c1.showData();
    c2 = -c1;
    c2.showData();
}