#include "functions.h"

int factorial(int n){
	while(n<0)
	{
		printf("Re-enter a password");
		scanf("%d",&n);
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;

}
