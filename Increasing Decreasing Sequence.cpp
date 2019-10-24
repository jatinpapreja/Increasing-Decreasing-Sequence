#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int j=0;
    while((a[j]>a[j+1])&&(j<n))
    {
        j++;
    }
    while((a[j]<a[j+1])&&(j<n))
    {
        j++;
    }
    if(j==n)cout<<"true";
    else cout<<"false";
    return 0;
}
