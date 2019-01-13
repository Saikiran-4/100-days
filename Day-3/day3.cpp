#include<bits/stdc++.h>
using namespace std;
int multiply(int x, int res[], int res_size);
void factorial(int n)
{
    int result[500];
    result[0] = 1;
    int size = 1;
    for (int x=2; x<=n; x++)
        size = multiply(x, result,size);

    cout << "Factorial of given number is \n";
    for (int i=size-1; i>=0; i--)
        cout << result[i];
}
int multiply(int x, int result[], int size)
{
    int carry = 0;
    for (int i=0; i<size; i++)
    {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry  = prod/10;
    }
    while (carry)
    {
        result[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}
