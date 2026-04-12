//Turn Off Lights-Hackerearth Problem
#include <iostream>
using namespace std;
bool TurnOff(string bulbs,int n,int k,int l)
{   int o = 0;
    for(int i=0;i<n;i++)
    {   if(bulbs[i] == '1')
        {  o++;
           i+=(l-1);
        }
}
 return o<=k;
}
int main()
{   int n, k;
    cin>>n>>k;
    string bulbs;
    cin>>bulbs;
        int low=1,high=n;
        int ans=n;
    while(low<=high)
    {  int mid=(low + high) / 2;
        if(TurnOff(bulbs,n,k,mid))
        {  ans =mid;
            high = mid-1;
        }
        else
        {  low = mid+1;  }
    }
    cout<<ans;
    return 0;
}
