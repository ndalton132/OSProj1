/* Include standard input/output library */
#include <stdio.h>
/* Include the header file for the linked list implementation */
#include "list.h"

/* Main function */
int main() {
    /* Test create_list and add_to_list */
    List* ll = create_list();
    add_to_list(ll, "Apple");
    add_to_list(ll, "Banana");
    add_to_list(ll, "Orange");

    /* Test print_list */
    printf("List:\n");
    print_list(ll);

    /* Test remove_from_list */
    printf("\nRemoved: %s\n", remove_from_list(ll));

    /* Test print_list after removal */
    printf("\nList after removal:\n");
    print_list(ll);

    /* Test flush_list */
    printf("\nFlushing list...\n");
    flush_list(ll);
    printf("List after flush:\n");
    print_list(ll);

    /* Test free_list */
    printf("\nFreeing list...\n");
    free_list(ll);
    printf("List after free:\n");
    print_list(ll);

    /* Return 0 to indicate successful completion */
    return 0;
}
