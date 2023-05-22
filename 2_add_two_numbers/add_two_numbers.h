/**
* Justin Salsbery
*/

/* Define only if not already defined. Avoids duplicates. */
#ifndef ADD_TWO_NUMBERS_H
#define ADD_TWO_NUMBERS_H

/**
* Standard is to define structs and declare, but not define, functions 
* within headers. Functions should be defined in source.
*/

/* Definition for singly-linked list. */
struct ListNode 
{
   int val;
   struct ListNode* next; /* Equivalent to: struct ListNode *next; */
}; /* Needs ending semicolon. */

/* Function prototypes. */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
void print_list(struct ListNode* list);

#endif
