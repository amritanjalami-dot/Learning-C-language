// Take rows and columns from the user and print column numbers.

#include <stdio.h>
int main(){
    int row, column;
    printf("Enter rows : ");
    scanf("%d", &row);
    printf("Enter columns : ");
    scanf("%d", &column);
    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}