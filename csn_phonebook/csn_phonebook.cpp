#include<stdio.h>

// NOTE(dgl): Als Tipp, defines sind of schwer im Code zu erkennen. Deshalb schreibt man die meist alle groß.
// Also in diesem Fall #define SIZE 1
#define size 1

// NOTE(dgl): Hier kannst du z.B. den Struct definieren
// typedef struct Daten {
//     char name[30];
//     int age;
//     char phone_number[15];
//     char gender[10];
//     char email[100];
// } Daten;

int main()
{
    // NOTE(dgl): Cool, dass du schon mit Structs anfängst. Diese schreibt man meist außerhalb von Funktionen.
    // Als Tipp, du kannst da auch ein Typedef davor machen, dann sparst du dir das struct keyword, wenn du den
    // Struct nutzen willst.
    struct Daten
    {
        char Name[30];
        int Age[3];
        int PhoneNumber[100];
        char Gender[10];
        char EMail[100];
    };
    struct Daten Daten1 = { "Philipp Perez", 18 };
    printf("Daten1 = %s\n", Daten1.Name);
    printf("Daten1 = %f\n", Daten1.Age);

    int index = 0;

    // NOTE(dgl): Wenn du bei einer For-Schleife keine geschweiften Klammern machst, wird nur die Zeile danach gelooped.
    for (index = 0; index < size; index++)
        printf("\t\t\t\t\t============PHONEBOOK============");
    printf("\n\t\t 1) Name");
    printf("\n\t\t 2) Age");
    printf("\n\t\t 3) Phone-Number");
    printf("\n\t\t 4) Gender");
    printf("\n\t\t 5) E-Mail");



    return 0;
}

// TODO(dgl): Meine Kommentare kannst du wieder löschen. Diese dienen dir nur zur Info.
// Ich schlage vor, du machst heute das mit der Auswahl, damit man einen Menüpunkt auswählen kann.
// Schau dir dazu auch einmal an, wie man in C verschiedene Funktionen erstellt und wie man diesen
// Funktionen Parameter übergeben kann.
