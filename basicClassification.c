#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int numLength (int x){ //help

    int n=x;
    int countDigit=0;
    while(n>=1){
        n /= 10;
        ++countDigit;
    }
    return countDigit;
}

int isPrime(int x){ // part one

        if (x==1){
            return 1;
        }
        if (x<1){
        return 0;
        }
        else if (x==2){
        return 1;
        }
        else if (x%2 ==0){
        return 0;
        }
        for (int i=3; i<= sqrt(x); i +=2){
            if (x%i ==0){
                return 0;
            }
        }
        return 1;
    }

int isStrong(int x) { // part one

    // int countDigit= numLength(x);

    int n=x;
    int sum=0;
    while(n>=1){
    int a=1;
    int b= n % 10;
    for (int i = 1; i <= b; ++i) {
        a *= i;
        }
    sum+= a;
    n= (int) (n/10);
    }

    if (sum==x){
        return 1;
    }
    return 0;
}

