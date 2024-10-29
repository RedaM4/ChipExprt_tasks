#include <stdio.h>
#include <math.h>
float add_float(float a,float b);
float circle_area(float rad);
float rectangle_area(float a,float b);


int main(){
int op;

int a,b;
float c,d;

printf("enter 1-addint\n2-addfloat\n3-circle area\n4-recangle\n5-factorial\n");
scanf("%d",&op);
if(op==1||op==5){
printf("enter 2 numbers (in case of circle the second number will not be used)");
scanf("%d %d",&a,&b);}
else {
printf("enter 2 numbers (in case of circle the second number will not be used)");
scanf("%f %f",&c,&d);
}




switch (op){

case 1: printf("%d\n",add_int(a,b));
	break;
case 2:printf("%f\n",add_float(c,d));
        break;
case 3: printf("%f\n",circle_area(c));
        break;
case 4:printf("%f\n",rectangle_area(c,d) );
        break;
case 5:printf("%d\n",fac(a,b));
        break;
default: return 1;break;
}


return 0;}

int add_int(int a,int b){

	return a+b;}

float add_float(float a,float b){

return a+b;}

float circle_area(float rad){
return rad*rad*M_PI  ;}

float rectangle_area(float a,float b){
return a*b;}


int fac(int x){
int temp=1;
while(x>0){
temp *= x;
x--;}

return temp;



}


