#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++){
    if((i==0) || (i==n-1) ){
        for(j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    else{
        for(j=0;j<n;j++){
            if(j==0 || j==n-1){
                printf("*");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
}

}