#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iNo1;
        int iNo2;

        Arithematic()
        {
            iNo1 = 0;
            iNo2 = 0;
        }

        Arithematic(int A, int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns; 
        }

        int Substraction()
        {
            int iAns = 0;
            iAns = iNo1 - iNo2;
            return iAns; 
        }
};

int main()
{
    Arithematic aobj1(11,10);
    Arithematic aobj2(21,20);

    int iRet = 0;

    iRet = aobj1.Addition();
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = aobj1.Substraction();
    cout<<"Substraction is : "<<iRet<<"\n";
    
    iRet = aobj2.Addition();
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = aobj2.Substraction();
    cout<<"Substraction is : "<<iRet<<"\n";
    
    return 0;
}