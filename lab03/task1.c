#include<stdio.h>

int main(){

int Num;
float in;
printf("enter a positive number\n");
scanf(" %d",&Num);


printf("Numbers from %d to 0 in descending order: \n",Num);

for(int i= Num;i>=0 ;i-- ){
printf("%d ",i);}

printf("\nNumbers from 1 to %d following pattern B:\n",Num);
for(int i=1 ; i<=Num ; i++){
        printf("%d ",i);}


printf("\nEnter an increment value less than 1\n");

scanf(" %f",&in);

if(in>1)
	return 0;

for(float i=0;i<=Num ; i+=in)
	        printf("%f ",i);

printf("\n");


return 0;}
