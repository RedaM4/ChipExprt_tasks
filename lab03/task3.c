#include<stdio.h>

int main(){
int i,Sum_pop=0, Max_pop=0,Min_pop=999999, City_pop, Num_cit;


printf("Enter how many cities: ");
scanf("%d",&Num_cit);

for(i=1;i<=Num_cit;i++){
printf("Enter the population for city %d: ",i);
scanf("%d",&City_pop);

Sum_pop += City_pop ; 

City_pop > Max_pop ? Max_pop= City_pop : 0 ;
City_pop < Min_pop ? Min_pop=City_pop : 0 ; }


printf("\nthe mean is= %f",(float)Sum_pop/Num_cit );
printf("\nthe Maximum is= %d", Max_pop);
printf("\nthe Minimum is= %d\n", Min_pop);

return 0;}
