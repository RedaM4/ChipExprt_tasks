#include<stdio.h>

int main(){

int num= 0x01001111;
char *p=&num;

printf("%p\n",(char *)*p);


//sizeof(void *) ---> 8 byte then multiply by 8

printf("the size in bytes= %d\nthe size in bits= %d\n",sizeof(void *),sizeof(void *)*8);



return 0;}
