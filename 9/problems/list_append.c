#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

void print(struct node *head);
struct node *nums_to_list(int len, int nums[]);
struct node *list_append(struct node *list1, struct node *list2);

// DO NOT CHANGE THIS MAIN FUNCTION

int main() {
    int nums1[] = {1, 2, 3};
    struct node *head1 = nums_to_list(3, nums1);
    print(head1);
    
    int nums2[] = {4, 5};
    struct node *head2 = nums_to_list(2, nums2);
    print(head2);
    
    // print(list_append(head1, head2));
    print(list_append(NULL, head2));

    return 0;
}

struct node *list_append(struct node *list1, struct node *list2) {
    
    struct node *curr = list1;
    
    if (curr == NULL) {
        return list2;
    }
    
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    curr->next = list2;
    
    return list1;

}

// print a linked list in this format:
// 17 -> 34 -> 51 -> 68 -> X
void print(struct node *head) {
    
    // initialise a counter
    struct node *curr = head;
    
    // set loop condition
    while (curr != NULL) {
        
        printf("%d-> ", curr->data);
        
        // do stuff
        curr = curr->next;
    }
    
    printf("X\n");
    
}


// DO NOT CHANGE THIS FUNCTION

// create linked list from array of strings
struct node *nums_to_list(int len, int nums[]) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = nums[i];
        head = n;
    }
    return head;
}
