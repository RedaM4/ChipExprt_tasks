#include<stdio.h>
#include<string.h>
int NumOfWords(char *Str);
int StringLength(char *Str);


int main(){
char Str[100];
FILE *fi;
fi = fopen("task2test.txt", "r");
//char ch;
int words =0, chars=0,line=0;



while (fgets(Str, 100, fi)) {
    printf("%s", Str);
words += NumOfWords(Str);
chars += StringLength(Str);

    line++;

//printf("\n\n\nThe number of word is: %d\nThe number of characters: %d\nThe number of lines: %d", words, chars, line);

    
}




printf("\nThe number of word is: %d\nThe number of characters: %d\nThe number of lines: %d\n", words, chars, line);
	

fclose(fi);
return 0;}



int NumOfWords(char *Str){
int Num=0;
int i=0;
int Str_len = StringLength(Str);
int inword=0;

while(Str[i] != '\0'){

if(Str[i] !='\0' && !inword){
Num++;
inword=1;}

else if (Str[i] == ' '){
	inword=0;}
i++;
}

/*

for(int i=0;i<Str_len;i++){
if(Str[i] == ' '&& (i == 0 || Str[i - 1] != ' '))
        Num++;}*/
return Num+1;}



int StringLength(char *Str){
//char temp;
int i=0;

while(Str[i] != '\0'){
i++;}
return i;}




