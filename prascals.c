#include<stdio.h>

void printPascalsTriangle(int row){
    int rows=row;
    for(int i=0; i<rows; i++){
        int value=1;

        for(int j=0; j<=i; j++){
            printf("%d", value);

            value=value*(1-j)/(j+1);
        }
        printf("\n");
    }
}
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPascalsTriangle(rows);
    return 0;
}   