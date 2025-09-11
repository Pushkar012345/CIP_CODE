#include<bits/stdc++.h>
using namespace std;

//add function
int add(int arr[],int n)
{
    int answer=0;

    for(int i=0;i<n;i++)
    {
        answer+=arr[i];
    }
    return answer;
}



int main()
{
    int n;
    cin>>n;    //input size of array
    int arr[n]; //decare a narray of size n

    //input array elements
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //call add function and store result in sum
    int sum=add(arr,n);
    cout<<sum;

    return 0;


}