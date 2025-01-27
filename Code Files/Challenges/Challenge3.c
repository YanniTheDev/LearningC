#include <stdio.h>

int main()
{
    printf("Enter your age: \n");

    // Get user to input their age
    int userAge;
    scanf("%d", &userAge);

    // Calculate difference between 120 and userAge
    int yearsTo120 = 120 - userAge;

    printf("You are ", yearsTo120);

    return 0;
}