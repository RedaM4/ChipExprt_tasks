#include <stdio.h>

int main() {

char char_arr[4];
int int_arr[4];
short sh_arr[4];
double db_arr[4];

printf("chars array\n");
for(int i=0;i<4;i++)
printf("Adress of char %p\n",&char_arr[i]);


printf("integers array\n");
for(int i=0;i<4;i++)
printf("Adress of integers  %p\n",&int_arr[i]);

printf("short array\n");
for(int i=0;i<4;i++)
printf("Adress of short %p\n",&sh_arr[i]);


printf("double array\n");
for(int i=0;i<4;i++)
printf("Adress of double %p\n",&db_arr[i]);




  return 0;

}
