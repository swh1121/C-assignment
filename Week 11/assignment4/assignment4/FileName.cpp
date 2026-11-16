#include <stdio.h>

void to_hms(int total, int* h, int* m, int* s)
{
    *h = total / 3600;
    *m = (total % 3600) / 60;
    *s = total % 60;
}

int main(void)
{
    int total;
    int h, m, s;

    printf("total time(second) : ");
    scanf_s("%d", &total);

    to_hms(total, &h, &m, &s);

    printf("%dhour %dminute %dsecond\n", h, m, s);

    return 0;
}