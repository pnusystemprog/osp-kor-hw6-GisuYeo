#include <stdio.h>
#include "phone.h"

extern int size;
extern CONTACT PhoneBook[MAX];
void printAll()
{
    printf("<< Display all contants in the PhoneBook >>\n");
    for(int i = 0; i < size; i++){
        printf("%s\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
    }
}

