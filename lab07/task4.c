#include<stdio.h>
#include <string.h>
void encrypt(char *Str_Fname, char FS);
void decrypt(char *Str_Fname, char FS);
int StringLength(char *Str_Fname);


int main(){
char ED; //encrypt or decrypt
char FS; //file or string
char Str[100];
char F_name[20];

main:
printf("\nWelcome to the Caesar Cipher Program!");
printf("\nDo you want to perform (e)ncryption or (d)ecryption?:  ");

scanf(" %c",&ED);

switch(ED){

	case 'e':printf("\nDo you want to encrypt data from a (f)ile or enter a (s)tring?"); scanf(" %c",&FS);
		    switch(FS){
                        case 'f':
				printf("\nPlease enter the filename to encrypt: ");scanf(" %s",F_name);
                                        encrypt(F_name,FS);

                                break;
                        case 's':
				printf("\nPlease enter the string to encrypt: "); getchar(); // scanf("%",Str);
				fgets(Str, sizeof(Str), stdin); 
                                encrypt(Str,FS);
                                break;
			default: return 1;;
                }

		break;

	case'd':printf("\nDo you want to encrypt data from a (s)ile or enter a (s)tring?");scanf(" %c",&FS);
		switch(FS){
			case 'f': printf("\nPlease enter the filename to decrypt: ");scanf(" %s",F_name);
					decrypt(F_name,FS);
				  break;
			case 's': printf("\nPlease enter the string to dencrypt: ");//scanf(" %s",Str);
					getchar();
				        fgets(Str, sizeof(Str), stdin);
					decrypt(Str,FS);
				break;	
			default: return 1;;
		}


		break;
	default: goto main;}

return 0 ;}


void encrypt(char *Str_Fname,char FS){
if(FS == 'f'){
char Str[100];
FILE *fi;
fi = fopen(Str_Fname, "r");
char enc_str[100];
int i=0;
printf("\nhere is the encrypted string from file: ");

while (fgets(Str, 100, fi)) {
	i=0;
while (Str[i] != '\0' && Str[i] != '\n') { 
	if(Str[i] >='a' && Str[i] <='z'){
        enc_str[i] = (Str[i]-'a' +23 ) % 26 +'a';}
        else if(Str[i]>='A'&& Str[i]<='Z'){
                enc_str[i] = (Str[i]-'A' +23 )%26 +'A';}
        else{
        enc_str[i]=Str[i];}
//printf("%s",enc_str);
	i++;}

enc_str[i]='\0';
printf("%s",enc_str);}





fclose(fi);
}else if(FS =='s'){
int str_len = StringLength(Str_Fname);
int i=0;
char enc_str[str_len+1];
//Str_fname[i]
printf("\nEncrypted String is: ");

//for(int i=0;i<str_len;i++){
while(Str_Fname[i] !='\0'){
	if(Str_Fname[i] >='a' && Str_Fname[i] <='z'){
	enc_str[i] = (Str_Fname[i] -'a' +23 ) % 26 +'a';}
	else if(Str_Fname[i]>='A'&& Str_Fname[i]<='Z'){
	        enc_str[i] = (Str_Fname[i]-'A' +23 )%26 +'A';}
	else{
	enc_str[i]=Str_Fname[i];}


i++;}

enc_str[i]='\0';
printf("%s\n",enc_str);}}
//------------------------------------------Decrypt-----------------------
void decrypt(char *Str_Fname,char FS){
if(FS == 'f'){
char Str[100];
FILE *fi;
fi = fopen(Str_Fname, "r");
char enc_str[100];
int i=0;
printf("\nhere is the encrypted string from file: ");

while (fgets(Str, 100, fi)) {
  if(Str[i] >='a' && Str[i] <='z'){
        enc_str[i] = (Str[i]-'a' + 3 ) % 26 +'a';}
        else if(Str[i]>='A'&& Str[i]<='Z'){
                enc_str[i] = (Str[i]-'A' +3 )%26 +'A';}
        else{
        enc_str[i]=Str[i];}
//printf("%s",enc_str);
i++;
enc_str[i]='\0';
printf("%s",enc_str);}

fclose(fi);
}else if(FS =='s'){
int str_len = StringLength(Str_Fname);
int i=0;
char enc_str[str_len+1];
//Str_fname[i]
printf("\nEncrypted String is: ");

//for(int i=0;i<str_len;i++){
while(Str_Fname[i] !='\0'){
        if(Str_Fname[i] >='a' && Str_Fname[i] <='z'){
        enc_str[i] = (Str_Fname[i]-'a' + 3 ) % 26 +'a';}
        else if(Str_Fname[i]>='A'&& Str_Fname[i]<='Z'){
                enc_str[i] = (Str_Fname[i]-'A' +3 )%26 +'A';}
        else{
        enc_str[i]=Str_Fname[i];}


i++;}

enc_str[i]='\0';
printf("%s\n",enc_str);}}



//-------------------------------------------------------------------------
int StringLength(char *Str){
//char temp;
int i=0;

while(Str[i] != '\0'){
i++;}

return i;}

