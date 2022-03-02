#include <stdio.h>

void GetRepDigit(int no, int freq[]);
int CheckRepDigit(int freq[], int tot, int flag);

int main(void)
{
    int no, freq[9], temp, flag = 0, i;
    printf("\nEnter the number : "); //Maximum Digits 999999999 (9 digits)
    scanf("%d", &no);
    temp = no;

    for (i = 0; i < 10; i++)
        freq[i] = 0;

    GetRepDigit(no, freq);
    flag = CheckRepDigit(freq, 9, 0);

    if (flag == 0)
        printf("\nThere are no repeated digits..");
}

void GetRepDigit(int num, int freq[])
{
    int k;
    if (num > 0)
    {
        k = num % 10;
        freq[k] = freq[k] + 1;
        num = num / 10;
        GetRepDigit(num, freq);
    }
    else
        return;
}

int CheckRepDigit(int freq[], int total, int flag)
{
    if (total >= 0)
    {
        if (freq[total] > 1)
        {
            flag = 1;
            printf("\n%d repeated %d times", total, freq[total]);
        }
        total--;
        CheckRepDigit(freq, total, flag);
    }
    else
        return flag;
}