#include<stdio.h>
#include <unistd.h>
int main(){
int mins,sec,User_mins;

printf("Enter Minutes: ");
scanf("%d",&User_mins);

for(mins=0; mins<User_mins;mins++){

	for(sec=0;sec<60;sec++){	
	printf("\n%d:%d",mins,sec);
	//sleep(1);
	}
}


return 0;}
