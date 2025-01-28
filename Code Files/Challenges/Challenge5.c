/*
Write a program that gets as input a "stream" of characters (chars one after one) and outputs the number of characters entered, excluding spaces.

A string of characters is always terminated by the character '$'.
*/

#include <stdio.h>

int main()
{
    char userCharacters;
    int userCharactersLength = -1;

    while (userCharacters != '$')
    {
        scanf("%c", &userCharacters);

        if (userCharacters != ' ')
        {
            userCharactersLength++;
        }
    }

    printf("%d", userCharactersLength);

    return 0;
}