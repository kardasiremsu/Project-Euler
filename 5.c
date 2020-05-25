#include<stdio.h>
#include<stdbool.h>
int couldbedivide(int number){
	for(int i=2; i<=20; i++){
		if(number%i !=0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int number = 20;
	while(true){
		if(couldbedivide(number) == 1){
			break;
		}
		else{
			number++;
		}
		}
	printf("%d",number);
return 0;
	}


