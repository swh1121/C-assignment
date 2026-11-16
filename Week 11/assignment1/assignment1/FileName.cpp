#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int count = 0;

    printf("Write English sentence : ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    for (char* p = str; *p != '\0'; p++) {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - 'a' + 'A';
        }

        if (*p != ' ') {
            count++;
        }
    }

    printf("Capitalization : %s\n", str);
    printf("Character count (Excluding spaces) : %d\n", count);

    return 0;
}