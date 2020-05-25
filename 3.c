#include<stdio.h>

	int primecheck(int i){
	    for(int j=2; j<i; j++){
	        if(i%j ==0 ){
	            return 0;}
	    }
	    return 1;
	}

	int main(){
	    long largestprimefac = 0;
	    const long number= 600851475143;
	    int i;	
	    for(i=2; i<number; i++)
	    {
	        if(number % i ==0){
	        
	            if(primecheck(i) == 1 && i>largestprimefac){
	                largestprimefac = i ; 
	            }
	        }
	            
	    }
	        printf("%ld",largestprimefac);
	    return 0;
	}
