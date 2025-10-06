#include <stdio.h>

void printPascalsTriangle(int rows){
    for(int i=0; i<rows; i++){
        int value=1;
        
        for(int j=0; j<=i; j++){
            printf("%d", value);
            
            value=value*(i-j)/(j+1);
        }
        printf("\n");
    }
}

 void fibonacci(int n){
        int first=0, second=1, next;
        
        printf("%d%d", first, second);
        
        for(int i= 1; i<n; i++){
            next = first + second;
            printf("%d", next);
            first = second;
            second = next;
        }
}
int main() {
 int choice;
 int number;
 int i=0;
 int j=0;
 int k=0;
 int n=0;
 int rows=0;
 
 while(1){
     printf("\n+----------------------------+\n");
     printf("|          MAIN MENU         |\n");
     printf("+----------------------------+\n");
     printf("|1. Shape 1                  |\n");
     printf("|2. Shape 2                  |\n");
     printf("|3. Fibonacci Sequence       |\n");
     printf("|4. Pascals Triangle         |\n");
     printf("|5. Exit                     |\n");
     printf("|----------------------------|\n");
     
     printf("Enter Choice: ");
     scanf("%d", &choice);
     
     switch(choice){
        case 1: 
        for(i=1; i<6; i++){
            for(j=1; j<=i; j++){
                printf(" ");   
        }
            for(k=5; k>=i; k--){
                printf("*");
    }
            printf("\n");
    }    
    break;
    
        case 2:
        for(i=1; i<6; i++){
            for(j=5; j>=i; j--){
                printf(" ");
    }
            for(k=1; k<=i; k++){
                printf("*");
        }
            printf("\n");
    }
    break;
    
        case 3:
        printf("Enter the number of Fibonacci numbers you want: ");
        scanf("%d", &n);
        fibonacci(n);
        break;
    
        case 4:
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        printPascalsTriangle(rows);
        break;
    
        case 5:
        printf("Exiting program...\n");
        return 0;
        
        default:
        printf("Invalid Choice. Please try again\n");
        break;
 }
 }
    return 0;
}
