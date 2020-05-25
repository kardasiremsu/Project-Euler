#include<stdio.h>
int isPrime(int i){
	for(int j=i-1; j>1; j--){
		if(i%j ==0){
			return 0;		}
	}
	return 1;
}
int main(){
	int number=0;
	int i=2;
	while(number !=10001){
		
		if(isPrime(i)==1){
			number++;	
			if(number ==10001){
				printf("%d",i);
				}
		}
		i++;
	}	
		return 0;
}
