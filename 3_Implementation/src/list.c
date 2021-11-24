#include<phonebook.h>

/**
 * @brief funtion to perform listing
 * @switch(phonebook_oprn)
 * @return test_value
 **/

void list_phonebook_linkedlist() {
    struct phone_entry *tmp = head;
    printf("\nEntries of the phonebook:\n");
    while (tmp) {
        printf("Name: %s\n", tmp->name);
        printf("Number: %s\n\n", tmp->number);
        tmp = tmp->next;
    }
}