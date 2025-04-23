#include <stdio.h>
/*1 
 3 5 
 2 4 6 
 7 9 11 13 */

int main() {
    int rows ;
    printf("\nEnter a number for your choice : ");
    scanf("%d",&rows);
    int odd = 1, even = 2;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (i==3) {
                printf("%d ", even);
                even += 2;
            } else {
                printf("%d ", odd);
                odd += 2;
            }
        }
        printf("\n");
    }

    return 0;
}
