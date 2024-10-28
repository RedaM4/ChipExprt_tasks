#include<stdio.h>

int main(){
int Num;
int i,j,s; //s for space
printf("Please enter a Number : ");
scanf("%d",&Num);


for(i=1; i<=Num;i++){
	for(s=Num-i;s>=0;s--){
	printf(" ");}

	for(j=0;j<i;j++){
	printf("*");
	}
printf("\n");
}




return 0;}
