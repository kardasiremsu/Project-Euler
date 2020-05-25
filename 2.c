#include<stdio.h>
#include<stdbool.h>
int main(){
	int first = 1;
	int second = 1;
	int sum=0;
	
	while(true){
		int third = first + second;
		if (third >4000000)
			break;
		if(third %2==0)
			sum +=third;
		first = second;
		second = third;
	}
	printf("Sum: %d",sum);
		return 0;
}
