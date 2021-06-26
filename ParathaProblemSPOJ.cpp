#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
bool canCook(int rank[],int cook,int paratha,int mid)
{
    int sum=0;
    int cnt=0;
    int total=0;
    for(int k=0;k<cook;k++)
    {
            for(int l=1;l<INT_MAX;l++)
            {
                sum+=rank[k]*l;
                if(sum>mid){
                    break;
                }
                cnt=l;
            }
                total+=cnt;
                sum=0;
                cnt=0;
    }
    if(total>=paratha)
    {
        return true;
    }
    return false;
}
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int paratha;
        cin>>paratha;
        int cook;
        cin>>cook;
        int ans=0;
        int rank[10000];
        for(int j=0;j<cook;j++)
        {
            cin>>rank[j];
        }
        int n=1e8;
        int s=0;
        int end=n;
        while(s<=end)
        {
            int mid=(s+end)/2;
            bool bnaPaye=canCook(rank,cook,paratha,mid);
            if(bnaPaye)
            {
                ans=mid;
                end=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
