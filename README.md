EXPERIMENT 4

Aim:
To study and implement C++ Bitwise Operators.

Theory:
In C++, operators are special symbols that perform operations on operands. They are categorized into various types based on their functionality:

Bitwise Operators: Operate on bits and perform bit-level operations.

• & → Bitwise AND

• | → Bitwise OR

• ^ → Bitwise XOR

• ~ → Bitwise NOT

• << → Left shift

• >> → Right shift

CODE:-
```
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
```

OUTPUT:-

![Experiment4 JPG](https://github.com/user-attachments/assets/eb5d603c-65e4-4165-b86c-8e1d138292fd)


CONCLUSION- we learned how to use Bitwise operators in C++.
