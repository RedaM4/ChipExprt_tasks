#include<stdio.h>

int main(){
int x,y ; 
char dir='U';

initial:	
printf("\nEnter the initial position (The table 4x4): ");
scanf(" %d %d",&x,&y);

if(x>4 ||x<1 ||y>4 ||y<1){
	printf("\ntry again: you have entered wrong input :(");
	goto initial ; }


Direction:
printf("\nEnter the direction U(Up), D(Down), R(Right), L(Left): ");
scanf(" %c",&dir);

switch (dir) {
	case 'U': if(y==1) {
		   printf("\nthe player reached the boundry at (%d,%d)\n",x,y);
			  }
			  else{y--;
				  printf("\nthe new coords (%d,%d)",x,y);
				  goto Direction ;}
		break;
	case 'D': if(y==4){
			  printf("\nthe player reached the boundry at (%d,%d)\n",x,y);
			}
			else{y++;
				printf("\nthe new coords (%d,%d)",x,y);
			goto Direction ;}
				break;
	case 'R':if(x==4) {
		 printf("\nthe player reached the boundry at (%d,%d)\n",x,y);
		 }
		 
		 else {x++;
			 printf("\nthe new coords (%d,%d)",x,y);
			 goto Direction ;}
		break;

	case 'L':if(x==1){ 
			 printf("\nthe player reached the boundry at (%d,%d)\n",x,y);
		 }
		 else {x--;
			 printf("\nthe new coords (%d,%d)",x,y);
			 goto Direction ;}
		break;

	default: printf("\ntry again: You have entered wrond direction :(") ;
		goto Direction; 
		break;}
return 0;}
