#include <stdio.h>

int main() {
    int a[3][3];
    int b[3][3];
    printf("\nEnter the matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    int res[3][3];
    int t=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           res[i][j]=0;
           for(int k=0;k<t;k++){
               res[i][j]+=a[i][k]*b[k][j];
           }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
return 0;
}