#include <stdio.h>
int isPalindrome(int product){
	int remainder;
	int reverse =0;
	int number = product;
	while (number != 0){
		remainder = number%10;
		reverse = reverse*10 + remainder;
		number = number/10;
	}
	if(reverse == product){
		return 1;
	}
	else{
		return 0;	
	}
}

int main(){
	
	int i,j, product = 0;
	int max= 0;
	
	for(i =100; i <1000;i++){
	
		for(j =i; j<1000; j++){ 
	
			product = i*j;
			
			if(isPalindrome(product)){
		
				if(product >max){
					max = product;
				}
			}
		}
	}
	printf("%d", max);			
	return 0;
}
