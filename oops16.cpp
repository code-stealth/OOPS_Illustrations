// multilevel inheritance

#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "this is a constructor" << endl;
    }

    void displayA()
    {
        cout << "Displaying A" << endl; 
    }
};

class B: public A{
    public:
    B()
    {
        cout << "constructor B" << endl;
    }
    void displayB()
    {
        cout << "Displaying B" << endl;
    }
};

class C: public B{
    public:
    
};

int main()
{
    C c;
    c.displayA();c.displayB();
}