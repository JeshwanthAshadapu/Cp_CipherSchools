#include<bits/stdc++.h>
using namespace std;
int Binarysearch(vector<int>vec,int start,int end,int x)
{
    int mid;
    mid=(start+end)/2;
    if(x==vec[mid])
    {
        return mid;
    }
    else if(x>vec[mid])
    {
        start=mid+1;
        return Binarysearch(vec,start,end,x);
    }
    else if(x<vec[mid]){
        end=mid-1;
        return Binarysearch(vec,start,end,x);
    }
    else{
        return -1;
    }
    return 0;
}
int findpivot(vector<int>vec,int start, int end)
{
    int mid;
    mid=(start+(start-end))/2;
    if(start>end)
    {
        return -1;
    }

    if (start == end)
        return start;
    mid = start + (end - start)/2;
    if (mid < end && vec[mid] >= vec[mid + 1]) {
        return mid;
    }

    if (start < mid && vec[mid - 1] >= vec[mid]) {
        return mid - 1;
    }

    if (vec[start] <= vec[mid]) {
        return findpivot(vec, mid + 1, end);
    } else {
        return findpivot(vec, start, mid - 1);
    }
}
int searchinSortedRotated(vector<int>vec,int x)
{
   int i=0,j=vec.size()-1;
   int pivotelement=findpivot(vec,i,j);
   int res1=Binarysearch(vec,i,pivotelement,x);
   int res2=Binarysearch(vec,pivotelement+1,j,x);
   if(res1<0)
   {
       return res2;
   }
   else
   {
       return res1;
   }

}





int main()
{
    vector<int> vec = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 1, 2, 3, 4};
    //cout << findpivot(vec, 0, vec.size() - 1) << endl; 
    cout<<searchinSortedRotated(vec,8);
    return 0;
}