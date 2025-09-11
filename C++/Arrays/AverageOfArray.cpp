#include<bits/stdc++.h>
using namespace std;

int find_average(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
         sum+=arr[i];
    }
    return double(sum)/n;
}


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<find_average(arr,n);

    return 0;
}