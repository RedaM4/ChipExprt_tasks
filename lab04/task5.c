#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
srand(time(0));
//RGB  arrays
int r_Arr[10][10];
int b_Arr[10][10];
int g_Arr[10][10];
//Gray scale Array
int GS_Arr[10][10];


//inserting random into the three arrays, print, and make the Gray scale
for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
	r_Arr[i][j] =rand()%265;
	g_Arr[i][j] =rand()%265;
	b_Arr[i][j] =rand()%265;
	printf("%03d %03d %03d\n",r_Arr[i][j],b_Arr[i][j], g_Arr[i][j] );
	GS_Arr[i][j]=(0.299*r_Arr[i][j])+(0.587*g_Arr[i][j])+(0.114*b_Arr[i][j]);
	}
}


//Gray scale
printf("\n\nGray Scale RGB\n");
for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
		printf("%03d\n",GS_Arr[i][j]);
        }
}


return 0;}
