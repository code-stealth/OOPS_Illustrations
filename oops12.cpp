// Friend Function Illustration

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

        friend void fun(Complex);
};

void fun(Complex c){
    cout<<"sum is = "<<c.a+c.b<<endl;
}

int main(){
    Complex c1, c2;
    c1.setData(1, 2);
    fun(c1);
    return 0;
}