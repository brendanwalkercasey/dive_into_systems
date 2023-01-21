
/* for and while loop comparision example (chapter 1.3: Conditionals and Loops)

revised by Brendan Casey 20230121
*/
#include <stdio.h>

int main() {
int guess = 0, num = 7;

// while loop:
while (guess != num) {
    printf("We know %d isnt the right number\n", guess);
    printf("Try another number: ");
    scanf("%d", &guess);
}

// for loop equivalent:
for (guess = 0; guess != num; ) {
    printf("Using a for loop, we know %d isnt the correct number\n", guess);
    printf("Try another number: ");
    scanf("%d", &guess);
}
}

