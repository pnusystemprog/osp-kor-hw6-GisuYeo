#include <stdio.h>
#include <string.h>
#include "phone.h"

extern int size;
extern CONTACT PhoneBook[MAX];

void deleteByName()
{
    char name[10] = {0,};
    printf(">> Enter a name to delete:");
    scanf("%9s", name);

    int i;
    for(i = 0; i < size; i++){
        if(strcmp(name, PhoneBook[i].Name) == 0){
            break;
        }
    }

    if(i < size){
        for(int j = i; j < size-1; j++){
            PhoneBook[j] = PhoneBook[j+1];
        }
        memset(&PhoneBook[size-1], 0, sizeof(CONTACT));
        size--;
        printf("%s is deleted...\n", name);
        return;
    }

    printf("Oops! %s is not in the PhoneBook.\n", name);
}

