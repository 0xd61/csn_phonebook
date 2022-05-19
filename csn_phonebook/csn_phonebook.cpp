#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1

struct Daten
{
    char Name[30];
    int Age[3];
    int PhoneNumber[100];
    char Gender[10];
    char EMail[100];
};

void write_archive() {
    printf("Das ist die Write Archive Funktion\n");
};
void new_entry(char* Name, char* LastName, char* Number) {
    FILE* fp;
    char ch;

    // NOTE(dgl): Ich hab das hier noch auf a+ geändert. Dann wird der Text immer in der Datei angehängt
    // und das, was bereits in der Datei steht nicht überschrieben.
    fp = fopen("daten.txt", "a+");

    // NOTE(dgl): Hier fehlte die {} Ansonsten gilt das nur für die erste Zeile nach dem if
    if (fp != NULL) {
        fprintf(fp, "Name: %s, ", Name);
        fprintf(fp, "LastName: %s, ", LastName);
        fprintf(fp, "Number: %s\n", Number);
        fclose(fp);

        printf("The Name was %s, the Number was %s\n", Name, Number);
    }


    // TODO(dgl): Hier die übergebenen Daten in die Datei schreiben

};
void list_all() {
    // TODO(dgl): Hier die Datei Zeile für Zeile lesen und mit printf ausgeben.

};
void search_entry(char* Name, char* LastName) {
    // TODO(dgl): Hier ebenfalls die Datei Zeile für Zeile lesen und mit printf ausgeben.
};

int main(void)
{
    //     struct Daten Daten1 = { "Philipp Perez", 18 };
    //     printf("Daten1 = %s\n", Daten1.Name);
    //     printf("Daten1 = %f\n", Daten1.Age);
    for (;;) {
        printf("\t\t\t\t\t============PHONEBOOK============\n");
        printf("\t\t 1) New Entry\n");
        printf("\t\t 2) List\n");
        printf("\t\t 3) Search\n");
        printf("\t\t 4) Exit\n\n");
        int input = 0;
        printf("What do you want to do? [1-4]: ");
        scanf_s("%d", &input);
        if (input == 1) {
            system("cls");
            char Name[255] = {};
            char Number[255] = {};
            char LastName[255] = {};

            // TODO(dgl): Das alles mit dem File in die new_entry Funktion verschieben, sodass
            // hier nur der Name, Lastname und Phonenumber mit scanf abgefragt werden.
            // Die new_entry Funktion müsstest du dann noch erweitern, dass auch der Lastname übergeben werden kann.
            // also new_entry(char* name, char* lastname, char* number)

            new_entry(Name, LastName, Number);
            printf("Enter the Name: ");
            scanf_s("%254s", Name, 255);

            fflush(stdin);

            printf("Enter the LastName: ");
            scanf_s("%254s", LastName, 255);

            fflush(stdin);

            printf("Enter Phonenumber: ");
            scanf_s("%254s", Number, 255);

            new_entry(Name, LastName, Number);

            system("cls");

            printf("Saved Successfully!\n\n");
        }
        else if (input == 2) {
            system("cls");
            printf("\t\t\t\t\t============PHONELIST============\n");

            // TODO(dgl): um die Funktion aufzurufen musst du noch die Klammern angeben, also list_all();
            list_all();
        }
        else if (input == 3) {
            system("cls");
            char Name[255], LastName[255];
            printf("Enter the Name: ");
            scanf_s("%254s", Name, 255);
            scanf_s("%254s", LastName, 255);

            // TODO(dgl):
            // Die search_entry Funktion hier aufrufen. Diese muss dann auch um den LastName Parameter erweitert werden.
        }
        else if (input == 4) {
            printf("Press any Key to leave");
            return 0;
        }
        else {
            printf("\nInvalid Entry. Select a number between 1 and 4\n\n");
        }
    }
    return 0;
}
