#include <stdio.h>

int length(char w[], int index)
{
    if (w[index] == '\0')
        return 1;
    return (1 + length(w, index + 1));
}
int main(void)
{
    char word[10];
    int count = 0;
    printf("\nEnter a word: ");
    scanf("%10s", word);
    count = length(word, 0);
    printf("\nThe length of the word is %d with NULL terminator", count);
}