#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
srand(time(0));
//printf("%d test",rand()%10);
int Map[10][10];
Map[rand()%10][rand()%10] = 1; 
int i=0,j=0 ;

for(i=0;i<10;i++)

	for(j=0;j<10;j++){
	printf("\nThe coord is (%d,%d)",i,j);
		if(Map[i][j]==1){
			printf("\nHurrah! this is the coord of the treasure (%d,%d)\n",i,j);
			return 0;
		}
		
	}



return 0;}
