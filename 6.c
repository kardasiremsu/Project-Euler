#include<stdio.h>

int main(){
	int sumofsquares=0;
	for(int i=1; i<=100; i++){
		sumofsquares += i*i;
	}
	int sum=0;
	for(int i=1; i<=100; i++){
		sum += i;
	}
	int squareofsum = sum*sum;
	
	printf("%d", squareofsum-sumofsquares);
	return 0;
}
