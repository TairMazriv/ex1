#include <math.h>
#include "NumClass.h"
int Palindrome(int n, int sum){ //A function that returns what the number n will look like when read from end to beginning
    if (n==0){
        return sum;
    }
    if(n!=0){
         return (Palindrome(n/10, sum*10+n%10));
    }
}

int isPalindrome(int n){
    if (Palindrome(n,0)==n){
		return 1;
		}
	else
	{return 0;}
}

int dig(int k){ //A function that checks how many digits there are in the number k
    int a=0;
    while (k!=0){
    k=k/10;    
    a=a+1;
	}
        return a;
}

int Armstrong(int n,int a, int sum){  //A function that calculates the sum of the nth powers of its digits
if (n==0){
    return sum;
}
return Armstrong(n/10, a, sum+pow(n%10,a));
}


int isArmstrong(int n){
    if (Armstrong(n, dig(n), 0)==n){
        return 1;
    }   
    else{
        return 0;
    }
}

