
//Riddhi Musale
//Prn:23070123108
//Exp 4 Bitwise Operators 
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the value of a ";
    cin>>a; 
    cout<<"enter the value of b: ";
    cin>>b; 
    cout<< "bitwise AND:"<<(a&b)<<endl;
    cout<< "bitwise OR:"<<(a|b)<<endl;
    cout<< "bitwise XOR:"<<(a^b)<<endl;
    cout<< "bitwise NOT:"<< (a-b)<<endl;
    cout<< "bitwise LEFT SHIFT:"<<(a<<b)<<endl;
    cout<< "bitwise RIGHT SHIFT:"<< (a>>b)<<endl;

    return 0; 
}