#include <iostream>
using namespace std;

int main() {

    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout<<"a < b = "<<(a < b) <<endl;
    cout<<"a >> b= "<<(a>>b)<<endl;
    cout<<"a << b= "<<(a<<b)<<endl;
    cout<<endl;

    return 0;
}
/*
Output:
a = 12
b = 25
a & b = 8
a | b = 29
a ^ b = 21
a < b = 1
a >> b= 0
a << b= 402653184
*/