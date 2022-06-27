#include <iostream>
#include <conio.h>
using namespace std;
void fibonacciseries(int n,int first, int second )
{
    cout<<first<<" ";
    if(n==1)
    {
        return;
    }
    fibonacciseries(n-1,second,first+second);
}
int main()
{
    int n;
    cout<<"Enter n value for the number of terms of serie : ";
    cin>>n;
    fibonacciseries(n,0,1);
    return 0;
}