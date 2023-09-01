// Common friend functions between two classes

#include<bits/stdc++.h>

using namespace std;
class B;
class A{
    int a;
    public:
        A(int x){
            a = x;
        }
        friend void fun(A,B);
};

class B{
    int b;
    public:
        B(int x){
            b = x;
        }
        friend void fun(A,B);
};

void fun(A ob1, B ob2){
    cout<<"Sum is = "<<ob1.a + ob2.b<<endl;
}
int main(){
    A obj1(5);
    B obj2(6);
    fun(obj1, obj2);
    return 0;
}