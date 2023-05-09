#include <stdlib.h>
#include <stdio.h>

struct dugum{
    long int studentdata;
    struct dugum* next;
};

int main() {
    struct dugum* head = NULL;
    struct dugum* second = NULL;
    struct dugum* third = NULL;

    void secondlist();

    head = (struct dugum*)malloc(sizeof(struct dugum));
    second = (struct dugum*)malloc(sizeof(struct dugum));
    third = (struct dugum*)malloc(sizeof(struct dugum));

    head->studentdata = 2210213023;
    head->next = second;

    second->studentdata = 2210213045;
    second->next = third;

    third->studentdata = 2210213056;
    third->next = NULL;

   
    printf("first list: \n");
    struct dugum* current_dugum = head;
    while (current_dugum!= NULL) {
        printf("%ld \n", current_dugum->studentdata);
        current_dugum = current_dugum->next;
    }
    printf("\n");

  
    secondlist(&head);

    printf("****************\n");
    printf("second list:\n");
    current_dugum = head;
    while (current_dugum != NULL) {
        printf("%ld \n ", current_dugum->studentdata);
        current_dugum = current_dugum->next;
    }
    printf("\n");

    return 0;
}

void secondlist(struct dugum** head_ref) {
    struct dugum* prev_dugum = NULL;
    struct dugum* curr_dugum = *head_ref;
    struct dugum* next_dugum = NULL;

    while (curr_dugum != NULL) {
        next_dugum = curr_dugum->next;
        curr_dugum->next = prev_dugum;
        prev_dugum = curr_dugum;
        curr_dugum= next_dugum;
    }

    *head_ref = prev_dugum;
}
