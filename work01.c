//Soojin Choi
//Systems Level Programming
//If you're feeling rusty, apply eul
//2018-09-11
#include <stdio.h>

//Problem 1: Multiples of 3 and 5
int multiples(int num1,int num2,int up_to){
	int a = 0;
	int sum = 0;
	//Sums all multiples of 3
	while (a < up_to){
		sum += a;
		a += num1;
	}
	a = 0;
	
	//Sums all multiples of 5
	while (a < up_to){
		//If the number is not already a multiple of 3
		if ((a % num1) != 0){
			sum += a;
		}
		a += num2;
	}
	return sum;
}

//Problem 2: Even Fibonacci numbers
int evenFibNumbers(restriction){
	int num1 = 1;
	int num2 = 1;
	int sum = 0;
	while (num2 < restriction){
		int currNum = num1 + num2;
		//if the next number is even
		if ((currNum % 2) == 0){
			sum += (currNum);
		}
		num1 = num2;
		num2 = currNum;
	}
	return sum;
}

int main(){
	printf("%d",multiples(3,5,10));
	printf("... expecting 23 \n");
	
	printf("%d",multiples(3,5,1000));
	printf("\n");
	
	printf("%d",evenFibNumbers(10));
	printf("... expecting 10 \n");
	
	printf("%d",evenFibNumbers(4000000));
	printf("\n");
	
	return 1;
}
