#include <iostream>
int main();
using namespace std;
class cls{
        int num1,num2,i;
        char op;
public:
    cls(int a,int b,char c)
    {
        num1 = a;
        num2 = b;
        op = c;
    }
void fun()
{
    char a;
    if(op == '+')
    {
        cout << "sum is"<<num1+num2;
    }
    else if(op == '-')
    {
        cout << "diff is"<<num1-num2;
    }
    else if(op == '*')
    {
        cout << "mul is"<<num1*num2;
    }
    else if(op == '/')
    {
        cout << "div is"<<num1/num2;
    }
    else if(op == '%')
    {
        cout << "modulo is"<<num1%num2;
    }
    cout << "\nenter y to continue else n";
    cin >> a;
    if(a == 'y')
    {
        main();
    }
    else{
        cout <<"Destructor Called";
    }
}
~cls()
{
    cout << "Destructor called";
}
};

int main()
{
    int num1,num2;
    char op;
    cout << "enter a number\n";
    cin >>num1;
    cout <<"enter second number\n";
    cin>>num2;
    cout << "enter operator\n";
    cin>>op;
    cls obj(num1,num2,op);
    obj.fun();





}

/*#include <iostream>

using namespace std;
class cls{
        int num1,num2,i;
        char op;

~cls()
{
    cout << "Destructor called";
}
};
void fun()
{
    char op,a;
    int num1,num2;
    cout << "enter a number\n";
    cin >>num1;
    cout <<"enter second number\n";
    cin>>num2;
    cout << "enter operator\n";
    cin>>op;
    if(op == '+')
    {
        cout << "sum is"<<num1+num2;
    }
    else if(op == '-')
    {
        cout << "diff is"<<num1-num2;
    }
    else if(op == '*')
    {
        cout << "mul is"<<num1*num2;
    }
    else if(op == '/')
    {
        cout << "div is"<<num1/num2;
    }
    else if(op == '%')
    {
        cout << "modulo is"<<num1%num2;
    }
    cout << "\nenter y to continue else n";
    cin >> a;
    if(a == 'y')
    {
        fun();
    }
    else{
        cout <<"Destructor Called";
    }
}
int main()
{

    fun();



}
*/
