 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
    int arr[]={10,20,30};

    for(int x:arr)
    {
        x+=2;
    }

    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
 }