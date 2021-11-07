#include "NumClass.h"
#include <math.h>
#include <stdio.h>

    int secondDigit(int x){ // help

        int countDigit= numLength(x);
        if (countDigit <2){
            return -1;
        }

        int a= (int) pow(10,countDigit-2);
        int b= x%a;
        int Dig=(x-b)/a;
        Dig= Dig%10;
        return Dig;
    }

// int isPalindrome(int x){ // recursion
//     int r= 0;
//     if (x<10){
//         return 1;
//     }
//     else{
//         if(x%10 != firstDigit(x)){
//             return 0;
//         }
//         else{
//             x= (int) (x/10);
//             int a=numLength(x)-1;
//             x= x% ((int)pow(10,a));
//             r= isPalindrome(x);
//         }
//     }
//     return r;
// }

int isArmstrong(int x) { // recursion
   return isArmstrongg(x,x,0);
}
 

    int isArmstrongg(int x,int n, int sum) { // help
        int r=0;
        if (n<1){
            if(sum==x){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            int countDigit= numLength(x);
            int b= n % 10;
            b = (int)pow (b,countDigit);
            sum += b;
            n= (int) (n/10);
            r= isArmstrongg(x,n,sum);
        }
        return r;
    }

    int firstDigit(int x){ // help

        int countDigit= numLength(x);

        int a= (int) pow(10,countDigit-1);
        int b= x%a;
        int Dig=(x-b)/a;
        return Dig;
    }




    int isPalindrome(int x){ // recursion
        int r= 0;
        if (x<10){
            return 1;
        }
        else{
            if(x%10 != firstDigit(x)){
                return 0;
            }
            else{
                x= (int) (x/10);
                if (secondDigit(x)==0){
                    int l= x%10;
                    if (l==0){
                        int a = numLength(x) - 1;
                        int b = (int) pow(10, a);
                        x = (int) (x % b);
                        r = isPalindrome(x);                    }
                    else{
                        return 0;
                    }
                }
                else {
                    int a = numLength(x) - 1;
                    int b = (int) pow(10, a);
                    x = (int) (x % b);
                    r = isPalindrome(x);
                }
            }
        }
        return r;
    }
