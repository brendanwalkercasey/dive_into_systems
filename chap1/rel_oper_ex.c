/* relational operator example (chapter 1.3: Conditionals and Loops)

revised by Brendan Casey 20230117
*/

#include <stdio.h>

int main() {
int x, y;

printf("This is a relational operator ex. function,"
       "which evaluates relationship of x and y, "
       "through boolean expressions...\n");

printf("Enter a positive or negative value for 'x': ");

	scanf("%d", &x);

printf("Enter a positive or negative value for 'y': ");

	scanf("%d", &y);

if (y < 0) {
    printf("y is negative\n");
} else if (y != 0) {
    printf("y is positive\n");
} else {
    printf("y is zero\n");
}


if ( (x > 10) && (y >= x) ) {
    printf("Both x and y are bigger than 10\n");
    x = 13;
} else if ( ((-x) == 10) || (y > x) ) {
    printf("...its possible that y is bigger than x\n");
    x = y * x;
} else {
    printf("I have no idea what the relationship between x and y is\n");
}
return 0;
}
