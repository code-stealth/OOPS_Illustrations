// multiple inheritance 

#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "this is a constructor" << endl;
    }

    void display()
    {
        cout << "Displaying A" << endl; 
    }
};

class B{
    public:
    B()
    {
        cout << "constructor B" << endl;
    }
    void display()
    {
        cout << "Displaying B" << endl;
    }
};

class C: public A, public B{    
};

int main()
{
    C c;
    // c.A::display();
    c.A::display();

}