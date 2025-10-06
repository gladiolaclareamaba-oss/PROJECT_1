#include<stdio.h>

    void fibonacci(int n){
        int first=0, second=1, next;
 
        printf("%d%d", first, second);

        for(int i= 1; i<n; i++){
            next= first + second;
            printf("%d", next);
            first= second;
            second= next;
        }

    }
    int main(){
        int n;
        printf("Enter the number of Fibonnacci numbers you want: ");
        scanf("%d", &n);

        fibonacci(n);
        return 0;
    }

