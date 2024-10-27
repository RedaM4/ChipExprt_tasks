#include<stdio.h>

int main(){

int i=0,Num_chars,a_count=0,e_count=0,i_count=0,o_count=0,u_count=0,other_count=0 ;
char user_char;
printf("\nEnter the number of characters: ");
scanf(" %d",&Num_chars);

for(i=1;i<=Num_chars;i++){

printf("Enter the %d character: ",i);//user input
scanf(" %c",&user_char);


switch(user_char){//filter

	case 'a': a_count++ ; 
		  break;
	case 'e': e_count++ ;
                  break;
	case 'i': i_count++ ;
                  break;
	case 'o': o_count++ ;
                  break;
	case 'u': u_count++ ;
                  break;
	default: other_count++ ;
                  break;}

}

printf("\nFrequency of a= %d",a_count);
printf("\nFrequency of e= %d",e_count);
printf("\nFrequency of i= %d",i_count);
printf("\nFrequency of o= %d",o_count);
printf("\nFrequency of u= %d",u_count);
printf("\nFrequency of others= %d\n",other_count);


return 0;}
