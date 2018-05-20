#include <bits/stdc++.h>
//program to reverse except vowel places
using namespace std;

int isvowel(char a){
    if(a=='a' || a=='e' ||a=='o' || a=='i' ||a=='u' || a=='A' ||a=='E' || a=='I' ||a=='O' || a=='U' )
        return 1;
    else 
        return 0;
}
int main()
{
    string s1;
    cin>>s1;
    int i,j=0,k,l,m,n;
    n=s1.length();
    char s3[n], s2[n];
    for(i=0;i<n;i++){
        if(!isvowel(s1[i]))
        {
            s2[j]=s1[i];
            s1[i]='*';
            j++;
        }
    }
    k=0;
    for(i=j-1;i>=0;i--){
      while(s1[k]!='*'){
          k++;
      }
    s1[k]=s2[i];  
    }
 cout<<s1;
    return 0;
}
