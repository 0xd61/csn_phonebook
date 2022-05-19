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
    fp = fopen("daten.txt", "a+");
    if (fp != NULL) {
        fprintf(fp, "Name: %s, ", Name);
        fprintf(fp, "LastName: %s, ", LastName);
        fprintf(fp, "Number: %s\n", Number);
        fclose(fp);
        printf("The Name was %s, the Number was %s\n", Name, Number);
    }
};
void list_all() {
    FILE* the_file = fopen("daten.txt", "r");
    if (the_file == NULL) {
        perror("Unable to open the File");
        exit(1);
    }
    char line[255];
    while (fgets(line, sizeof(line), the_file)) {
        printf("%s", line);
    }
};
void search_entry(char* name, char* str) {
    // TODO(dgl): Hier ebenfalls die Datei Zeile für Zeile lesen und mit printf ausgeben.
    FILE* fp;
    int line_num = 1;
    int find_result = 0;
    char temp[512];
    if ((fopen_s(&fp, "daten.txt", "r")) != NULL) {
        return;
    }
    while (fgets(temp, 255, fp) != NULL) {
        if ((strstr(temp, str)) != NULL) {
            printf("A match found on line: %d\n", line_num);
            printf("\n%s\n", temp);
            find_result++;
        }
        line_num++;
    }

    if (find_result == 0) {
        printf("\nSorry, couldn't find a match.\n");
    }

    //Close the file if still open.
    if (fp) {
        fclose(fp);

    }
};
void delete_entry(char *name, char *str) {
    FILE* fp;
    int line_num = 1;
    int find_result = 0;
    char temp[512];
    if ((fopen_s(&fp, "daten.txt", "r")) != NULL) {
        return;
    }
    while (fgets(temp, 255, fp) != NULL) {
        if ((strstr(temp, str)) != NULL) {
            printf("A match found on line: %d\n", line_num);
            printf("\n%s\n", temp);
            find_result++;
        }
        line_num++;
    }
    if (find_result == 0) {
        printf("\nSorry, couldn't find a match.\n");
    }

    if (fp) {
        fclose(fp);
    }
    remove();
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
        printf("\t\t 4) Delete Person\n");
        printf("\t\t 5) Exit\n\n");
        int input = 0;
        printf("What do you want to do? [1-4]: ");
        scanf("%d", &input);
        if (input == 1) {
            system("cls");
            char Name[255] = {};
            char Number[255] = {};
            char LastName[255] = {};
            // TODO(dgl): Das alles mit dem File in die new_entry Funktion verschieben, sodass
            // hier nur der Name, Lastname und Phonenumber mit scanf abgefragt werden.
            // Die new_entry Funktion müsstest du dann noch erweitern, dass auch der Lastname übergeben werden kann.
            // also new_entry(char* name, char* lastname, char* number)

            printf("Enter the Name: ");
            scanf("%s", Name);

            fflush(stdin);

            printf("- ");
            scanf("%s", LastName);

            fflush(stdin);

            printf("Enter Phonenumber: ");
            scanf("%s", Number);

            new_entry(Name, LastName, Number);

            system("cls");
            printf("Saved Successfully!\n\n");
        }
        else if (input == 2) {
            system("cls");
            printf("\t\t\t\t\t============PHONELIST============\n");
            // TODO(dgl): um die Funktion aufzurufen musst du noch die Klammern angeben, also list_all();
            list_all();
            int input = 0;
            printf("\nEnter Number 1 to return: ");
            scanf("%d", &input);
            if (input == 1) {
                system("cls");

            }

        }
        else if (input == 3) {
            system("cls");
            char Name[255], LastName[255];
            printf("Enter the Name: ");
            scanf("%s", Name);
            scanf("%s", LastName);

            search_entry(Name, LastName);

            int input = 0;
            printf("\nEnter Number 1 to return: ");
            scanf("%d", &input);
            if (input == 1) {
                system("cls");
            }

            // TODO(dgl):
            // Die search_entry Funktion hier aufrufen. Diese muss dann auch um den LastName Parameter erweitert werden.
        }
        else if (input == 4) {
            system("cls");
            char Name[255], LastName[255];
            printf("Enter the Name: ");
            scanf("%s", Name);
            scanf("%s", LastName);

            delete_entry(Name, LastName);
        }
        else if (input == 5) {
            printf("Press any Key to leave");
            return 0;
        }
        else {
            printf("\nInvalid Entry. Select a number between 1 and 4\n\n");
        }
    }
    return 0;
}