#include <math.h>
#include "NumClass.h"
int isArmstrong(int n){
	int sum = 0, k = n, r, a=0;
    while (k!=0){
		k=k/10;
        a++;
	}
    k=n;
	while (k!=0){
		r=k%10;
		sum = sum+pow(r, a);
		k=k/10;
	}

	if (sum == n){
		return 1;
		}
	else
	{return 0;}
}

int isPalindrome(int n){
    int sum = 0, k = n, r, a=0;
    while (k>=10){
		k=k/10;
        a++;
	}
    k=n;
	while (k!=0){
		r=k%10;
		sum = sum+r*pow(10, a);
		k=k/10;
        a--;
	}

	if (sum == n){
		return 1;
		}
	else
	{return 0;}
}
