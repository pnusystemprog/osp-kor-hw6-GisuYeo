#include <stdio.h>
#include <string.h>
#include "phone.h"

extern int size;
extern CONTACT PhoneBook[MAX];

void searchByName()
{
    char name[10] = {0,};
    printf(">> Enter a name to search:");
    scanf("%9s", name);

    for(int i = 0; i < size; i++){
        if(strcmp(name, PhoneBook[i].Name) == 0){
            printf("%s\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
            return;
        }
    }
    printf("Oops! %s is not in the PhoneBook.\n", name);
}

