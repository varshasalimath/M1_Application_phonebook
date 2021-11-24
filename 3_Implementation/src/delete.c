#include<phonebook.h>

/**
 * @brief funtion to perform  deletion
 * @switch(phonebook_oprn)
 * @return test_value
 **/


void delete_from_phonebook() {
    char name[1024];
    int record_index = -1;
    int i = 0;

    printf("\nEnter the name of the record you want to delete:\n");
    fgets(name, 1024, stdin);
    name[strlen(name) - 1] = 0;