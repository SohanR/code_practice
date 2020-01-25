#include<iostream>
using namespace std;

int palindrome(int x)
{
    int rev =0,num;

    num=x;
    while(x !=0)
    {
        rev=(rev * 10) + (x % 10);
        x /=10;
    }

    if(rev == num)
    {
        cout <<"True";
    }

    else
    {
        cout <<"False";
    }

}

int main()
{
    int n;

    cout <<"Enter a Number: ";
    cin >>n;

    palindrome(n);



return 0;
}
