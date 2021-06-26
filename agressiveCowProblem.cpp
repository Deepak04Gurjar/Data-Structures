#include<iostream>
#include<algorithm>
using namespace std;
bool canputcow(int stalls[],int n,int cow,int mid)
{
    int last_cow=stalls[0];
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(stalls[i]-last_cow>=mid)
        {
            cnt++;
            last_cow=stalls[i];
            if(cnt==cow)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int stalls[10000];
        int n;
        cin>>n;
        int cow;
        cin>>cow;
        int ans=0;
        for(int j=0;j<n;j++)
        {
            cin>>stalls[j];
        }
        sort(stalls,stalls+n);
        int start=0;
        int end=stalls[n-1]-stalls[0];
        while(start<=end)
        {
            int mid=(start+end)/2;
            bool cowRakhPaye=canputcow(stalls,n,cow,mid);
            if(cowRakhPaye)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}