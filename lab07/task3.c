#include<stdio.h>
//#include<math.h>

int main(){

FILE *fi;

fi = fopen("bitstream1.bit", "r");
//char ch;
int temp[8];
int i=0;
//int temp[8];
char  b;
unsigned int hex=0;



while ( (b = fgetc(fi)) != EOF) {

if(b == '0' ){
temp[i] = 0;
	}else if(b == '1'){
	temp[i] =1;}else{
		continue;}

//printf("%c",b);
//printf("%d\n",temp[i]);
i++;


	if(i==8){
	hex=0;i=0;		
	
	for(int j=7;j>=0;j--){
	//hex += temp[j] *(int) pow(2,j);
	hex = (hex << 1 ) | temp[j];
	temp[j]=0;
	//printf("%d",hex);
	}
	
	printf("%03u    ",hex);
	printf("%02X\n",hex);
	}





}

if(i!=0){

  hex=0;i=0;

        for(int j=7;j>=0;j--){
        hex = (hex << 1 ) | temp[j];

        }

        printf("%03u    ",hex);
        printf("%02X\n",hex);
        }






fclose(fi);
return 0;}
