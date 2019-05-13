#include <stdio.h>
#include <string.h>
#include "phone.h"

extern int size;
extern CONTACT PhoneBook[MAX];

void registerPhoneData()
{
    char pw[32] = {0,};
    char flag = 0;

    for(int i = 0; i < 3; i++){
        printf("Password:");
        scanf("%31s", pw);
	if(strcmp(pw, "qwerty1234") == 0){
            flag = 1;
            break;
        }
        printf(">> Not Matched!!!\n");
    }

    if(!flag){
        printf("You are not allowed to cccees PhoneBook.\n");
        return;
    }

    printf("New User Name: ");
    scanf("%9s", PhoneBook[size].Name);
    printf("Phone Number:");
    scanf("%14s", PhoneBook[size].PhoneNumber);

    if(size >= MAX){
         return;
    }
    size++;
    
    printf("Registration\n");
}
