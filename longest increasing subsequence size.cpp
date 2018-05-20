/*program to find longest increasing subsequence size
    complexity = O(n^2)
*/

#include <iostream>
using namespace std;

int max(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}


int main() {
  int n,i,j,l,k,m;
  cin>>n;
  int a[n],t[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        t[i]=1;
    }
   
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]<a[i]){
                t[i]=max(t[i],t[j]+1);
            }
        }
    }
    m=t[0];
    for(i=1;i<n;i++){
        if(t[i]>m){
            m=t[i];
        }
    }
    cout<<m;
}
