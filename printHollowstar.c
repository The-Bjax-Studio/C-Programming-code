//Write a C program to print a hollow square pattern using a while loop.

#include <stdio.h>
int main() {
    int n;
    int i,j;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    for (i =1; i <= n; i++) {
       for(j=1;j<=n;j++){
           if(i==1 || i==n || j==1 || j==n){
               printf("* ");
           }
           else{
               printf("  ");
           }
       }
       printf("\n");
    }
    
return 0;
}