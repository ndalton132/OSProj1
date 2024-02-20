/* Include standard input/output library */
#include <stdio.h>
/* Include standard library for memory allocation, string manipulation */
#include <stdlib.h>
#include <string.h>
/* Include the header file for the linked list implementation */
#include "list.h"

/* Creates a new empty list and sets its head to NULL.
 * Returns the created list if successful, NULL otherwise.
 */
List* create_list() {
    /* Allocate memory for the new list */
    List* new_list = (List*)malloc(sizeof(List));
    /* Check if memory allocation was successful */
    if (new_list != NULL) {
        new_list->head = NULL;
    }
    /* Return the newly created list */
    return new_list;
}

/* Allocates a new node and copies the string from item to this node.
 * Adds this new node to the end of the list ll.
 * Returns 0 if successful, non-zero otherwise.
 */
int add_to_list(List* ll, char* item) {
    /* Check if the list and item are not NULL */
    if (ll == NULL || item == NULL) {
        return -1;
    }
    /* Allocate memory for the new node */
    Node* new_node = (Node*)malloc(sizeof(Node));
    /* Check if memory allocation was successful */
    if (new_node == NULL) {
        return -1;
    }
    /* Copy the string from item to the new node */
    new_node->item = strdup(item);
    new_node->next = NULL;
    /* Check if the list is empty */
    if (ll->head == NULL) {
        ll->head = new_node;
    }
    else {
        /* Traverse the list to find the last node */
        Node* current = ll->head;
        while (current->next != NULL) {
            current = current->next;
        }
        /* Add the new node to the end of the list */
        current->next = new_node;
    }
    return 0;
}

/* Removes the head of the list ll, extracts the string stored in the head,
 * and returns a pointer to this string. Also frees the removed head node.
 */
char* remove_from_list(List* ll) {
    /* Check if the list or the head of the list is NULL */
    if (ll == NULL || ll->head == NULL) {
        return NULL;
    }
    /* Store the head node temporarily */
    Node* temp = ll->head;
    /* Update the head of the list to the next node */
    ll->head = ll->head->next;
    /* Store the string from the head node */
    char* item = temp->item;
    /* Free the memory allocated for the head node */
    free(temp);
    /* Return the string from the removed head node */
    return item;
}

/* Prints every string in each node of the list ll, with a new line
 * character at the end of each string.
 */
void print_list(List* ll) {
    /* Check if the list or the head of the list is NULL */
    if (ll == NULL || ll->head == NULL) {
        printf("Empty list\n");
        return;
    }
    /* Traverse the list and print each string */
    Node* current = ll->head;
    while (current != NULL) {
        printf("%s\n", current->item);
        current = current->next;
    }
}

/* Flushes (clears) the entire list and re-initializes the list.
 * The passed pointer ll should still point to a valid, empty list when this function returns.
 * Any memory allocated to store nodes in the list should be freed.
 */
void flush_list(List* ll) {
    /* Check if the list or the head of the list is NULL */
    if (ll == NULL || ll->head == NULL) {
        return;
    }
    /* Traverse the list and free memory for each node */
    while (ll->head != NULL) {
        Node* temp = ll->head;
        ll->head = ll->head->next;
        free(temp->item);
        free(temp);
    }
}

/* De-allocates all data for the list.
 * Ensure all memory allocated for list ll is freed,
 * including any allocated strings and list ll itself.
 */
void free_list(List* ll) {
    /* Flush the list to free memory for all nodes */
    flush_list(ll);
    /* Free memory allocated for the list itself */
    free(ll);
}
