//COUNT THE NUMBER OF SPACE , WORDS AND CHARECTERS

#include <stdio.h>
#include<string.h>

int main() {
    char input[100];
    int length, i;
    int numWords = 0;
    int numSpaces = 0;
    int numChars = 0;

    printf("Enter a string: ");
    gets(input);
    length = strlen(input);

    for (i = 0; i < length; i++) {
        if (input[i] != ' ' && (i == 0 || input[i - 1] == ' ')) {
            numWords++;
        }
        if (input[i] == ' ') {
            numSpaces++;
        }
        if (input[i] != ' ') {
            numChars++;
        }
    }

    printf("Number of words: %d\n", numWords);
    printf("Number of spaces: %d\n", numSpaces);
    printf("Number of characters: %d\n", numChars);

    return 0;
}

