#include<stdio.h> 
#define size 1 

int main()
{
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

    for (index = 0; index < size; index++)
        printf("\t\t\t\t\t============PHONEBOOK============");
    printf("\n\t\t 1) Name");
    printf("\n\t\t 2) Age");
    printf("\n\t\t 3) Phone-Number");
    printf("\n\t\t 4) Gender");
    printf("\n\t\t 5) E-Mail");



    return 0;
}

