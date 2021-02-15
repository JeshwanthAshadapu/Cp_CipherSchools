#include<bits/stdc++.h>
using namespace std;

void findmajorityelement(vector<int>vec)
{
    int count=0,n=vec.size(),maxcount=0,res=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(vec[i]==vec[j])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            res=i;
        }
    }
   
    if(maxcount>n/2)
    {
        cout<<"majority element is "<<vec[res];
    }
    else{
        cout<<"No majority element";
    }
}
int main()
{
    vector<int>vec={1,2,2,2,3,4,4,5,2};
    findmajorityelement(vec);
    return 0;
}