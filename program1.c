//write a program of printing the 0 and 1....

#include <stdio.h>

int main() {
    //take a number from user
    int n=5;
    //taking for rows
    for(int i=1;i<=n;i++){
        //taking for coloumn
        for(int j=1;j<=i;j++){
            //check if rows is odd function 
            if(i%2!=0){
                //check if coloumn is even then print '0'
                if(j%2==0){
                    printf("  0");
                }
                //check if coloumn is odd then print '1'
                else{
                    printf("  1");
                }
            //if rows id even function 
            }else{
                //check if coloumn is odd then print '0'
                if(j%2!=0){
                    printf("  0");
                }else{
                    //if coloumn is even then print '1'
                    printf("  1");
                }
            }
        }
        //for rows breaking 
        printf("\n");
    }
    return 0;
}