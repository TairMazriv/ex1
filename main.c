#include <stdio.h>
#include <math.h>
#include "NumClass.h"
		int main(){
		int a, b;
        printf("Enter the first number: ");
        scanf("%d", &a);

        printf("Enter the second number: ");
        scanf("%d", &b);
        int min, max;
        if (a<b){
            min = a;
            max = b;
        }
        else {
            min = b;
            max = a;
        }
        printf("The prime numbers: ");
        for(int i=min; i<=max; i++){
            if (isPrime(i)==1){
                printf("%d, ",i);
            }
        }

        printf("\nThe armstrong numbers: ");
        for(int i=min; i<=max; i++){
            if (isArmstrong(i)==1){
                printf("%d, ",i);
            }
        }

        printf("\nThe strong numbers: ");
        for(int i=min; i<=max; i++){
            if (isStrong(i)==1){
                printf("%d, ",i);
            }
        }

        printf("\nThe palindrome numbers: ");
        for(int i=min; i<=max; i++){
            if (isPalindrome(i)==1){
                printf("%d, ",i);
            }
        }
        return 0;
        }
    