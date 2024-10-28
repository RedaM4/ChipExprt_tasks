#include<stdio.h>

int main(){
int i=0,Min_pop=0,Max_pop=0, Sum_pop=0;  
int City_pop[10];
float avg;


for(i=0;i<10;i++){
printf("\nEnter city %d population: ",i+1);
scanf("%d",&City_pop[i]);
//filter

Sum_pop += City_pop[i];

if(City_pop[i]> Max_pop)
	Max_pop = City_pop[i];

if(City_pop[i]<Min_pop || i==0)
	Min_pop = City_pop[i];}

//print reverse
printf("\n");
for(i=9;i>=0;i--){
printf("%d\n",City_pop[i] ) ; }  

//Maximum and Minimum
printf("\nThe Maximum is %d\n The Minimum is %d",Max_pop,Min_pop);
//Average
printf("\nThe Average is %f\n",(float)Sum_pop/10);



return 0;}
