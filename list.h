#ifndef LIST_H
#define LIST_H

/* Define the struct Node */
typedef struct Node {
    char* item;         /* Pointer to a character string */
    struct Node* next;  /* Pointer to the next node */
} Node;

/* Define the struct List */
typedef struct List {
    Node* head;  /* Pointer to the head of the list */
} List;

/* Function prototypes */
List* create_list();
int add_to_list(List* ll, char* item);
char* remove_from_list(List* ll);
void print_list(List* ll);
void flush_list(List* ll);
void free_list(List* ll);

#endif /* LIST_H */

