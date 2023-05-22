/**
* Justin Salsbery
* 
* These are intended for LeetCode questions. Other libraries should be used
* for serious projects.
*/

#include <stdio.h> /* Needed for NULL, printf. */
#include <stdlib.h> /* Needed for malloc. */
#include <assert.h>

typedef struct HashNode HashNode;
struct HashNode
{
   void* value;
   HashNode* next;
};

typedef struct HashSet HashSet;
struct HashSet {
   int num_of_buckets;
   int num_of_entries;
   float resize_at; /* num_of_entries / num_of_buckets */

   HashNode* sets[]; /* Unknown length/memory requirements. Must be last. */
};

/* Use a prime number of buckets. Reduces collision rates. */
int prime_nums[] = {13, 31, 61, 127, 251, 509, 1021, 2039, 4093};

HashSet* hash_set_init(void)
{
   int num_of_buckets = prime_nums[0];

   HashSet* set = malloc(sizeof(HashSet) + (sizeof(HashNode*) * num_of_buckets));
   set->num_of_buckets = num_of_buckets;
   set->num_of_entries = 0;
   set->resize_at = 0.7;

   return set;
}


/* TESTING ***************************************************************/

int main(void)
{
   return 0;
}
