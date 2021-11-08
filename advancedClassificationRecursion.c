#include "NumClass.h"
#include <math.h>
#include <stdio.h>

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


    int isPalindrome(int x) { // recursion
        if(x%10==0){
            return 0;
        }
        else if (revers(x,0,x)==x){
            return 1;
        }
        else{
            return 0;
        }
    }

    int revers(int x,int rev,int half) { // help
        int num=numLength(half);
        if (half==0){
            return rev;
        }
        int dig= half%10;
        rev= rev + dig*(int)pow(10,num-1);
        half=(int) half/10;

        return revers (x,rev,half);
    }



