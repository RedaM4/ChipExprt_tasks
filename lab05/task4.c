#include<stdio.h>
int VowelFreq(char *Str, char vowel);

int main(){
char User_sen[100];
char User_vow;
printf("please enter a sentence(less than 100 characters): ");
//scanf("%s",User_sen);
fgets(User_sen, sizeof(User_sen),stdin );
printf("Enter the vowel to know the frequncy\n");
scanf("%c",&User_vow);


printf("the length of the sentence= %d\n",StringLength(User_sen));
printf("The number of words in the sentence= %d\n",NumOfWords(User_sen,StringLength(User_sen)));
printf("The Number of vowels in the sentence is= %d\n",NumOfVowels(User_sen,StringLength(User_sen)  ));
printf("The Vowel Frequency= %d\n",VowelFreq(User_sen,User_vow)   );
return 0;}


int StringLength(char *Str){
//char temp;
int i=0;

while(Str[i] != NULL){
i++;}
return i-1;}



int NumOfWords(char *Str,int Str_len){
int Num=0;

for(int i=0;i<Str_len;i++){
if(Str[i] == ' '&& (i == 0 || Str[i - 1] == ' '))
	Num++;}
return Num+1;}


int NumOfVowels(char *Str,int Str_len){
int temp=0;
	for(int i=0;i<Str_len;i++){
	if(Str[i] == 'A'||Str[i] == 'a' || Str[i] == 'E' || Str[i] == 'e' || Str[i] == 'I'|| Str[i] == 'i'|| Str[i] == 'O'|| Str[i] == 'o'|| Str[i] == 'u'|| Str[i] == 'u')
temp++;}
return temp;}



int VowelFreq(char *Str,char vowel){
int len=StringLength(Str);
	int temp=0;
	for(int i=0;i<len;i++){
if (Str[i] == vowel)
	temp++;}

return temp;}




