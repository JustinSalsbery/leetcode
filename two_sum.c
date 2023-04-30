/**
* Justin Salsbery
*/

#include <stdio.h> // printf("%d", 0);
#include <stdlib.h> // malloc

#define FALSE 0
#define TRUE 1
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

/* Function prototype */
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
   int values[] = {0, 4, 6, 7, 2, 11};
   
   int returnSize_a;
   int* answer_a = twoSum(values, ARRAY_SIZE(values), 17, &returnSize_a);
   printf("answer_a: %d %d\n", answer_a[0], answer_a[1]);
   
   int returnSize_b;
   int* answer_b = twoSum(values, ARRAY_SIZE(values), 6, &returnSize_b);
   printf("answer_b: %d %d\n", answer_b[0], answer_b[1]);
   
   return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 *
 * One strategy to optimize this is to use a dictionary data structure
 * such that (value, index). 
 * Creating this dictionary would be of complexity n. Looping through 
 * the array for matches would be of complexity n.
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
   for (int i = 0; i < numsSize; i++)
   {
      for (int j = i + 1; j < numsSize; j++)
      {
         /** 
         * I wanted to check if either nums[i] or nums[j] was a 0 and if so
         * return only an array of 1. The directions specify returning an 
         * array of size 2, though. Further, if that array did not have an
         * index with a value of 0, that array should not pass. It is a 
         * two sum problem after all.
         */
         if (target == nums[i] + nums[j])
         {
            *returnSize = 2;
            int* ans = malloc(2 * sizeof(int));
            ans[0] = i;
            ans[1] = j; /* equivalent to: ans[0] = i, ans[1] = j; */
            return ans;
         }
      }
   }

   *returnSize = 0;
   return NULL;
}
