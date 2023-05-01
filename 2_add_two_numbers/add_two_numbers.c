/**
* Justin Salsbery
*/

#include <stdio.h> /* Needed for NULL, printf. */
#include <stdlib.h> /* Needed for malloc. */
#include <assert.h>

#include "add_two_numbers.h"

int main()
{
    /**
    * Compound literals are for local scope only. Malloc must be used
    * if the structure lives past said scope, such as in addTwoNumbers.
    *
    * (Malloc places on the heap while compound literals are placed on the
    * stack. This does mean compound literals are more performant.)
    */
   struct ListNode* l1 = &(struct ListNode) {1, NULL};
   /* Val member accessed by: l1->val or (*l1).val NOT *l1.val */
   struct ListNode* l2 = &(struct ListNode) {9, &(struct ListNode) {1, NULL}};

   struct ListNode* list_sum = addTwoNumbers(l1, l2);
   assert /* NULL check everywhere. */
      (list_sum && list_sum->val == 0 && 
      list_sum->next && list_sum->next->val == 2);

   return 0;
}

void print_list(struct ListNode* list)
{
   struct ListNode* node_current = list;

   if (list)
   {
      printf("%d", node_current->val);
      node_current = node_current->next;

      while (node_current != NULL)
      {
         printf(", %d", node_current->val);
         node_current = node_current->next;
      }
   }

   printf("\n");
}

/**
* Input: l1 = [2,4,3], l2 = [5,6,4]
* Output: [7,0,8]
* Explanation: 342 + 465 = 807.
* 
* Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
* Output: [8,9,9,9,0,0,0,1]
*/
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
   struct ListNode* list_sum_head = NULL; 
   /* Initialize with NULL else it may contain garbage values. */
   struct ListNode** list_sum_current = &list_sum_head;

   return list_sum_head;
}
