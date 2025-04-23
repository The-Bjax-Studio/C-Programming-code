//WAP to print the no. of stair count step using 1,2 and 3......
#include <stdio.h>
int stair(int n){
    //base case 1....
    if(n==1 || n==2){
        return n;
    }
    //base case 2....
    if(n==3){
        return n+1;
    }
    //working .....
    int a=stair(n-1);
    int b=stair(n-2);
    int c=stair(n-3);
    return a+b+c;
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //function calling....
    int ans=stair(n);
    printf("\nThe total no. of stair is: %d",ans);
    return 0;
}