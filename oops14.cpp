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

        friend Complex operator + (Complex, Complex);
};

Complex operator + (Complex x, Complex y){
    Complex temp;
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    return temp;
}

int main(){
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c3 = c1 + c2;
    c3.showData();
    return 0;
}