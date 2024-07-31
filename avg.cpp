#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<"Enter size"<<endl;
    cin>>n;
    int a[n]={0};
    cout<<"Enter "<< n<< " elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Average:" <<sum/n;
}
