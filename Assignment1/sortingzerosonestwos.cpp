/*#include<bits/stdc++.h>
using namespace std;

void sorted012(int arr[],int n)
{
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count1=count1+1;
        }
        else if(arr[i]==1)
        {
            count2=count2+1;
        }
        else{
            count3=count3+1;
        }
    }
    int i=0;
    while(count1>0)
    {
        arr[i]=0;
        i=i+1;
        count1=count1-1;
    }
    while(count2>0)
    {
        arr[i]=1;
        i=i+1;
        count2=count2-1;
    }
    while(count3>0)
    {
        arr[i]=2;
        i=i+1;
        count3=count3-1;
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={0,0,0,0,2,2,2,2,1,1,1,1};
    int n=sizeof(arr);
    sorted012(arr,n);
    
}*/

#include <bits/stdc++.h> 
using namespace std; 


void sortArr(int arr[], int n) 
{ 
    int i, count0 = 0, count1 = 0, count2 = 0; 

    for (i = 0; i < n; i++) { 
        switch (arr[i]) { 
        case 0: 
            count0++; 
            break; 
        case 1: 
            count1++; 
            break; 
        case 2: 
            count2++; 
            break; 
        } 
    } 

    i = 0; 

    while (count0 > 0) { 
        arr[i++] = 0; 
        count0--; 
    } 
  

    while (count1 > 0) { 
        arr[i++] = 1; 
        count1--; 
    } 

    while (count2 > 0) { 
        arr[i++] = 2; 
        count2--; 
    } 

    for (int i = 0; i < n; i++) 
    {
         cout << arr[i] << " "; 
    }
       
} 

int main() 
{ 
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
    int n = sizeof(arr) / sizeof(int); 
  
    sortArr(arr, n); 
  
    return 0; 
} 