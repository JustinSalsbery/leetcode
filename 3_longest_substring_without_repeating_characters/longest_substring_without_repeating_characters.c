/**
* Justin Salsbery
*/

#include <stdio.h> /* Needed for NULL, printf. */
#include <assert.h>

int lengthOfLongestSubstring(char* s); /* Function Prototype. */

/** 
* Void argument indicates no arguments. Empty parentheses meaning depends on 
* the version of C. 
*/
int main(void)
{
   /**
   * Aside: 
   * char* string = "..."; // Immutable, in read-only. Similar to const keyword.
   * char string[] = "..."; // Mutable, on stack.
   */

   if (0 != lengthOfLongestSubstring(NULL))
      printf("Test FAILED: 0 != lengthOfLongestSubstring(NULL)\n");
   if (3 != lengthOfLongestSubstring("pwwkew"))
      printf("Test FAILED: 3 != lengthOfLongestSubstring(\"pwwkew\")\n");
   return 0;
}

/**
* Input: s = "pwwkew"
* Output: 3
* Explanation: The answer is "wke", with the length of 3.
*/
int lengthOfLongestSubstring(char* s)
{
   if (!s) return 0;

   int length_longest = 0, length_current = 0;

   /** 
   * Ideally this would use a hashmap library to check for repeating characters. 
   * Unfortunately, includes are inconvenient with LeetCode.
   */
   for(int i = 0; s[i]; i++) 
   {
      // printf("%d, ", i);
   }

   return length_longest;
}
