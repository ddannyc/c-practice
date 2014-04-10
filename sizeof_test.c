#include <stdio.h>

int main(void)
{
    char s[] = "abcd\0efghij";
    char *t = "ABCD\0EFGIHJ";

    printf("%d,%d\n", sizeof(s),sizeof(t));

    return 0;
}
