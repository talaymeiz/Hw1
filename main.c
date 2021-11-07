#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main(){

    int num1;
    int num2;
    scanf("%d%d", &num1, &num2);
    if (num1>num2){
        int x=num2;
        num2= num1;
        num1=x;
    }
    printf("The Armstrong numbers are:");
    for (int i=num1; i<=num2; i++){
        if (isArmstrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Polindromes are:");
    for (int i=num1; i<=num2; i++){
        if (isPalindrome(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i=num1; i<=num2; i++){
        if (isPrime(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i=num1; i<=num2; i++){
        if (isStrong(i)==1){
            printf(" %d",i);
        }
    }
    
    return 0;
}