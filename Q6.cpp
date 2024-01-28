#include<iostream>
using namespace std;
int main()
{
    cout<<"Swap Two numbers:"<<endl;
    int n1=6;
    int n2=9;
    cout<<"Before Swapping First Numaber Is:"<<n1<<endl;
    cout<<"Before Swapping Second Number Is:"<<n2<<endl;
    int n3;
    n3=n2;
    n2=n1;
    n1=n3;
    cout<<"After Swapping First Number Is:"<<n1<<endl;
    cout<<"After Swapping second Number Is:"<<n2<<endl;
    return 0;

}