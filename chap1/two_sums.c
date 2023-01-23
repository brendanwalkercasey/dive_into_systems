/* Two sums function example (chapter 1.3: Conditionals and Loops)

revised by Brendan Casey 20230122
*/


/* This program computes the larger of two values entered by the user.

   ** Key **
   function max: computes larger of two inputs
   a: first integer value
   b: second integer value
   returns: the larger of inputs (a or b)
 */

#include <stdio.h>

int max(int a, int b) {
    int larger;

    larger = a;
    if (b > a) {
        larger = b;
    }
    printf("  in max, before return a: %d b: %d\n", a, b);
    return larger;
}

