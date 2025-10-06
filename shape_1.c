#include<stdio.h>

int main(){
    int i=0;
    int j=0;
    int k=0;

    for(i=1; i<6; i++){
        for(j=5; j>=1; j--){
            printf(" ");
     }
        for(k=1; k<=i; k++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}