//sorting characters in a string without repitition
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    char t;
    int i,j,k,l,m,n;
    cin>>s;
    n=s.length();
    int a[26];
    for(i=0;i<26;i++)
        a[i]=0;
    for(i=0;i<n;i++){
        m=(int)s[i]- (int)'a';
        a[m]++;        
    }
    for(i=25;i>=0;i--){
        if(a[i]!=0){
            m=i+(int)'a';
            cout<<(char)m;
        }
    }

}
