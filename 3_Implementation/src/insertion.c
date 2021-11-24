#include<phonebook.h>

/**
 * @brief funtion to perform insertion
 * @switch(phonebook_oprn)
 * @return test_value
 **/


 void insert_to_phonebook_linkedlist() {
    struct phone_entry *entry = (struct phone_entry *)malloc(sizeof(struct phone_entry));
    printf("Name:\n");
    fgets(entry->name, 1024, stdin);
    entry->name[strlen(entry->name) - 1] = 0;

    printf("Number:\n");
    fgets(entry->number, 1024, stdin);
    entry->number[strlen(entry->number) - 1] = 0;

    entry->next = NULL;
    
    if (head == NULL) {
        head = entry;
        tail = entry;
    } else {
        tail->next = entry;
        tail = entry;
    }
}