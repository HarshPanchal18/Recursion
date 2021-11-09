#include <stdio.h>
void copy(char str1[], char str2[], int index)
{
    str2[index] = str1[index];
    if (str1[index] == '\0')
        return;
    copy(str1, str2, index + 1);
}

int main(void)
{
    char str1[20], str2[20];
    printf("\nEnter string to copy: ");
    scanf("%s", str1);

    copy(str1, str2, 0);
    
    printf("\nString 1 : %s", str1);
    printf("\nString 2 : %s", str2);
}