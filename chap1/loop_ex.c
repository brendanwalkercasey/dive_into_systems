/* while loop example (chapter 1.3: Conditionals and Loops)

revised by Brendan Casey 20230120
*/

#include <stdio.h>

int main() {
    int n, v; //number and variable, respec.

    printf("Provide input value: ");
    scanf("%d", &n);
    // determine if variable is not negative
    if (n < 0) {
        n = -n;
    }
    v = 1;
    while (v < n) {
        printf("%d\n", v);
        v = v * 2;
    }

    return 0;
}
