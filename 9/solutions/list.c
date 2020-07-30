// implements functions in list.h
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

#define TRUE 1
#define FALSE 0

typedef struct node *Node;

// returns a copy of the linked list
struct node *copy(struct node *oldHead) {
    
    if (oldHead == NULL) {
        return NULL;
    }
    
    // Copy first node
    Node oldCurr = oldHead;
    Node newHead = create_node(oldHead->data);
    Node newCurr = newHead;
    
    // Move curr along by one as we just copied the first node
    oldCurr = oldCurr->next;
    
    while (oldCurr != NULL) {
        
        Node newNode = create_node(oldCurr->data);
        
        newCurr->next = newNode;
        
        newCurr = newCurr->next;
        oldCurr = oldCurr->next;
    }
    
    return newHead;

}

// returns 1 if the two lists are identical, otherwise returns 0
int identical(Node head1, Node head2) {
    Node curr1 = head1;
    Node curr2 = head2;
    
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->data != curr2->data) {
            return FALSE;
        }
    
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    if (curr1 == NULL && curr2 == NULL) {
        return TRUE;
    } 
    
    return FALSE;

}

// returns 1 if list is in strictly increasing order, otherwise returns 0
// Part of lab exercises
int ordered(struct node *head) {
    return 0;   // replace this
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2) {
    return NULL;    // replace this
}

// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2) {
    return NULL;
}

// =================================

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int data) {

    struct node *new_node = malloc(sizeof(struct node));
    
    new_node->data = data;
    new_node->next = NULL;
    
    return new_node;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}
