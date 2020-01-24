#include<iostream>
using namespace std;
int evenorodd(int n)
{
    if(n % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
}


int main()
{
    int num;

    cout << "Input a number: ";
    cin >> num;

    evenorodd(num);
return 0;
}
