#include "NumClass.h"
#include <math.h>
#include <stdio.h>


// int numLength (int x){ //help

//     int n=x;
//     int countDigit=0;
//     while(n>=1){
//         n /= 10;
//         ++countDigit;
//     }
//     return countDigit;
// }

int isArmstrong(int x){ //loop

    int countDigit= numLength(x);

    int n=x;
    int sum=0;
    while(n>=1){
        int b= n % 10;
        b = pow (b,countDigit);
        sum+= b;
        n= (int) (n/10);
        }

    if (sum==x){
        return 1;
    }
    return 0;
} 


int isPalindrome(int x){ //loop

    int countDigit= numLength(x);

    int DigitArr[countDigit];
        int n=x;
        int m=countDigit;
        while(n>=1){
            int b= n % 10;
            DigitArr[--m]=b;
            n= (int) (n/10);
        }

    for(int i=0; i< (int) countDigit/2; i++){
        if(DigitArr[i] != DigitArr[countDigit-1-i]){
            return 0;
        }
    }
    return 1;    
}
