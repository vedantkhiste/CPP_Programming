#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
        void gun()
        {
            cout<<"Inside Base gun\n";
        }
        void sun()
        {
            cout<<"Inside Base s¯¯¯un\n";
        }
        void bun()
        {
            cout<<"Inside Base bun\n";
        }
};

class Derived : public Base
{
    public:
        int x;  
        void gun()
        {
            cout<<"Inside Derived gun\n";
        }
        void sun()
        {
            cout<<"Inside Derived sun\n";
        }
        void run()
        {
            cout<<"Inside Derived run\n";
        }
        void mun()
        {
            cout<<"Inside Derived mun\n";
        }
};

int main()
{
    Base *bp1 = new Base();             // Nocasting
    Derived *dp1 = new Derived();       // Nocasting
    Base *bp2 = new Derived();          // Upcasting
    Derived *dp2 = new Base();          // Downcasting      ERROR

    return 0;
}