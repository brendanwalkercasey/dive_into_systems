/* prototype function example (chapter 1.4: Functions)

revised by Brendan Casey 20230130

*/
#include <stdio.h>

/* The function below demonstrates required information for a function (name,
   parameter list, and return type). This function returns the larger of two
   integers, and squares of each.
 */
int max(int num1, int num2);

void print_table(int begin, int end);

int main() {
    int a, b, c;

    printf("This program will operate over two int values.\n");

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);

    c = max(a,b);

    printf("The larger of %d and %d is %d\n", a, b, c);

    print_table(a, c);

    return 0;
}


int max(int num1, int num2)  {
    int answ;

    answ = num1;

    if (num2 > num1) {
        answ = num2;
    }

    return answ;
}

void print_table(int begin, int end) {
    int k;

    for (k = begin; k <= end; k++) {
        printf("%d\t",k*k);
    }

    printf("\n");
}

