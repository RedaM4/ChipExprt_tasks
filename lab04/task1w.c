#include<stdio.h>

int main(){
int Num;
int i,j,s; //s for space
printf("Please enter a Number : ");
scanf("%d",&Num);

i=1;
while( i<=Num){
	s=Num-i;
        while(s>=0){
        printf(" ");
	s--;
	}

	j=0;
        while(j<i){
        printf("*");
	j++;
        }


	i++;
printf("\n");
}




return 0;}  
