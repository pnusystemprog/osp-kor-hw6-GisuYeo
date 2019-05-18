// array of sturcure
# define MAX 50
//extern int size;
typedef struct Contact
{
    char Name[10];
    char PhoneNumber[15];  // change 15 from 13
} CONTACT, *PCONTACT;

CONTACT PhoneBook[MAX];   // struct pointer array

int size;  // store the actual numbers of PhoneBook
