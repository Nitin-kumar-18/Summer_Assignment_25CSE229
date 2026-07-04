#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Quiz Application\n\n");

    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    printf("\nQ2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    printf("\nQ3. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    scanf("%d", &ans);
    if (ans == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}