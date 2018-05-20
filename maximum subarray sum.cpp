#include <bits/stdc++.h>
//kadane's algorith to find maximum subarray sum
using namespace std;
int max(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}
int MSS(int a[],int n){
    int ans=0 , sum=0;
    for(int i=0;i<n;i++){
        if(sum+a[i]>0)
            sum+=a[i];
        else 
            sum=0;
        ans=max(sum,ans);
    }
    return ans;
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<MSS(a,n);
    return 0;
}
