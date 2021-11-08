#include <math.h>
#include "NumClass.h"
int fact(int n)  //A function that calculates a factorial of number n
{  
    if (n==0)  
    {  
        return 0;  
    }  
    else if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n*fact(n-1);  
    }
}  
int isPrime(int n){
	int i , flag = 0;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag = 1;
			break;
		}
	}
	if(flag==1){
		return 0;
	}
	else 
		return 1;
}

int isStrong(int n){
	int sum = 0, k = n, r;
	while (k!=0){
		r=k%10;
		sum = sum+fact(r);
		k=k/10;
	}

	if (sum == n){
		return 1;
		}
	else
	{return 0;}
}
