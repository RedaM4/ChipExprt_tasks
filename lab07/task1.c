#include<stdio.h>
#include<string.h>

struct Student{

int ID;
char name[50];
float gpa;
};



int main(){
int Student_num=0;

printf("\nEnter the number of student");
scanf("%d",&Student_num);
struct Student student[Student_num];


for(int i=0;i<Student_num;i++){

printf("\nEnter ID: ");
scanf(" %d",&student[i].ID);

printf("\nEnter name: ");
scanf(" %s",student[i].name);

printf("\nEnter gpa: ");
scanf(" %f",&student[i].gpa);}

printf("\nstudent record:");

for(int i=0;i<Student_num;i++){
printf("\nID: %d",student[i].ID);
printf(" name: %s",student[i].name);
printf(" GPA: %f\n",student[i].gpa);
}

return 0;}
