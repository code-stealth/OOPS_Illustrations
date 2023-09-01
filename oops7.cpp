// Shallow copy in copy Constructor

#include<bits/stdc++.h>

using namespace std;

class Dummy{
    int a,b;
    int *p;
    public:
        Dummy(){
            p = new int;
        }
        void setData(int x, int y, int z){
            a = x;
            b = y;
            *p = z;
        }
        void showData(){
            cout<<"a = "<<a<<" b = "<<b<<" *p = "<<*p<<endl;
        }
        Dummy(Dummy &t){
            a = t.a;
            b = t.b;
            p = t.p;
        }
};

int main(){
    Dummy d1;
    d1.setData(5, 6, 7);
    d1.showData();

    Dummy d2(d1);
    d2.showData();
    // the below statement will cause shallow copy. 
    d2.setData(1, 2, 3);
    d2.showData();
    d1.showData();
}