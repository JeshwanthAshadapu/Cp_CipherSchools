#include<bits/stdc++.h>
using namespace std;


int findmajorityelement(int arr[],int n)
{
    if(arr[0]>arr[1])
    {
        return 0;
    }
    if(arr[n-1]>arr[n-2])
    {
        return n-1;
    }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[n-1] && arr[i]>arr[n+1])
            {
                return i;
            }
        }
    return -1;
}
int main()
{
    int arr[]={10,20,40,15,60,55};
    int n=sizeof(arr);
    cout<<"peak element is "<<findmajorityelement(arr,n);
    return 0;
}