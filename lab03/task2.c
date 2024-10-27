#include<stdio.h>

int main(){

int Num;

printf("\nEnter a Number: ");
scanf("%d",&Num);

for(int i=2 ; i< Num; i++)
	
	if(Num%i ==0){
		printf("\nthe %d is not prime and can be divided by %d\n", Num, i);
		return 0;}

printf("\nThe number %d is prime\n", Num);
return 0;}
