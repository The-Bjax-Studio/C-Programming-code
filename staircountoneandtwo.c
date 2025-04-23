//print the stair count of one and two......
#include <stdio.h>
int stair(int n){
    //base case.....
    if(n==1 || n==2){
        return n;
    }
    //workdone....
    int a=stair(n-1);
    int b=stair(n-2);
    return a+b;
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //function calling....
    int ans=stair(n);
    printf("\nThe total stair is %d",ans);
    return 0;
}