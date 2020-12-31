#include <stdio.h>

int main(){
   
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("Welcome to the Calculater Program Made by Oishik Guha\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

    int a;
    int b;

    printf("Enter your first number: ");
    scanf("%d", &a);
    
    printf("Enter your second number: ");
    scanf("%d", &b);

    printf("results: %d %d", a + b);

    return 0;
}

