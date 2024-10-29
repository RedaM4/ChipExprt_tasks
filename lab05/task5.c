#include<stdio.h>
//int** matrix(int **Miatrix, int *vector,int size);


int main(){
int size ; //size of the matrix 

printf("enter size of the matrixes");

scanf("%d",&size);


int Matrix1[size][size];
int vector[size];

printf("enter matrix 1: ");
for(int i=0;i<size;i++){
 	for(int j=0;j<size;j++){
	scanf("%d",&Matrix1[i][j]);}
}


printf("enter vector 2: ");


for(int i=0;i<size;i++){
        scanf("%d",&vector[i]);}

matrix(size, Matrix1 ,vector);

/*
print please enter
input matrix 
input matrix 2


*/

//int mult_matrix[size][size] = matrix(Matrix1,Matrix2,size);
/*
for(int i=0;i<size;i++){                
	printf("\n");
	for(int j=0;j<size;j++){
	printf("%d",mult_matrix[i][j]);}				
}
*/
return 0;}



void  matrix(int size,int (*Matrix1)[size] , int *vector){

int temp=0;
//int j=0;
printf("\n");
for(int j=0;j<size;j++){
	for(int i=0 ;i<size;i++){
		temp += vector[i] * Matrix1[j][i] ;}

printf("%d\n",temp);
temp=0;}
 
}
