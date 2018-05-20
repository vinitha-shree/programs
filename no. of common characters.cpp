 //no. of common characters

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
 string r,s;
 cin>>r>>s;
 int i,j,k,m[26],n,c=0;
    char l;
 for(i=0;i<26;i++)
    m[i]=0; 
 for(i=0;i<r.length();i++){
     for(j=0;j<s.length();j++){
         if(r[i]==s[j]){
            k=(int)r[i] - (int)'a';
             m[k]++;
             break;
         }
     }
 }
   
 for(i=0;i<26;i++)
 {
     if(m[i]!=0)
        c++;
 }
 cout<<c;
}
