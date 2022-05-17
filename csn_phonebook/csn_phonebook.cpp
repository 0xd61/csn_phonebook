#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Daten
{
	char name[30];
	int age;
	char phone_number[15];
	char gender;
	char email[100];
};

//void write_archive(void);





int main()//(int argc, char **args)
{
	//write_archive();

	printf("\t\t\t\t\t============PHONEBOOK============");

	printf("\n\t\t 1) Add new Person");

	printf("\n\t\t 2) Register");

	printf("\n\t\t 3) Find a Person");

	printf("\n\t\t 4) Edit a Person");

	printf("\n\t\t 5) Delete a Person");

	printf("\n\t\t 6) Exit Phonebook");


	int option = 0;
	//void write_archive(void) {
		//FILE archive;
		//archive = fopen("My_Archive.txt", "w");
		//char Daten[1000];

	printf("\n\t\t\t\t\t\t Choose your option: ");
	scanf_s(" %d", &option);

	if (option == 1) {
		system("cls");
		char name;
		printf("Write your Name: ");
		scanf_s(" %s", &name);


	}
	if (option == 2) {
		system("cls");
		printf("\t\t\t\t\t============REGISTER============");



	}
	if (option == 3) {
		system("cls");
		printf("Enter Person Name: ");


	}
	if (option == 4) {
		system("cls");
		printf("Enter Person Name");

	}
	if (option == 5) {
		system("cls");
		printf("Enter Person Name");
	}
	if (option == 6) {
		system("cls");
		printf("Bye Bye :)");
	}







	return 0;

}



//void write_archive(void) {
	//FILE archive;
	//archive = fopen("My_Archive.txt", "w");
	//char Daten[1000];

//}
