#include <stdio.h>
int main(){
    int i, j;
    for (i=1; i<=5; i++){
        for (j=1; j<=2; j++){
            printf("i=%d, j=%d\n", i, j);
        }
        printf("\n");
    }
    return 0;
}