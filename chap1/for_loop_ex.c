
/* for loop example (chapter 1.3: Conditionals and Loops)

revised by Brendan Casey 20230120
*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Proide a number: ");
    scanf("%d", &n);
    // ensure number is't negative
    if (n < 0) {
        n = -n;
    }
    
    // using a for loop, list all integers below the input:
    for (i = 0; i < n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
