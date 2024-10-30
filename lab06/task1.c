#include<stdio.h>
#include <stdlib.h>

int main(){
int size,i,a,b;
printf("\nenter size of vectors ");
scanf("%d",&size);

int *vectorx=(int*) malloc(size*sizeof(int));
int *vectory=(int*) malloc(size*sizeof(int));
int *vectorz=(int*) malloc(size*sizeof(int));

printf("\nenter a ");
scanf("%d",&a);
printf("\nenter b ");
scanf("%d",&b);


printf("\nEnter elemenvts of vector x");
for(int i=0;i<size;i++){
	scanf("%d",&vectorx[i]);}

printf("\nEnter elemenvts of vector y");
for(int i=0;i<size;i++){
        scanf("%d",&vectory[i]);}


printf("\n");

for(int i=0;i<size;i++){	
vectorz[i]= a* vectorx[i] + b * vectory[i];
printf("%d\n",vectorz[i]);
}



return 0;}
