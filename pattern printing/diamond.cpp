#include <iostream>
//rhombus pattern
using namespace std;

int main(int argc, char** argv)
{
    int n,i,j,k,a,b,c,d;
    cin>>n;
    a=n-1;
    b=0;
    c=0;
    d=n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==a)
                cout<<"/";
            else
                cout<<"*";
        }   
        for(k=0;k<n;k++){
            if(k==b)
                cout<<"\\";
            else
                cout<<"*";
        }
        a=a-1;
        b=b+1;
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==c)
                cout<<"\\";
            else
                cout<<"*";
        }
        for(k=0;k<n;k++){
            if(k==d)
                cout<<"/";
            else
                cout<<"*";
        }
        c=c+1;
        d=d-1;
        cout<<endl;
    }
}