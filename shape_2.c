#include<stdio.h>

int main(){
    int i=0;
    int j=0;
    int k=0;

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("");
        }
        for(k=5; k>=i; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}