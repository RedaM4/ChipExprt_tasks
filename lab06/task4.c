#include<stdio.h>
#include<stdlib.h>
void Push();
void Pop();
void Display();

int* stack =NULL;

int Stacksize=0;



int main(){
//int *stack= (int*) malloc(Stacksize);

	
char op;
while(1){
	printf("\nEnter what u want\n1-p(push)\n2-o(pop)\n3-d(sisplay)\n4-e(exit): ");
	scanf(" %c",&op);
	
switch (op){
	case 'p': Push();break;
	case 'o': Pop();break;
	case 'd': Display();break;
	case 'e': free(stack);return 0 ; 
	default:break;
}}


return 0;}


void Push(){
//int User_int;

Stacksize++;
stack=(int*)realloc(stack,Stacksize*sizeof(int)  );

printf("enter an integer: ");
scanf("%d",&stack[Stacksize-1] );

}



void Pop(){

if(Stacksize != 0){
stack[Stacksize-1]=0;
Stacksize-- ;
stack=(int*)realloc(stack,Stacksize*sizeof(int));}
else{
printf("\nError:cant pop (there is nothing)");
}

}



void Display(){
        printf("\nDisplay stack\n");
		for(int i=Stacksize-1;i>=0;i--){
		printf("%d\n",stack[i]);} 
}



