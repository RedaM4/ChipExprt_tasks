#include<stdio.h>
#include<unistd.h>
#include <string.h>


typedef struct{
int book_ID;
char title[100];
char author[50];
int year;
float price;
}Book;


int Num_books=0;
int Book[];


int main(){
File *fi;
fi=fopen("books.dat",r);
int choice=0;
loadBookData();
while(1){
printf("\nLoading existing data from books.dat...");
sleep(2);
printf("\nLibrary Management System
\n1. Add a Book
\n2. Display All Books
\n3. Search for Book by ID
\n4. Calculate Total Value of Books
\n5. Exit");
scanf("%d",&choice);


swtich(choice){
case 1:inputBookData();
	break;
case 2:displayBookData();
	break;
case 3:findBookData();
	break;
case 4:calculateTotalValue();
	break;
case 5: return 0;

default: continue;	

}}




return 0;}



//--------------------loadBookData
void loadBookData() {
    FILE *fi ;
    fi= fopen("books.dat", "r");  
    if(fi == NULL) {
        printf("Error opening file.\n");
        return  ;}

    Book books[Num_books];  
    int i = 0;

    int Book_ID;
    char title[100];
    char author[50];
    int year;
    float price;


    while (fscanf(fi, "%d %99s %49s %d %f", &Book_ID, title, author, &year, &price) == 5 && i < Num_books) {
        books[i].Book_ID = Book_ID;
        strcpy(books[i].title, title);
        strcpy(books[i].author, author);
        books[i].year = year;
        books[i].price = price;

        printf("Loaded Book %d: %d %s %s %d %.2f\n", i + 1, books[i].Book_ID, books[i].title, books[i].author, books[i].year, books[i].price);
        i++;
    }

    


fclose(fi);}
//--------------------saveBookData
void saveBookData(){





}
//--------------------inputBookData
void inputBookData(){
Book book[Num_books];
printf("Enter ID of book");
scanf("%d",&book[Num_books].id);

printf("Enter title of book");
scanf("%99[^\n]",book[Num_books].title);


printf("Enter author of book: ");
 scanf(" %49[^\n]", books[Num_books].author);

printf("Enter year of book");
scanf("%d",&book[Num_books].year);

printf("Enter price of book");
scanf("%f",&book[Num_books].price);

printf("Book added successfully: %d %s %s %d %.2f\n",
books[Num_books].id,
books[Num_books].title,
books[Num_books].author,
books[Num_books].year,
books[Num_books].price);

Num_books++;}
//--------------------displayBookData
void displayBookData(){
FILE *fi ;
    fi= fopen("books.dat", "r");
    if(fi == NULL) {
        printf("Error opening file.\n");
        return  ;}
int Book_ID;
char title[100];
char author[50];
int year;
float price;
int i= 0;

	while (fscanf(fi, "%d %99s %49s %d %f", &Book_ID, title, author, &year, &price) == 5 && i < Num_books) {
printf("Books %d: %d %s %s %d %.2f\n", i + 1, books[i].Book_ID, books[i].title, books[i].author, books[i].year, books[i].price);
        i++;}


fclose(fi);}
//--------------------findBookByID
void findBookByID(){


}
//--------------------calculateTotalValue
void calculateTotalValue(){


}


