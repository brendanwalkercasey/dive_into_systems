/* Example (scanf) example */
#include <stdio.h>

int main() {
    int n1, n2;

    printf("The following code adds numbers:\n");

    printf("Whats the first number? ");
    scanf("%d", &n1);
    printf("Enter a second number: ");
    scanf("%d", &n2);

    printf("%d + %d = %d\n", n1, n2, (n1+n2));

    return 0;
}
