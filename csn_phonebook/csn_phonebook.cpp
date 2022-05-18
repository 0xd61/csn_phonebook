#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1

// NOTE(dgl): das ist eine Forward Declaration. Diese ist notwendig, wenn die write_archive Funktion im Code nach der main Funktion stehen w¸rde.
// Da sie aber aktuell davor steht, kˆnnte man das hier auch weglassen.

//void write_archive(void);

struct Daten
{
    char Name[30];
    int Age[3];
    int PhoneNumber[100];
    char Gender[10];
    char EMail[100];
};


// NOTE(dgl): Wenn du eine Funktion definierst, dann sollte diese auﬂerhalb von anderen Funktoinen stehen. Zudem muss sie vor der Funktion stehen,
// die die Funktion aufruft. Also wenn wir die Funktion write_archive haben und diese in main aufrufen wollen, muss diese vor der main Funktion stehen.
// Da C den Code von oben nach unten liest, weiﬂ der Compiler sonst nicht, dass es die Funktion gibt und gibt einen Fehler aus. Alternativ kann man etwas
// machden, das heiﬂt forward declaration. https://en.wikipedia.org/wiki/Forward_declaration. Da sagt man, meist am Anfang einer Datei, dass es eine Funktion
// gibt, indem man den Funktions-Header schreibt, ohne die geschweiften Klammern (so wie oben, was du schon gemacht hattest.).
void write_archive() {
    printf("Das ist die Write Archive Funktion\n");
};
void new_entry(char* name, char* number) {
    printf("The Name was %s, the Number was %s\n", name, number);

    // TODO(dgl): Hier die √ºbergebenen Daten in die Datei schreiben

};
void list_all() {
    // TODO(dgl): Hier die Datei Zeile f√ºr Zeile lesen und mit printf ausgeben.

};
void search_entry(char* name) {
    // TODO(dgl): Hier ebenfalls die Datei Zeile f√ºr Zeile lesen und mit printf ausgeben.
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
            char Name[255], Number[255], LastName[255];

            // TODO(dgl): Das alles mit dem File in die new_entry Funktion verschieben, sodass
            // hier nur der Name, Lastname und Phonenumber mit scanf abgefragt werden.
            // Die new_entry Funktion m√ºsstest du dann noch erweitern, dass auch der Lastname √ºbergeben werden kann.
            // also new_entry(char* name, char* lastname, char* number)
            FILE* fp;
            char ch;
            fp = fopen_s("daten.txt", "w");
            if (fp == NULL)

            printf("Enter the Name: ");
            scanf_s("%254s", Name, 255);
            scanf_s("%254s", LastName, 255);
            fprintf(fp, "Name = %254s", Name);
            fprintf(fp, "LastName = %254s", LastName);

            fflush(stdin);

            printf("Enter Phonenumber: ");
            scanf_s("%254s", Number, 255);
            fprintf(fp, "Number = %254s", Number);


            new_entry(Name, Number);

            fclose(fp);

            system("cls");

            printf("Saved Successfully!\n\n");
        }
        else if (input == 2) {
            system("cls");
            printf("\t\t\t\t\t============PHONELIST============\n");

            // TODO(dgl): um die Funktion aufzurufen musst du noch die Klammern angeben, also list_all();
            list_all;
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
