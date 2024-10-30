#include<stdio.h>
#include <stdlib.h>

int main(){

int i=0,Sum=0,size=sizeof(int);;
char sel='y';
//float avg;
int *x= (int*) malloc(size);


while(sel=='y'){
printf("Enter one integer: ");
scanf("%d",&x[i]);
Sum+=x[i];

printf("enter y(yes)to add more N(No) thats it: ");
scanf(" %c",&sel);
	
i++;
if(sel == 'n'){
	//avg = Sum/i ; 
		printf("you entered values: ");
		for(int j=0;j<i;j++){
		printf("%d ",x[j]);
		}
		printf("\nthe everage is: %d",Sum/i);
		printf("\nthe dc shift values: ");
                for(int z=0;z<i;z++){
                printf("%d ",x[z] - Sum/i);
                }return 0;


	}

size+=sizeof(int);	
x=(int*) realloc(x,size);	

}



return 0 ;}
