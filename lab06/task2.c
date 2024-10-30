#include<stdio.h>
#include<stdlib.h>

int main(){

char *Str=(char*)malloc( 100* sizeof(char) );
int len;	
	
printf("please enter a sentence(less than 100 characters): ");
//scanf("%s",User_sen);
fgets(Str, sizeof(Str),stdin );

len=StringLength(Str) ;

Str=(char*)realloc(Str,len*sizeof(char)  );

char *Str_reverse=(char*)malloc( len* sizeof(char) );





//printf("\n");
for(int i=1 ; i<=len ;i++){

Str_reverse=(char*)realloc(Str_reverse,i*sizeof(char)  );
Str_reverse[i]= Str[len-i];
Str=(char*)realloc(Str,(len-i)*sizeof(char)  );

printf("%c",Str_reverse[i]);
}
	
	
	
//printf("%c",Str[i]);}

printf("\n");

return 0;}





int StringLength(char *Str){
//char temp;
int i=0;

while(Str[i] != NULL){
i++;}
return i-1;}

