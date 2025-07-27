#include <iostream>

using namespace std;

int main()
{
    int a =123;
    cout << a << endl;
    
    char b ='v';
    cout << b <<endl;

    bool c = true;
    cout << c <<endl;

    float d =1.2;
    cout << d <<endl;

    double e =1.234;
    cout <<e<<endl;

    int size = sizeof(a); 
    cout<<"Size of a is:"<<size<<endl;

    int f = 'a'; //Typecasting into integer
    cout<<f<<endl;

    char ch = 98; //Typecasting into character
    cout<<ch<<endl;

    char ch1 = 123456; //overflow in implicit constant conversion, last byte is 64 which represents '@'
    cout<<ch1<<endl;
}