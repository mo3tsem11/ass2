#include<stdio.h>

int main(){
    int x, y;
    char z; 
    printf("Enter two integers (x y): ");
    scanf("%d %d", &x, &y); 
    printf("Enter the operation (+, -, *, or /): ");
    scanf(" %c", &z); 
    switch (z)
    {
        case '+':
            printf("%d + %d = %d\n", x, y, x + y);
            break;
        case '-':
            printf("%d - %d = %d\n", x, y, x - y);
            break;
        case '*':
            printf("%d * %d = %d\n", x, y, x * y);
            break;
        case '/':
            
            printf("%d / %d = %d\n", x, y, x / y);
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }
    
    return 0;
}