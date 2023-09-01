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

        Complex operator-(){
            Complex temp;
            temp.a = -a;
            temp.b = -b;
            return temp;
        }
};

class Integer{
    int x;
    public:
        void setData(int a){
            x = a;
        }
        void showData(){
            cout<<"x  = "<<x<<endl;
        }

        Integer operator ++(){
            Integer i;
            i.x = ++x;
            return i;
        }

        Integer operator ++(int){
            Integer i;
            i.x = x++;
            return i;
        }
};

int main(){
    Complex a1, a2;
    a1.setData(1,2);
    a2 = -a1;
    a2.showData();
    
    cout<<"Overlaoding Increment Operator"<<endl;
    Integer i1, i2, i3; 
    i1.setData(3);
    i1.showData();
    i2 = ++i1;
    i3 = i1++;
    i1.showData();
    i2.showData();
    i3.showData();
    return 0;


}