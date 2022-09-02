#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void dfs(int n, int left, int right, char *stack, int len, char **results, int *count)
{
    if (len == 2 * n)
    {
        results[*count] = malloc((len + 1) * sizeof(char));
        strcpy(results[(*count)++], stack);
        return;
    }

    if (left < n)
    {
        stack[len] = '(';
        dfs(n, left + 1, right, stack, len + 1, results, count);
    }

    if (right < left)
    {
        stack[len] = ')';
        dfs(n, left, right + 1, stack, len + 1, results, count);
    }
}

/**
 ** Return an array of size *returnSize.
 ** Note: The returned array must be malloced, assume caller calls free().
 **/

static char **generate(int n, int *returnSize)
{
    char *stack = calloc(2 * n + 1, sizeof(char));
    char **parenthesis = malloc(5000 * sizeof(char *));
    *returnSize = 0;
    dfs(n, 0, 0, stack, 0, parenthesis, returnSize);
    return parenthesis;
}

int main(int argc, char **argv)
{
    int count;
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./GenerateBalancedParameters 3\n");
        exit(-1);
    }

    char **lists = generate(atoi(argv[1]), &count);
    for (int i = 0; i < count; i++)
        printf("%2d - %s\n", i, lists[i]);
  
    return 0;
}

/*
./GenerateBalancedParameters 5
 0 - ((((()))))
 1 - (((()())))
 2 - (((())()))
 3 - (((()))())
 4 - (((())))()
 5 - ((()(())))
 6 - ((()()()))
 7 - ((()())())
 8 - ((()()))()
 9 - ((())(()))
10 - ((())()())
11 - ((())())()
12 - ((()))(())
13 - ((()))()()
14 - (()((())))
15 - (()(()()))
16 - (()(())())
17 - (()(()))()
18 - (()()(()))
19 - (()()()())
20 - (()()())()
21 - (()())(())
22 - (()())()()
23 - (())((()))
24 - (())(()())
25 - (())(())()
26 - (())()(())
27 - (())()()()
28 - ()(((())))
29 - ()((()()))
30 - ()((())())
31 - ()((()))()
32 - ()(()(()))
33 - ()(()()())
34 - ()(()())()
35 - ()(())(())
36 - ()(())()()
37 - ()()((()))
38 - ()()(()())
39 - ()()(())()
40 - ()()()(())
41 - ()()()()()
*/
