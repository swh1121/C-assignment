#include <stdio.h>

void print_prices(int* price, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", price[i]);
    }
    printf("\n");
}

void apply_discount(int* price, int n, int percent)
{
    int i;

    for (i = 0; i < n; i++)
    {
        price[i] = price[i] * (100 - percent) / 100;
    }
}

int main()
{
    int price[5] = { 12000, 8500, 3000, 45000, 990 };
    int percent;

    printf("discount percentage(%%) : ");
    scanf_s("%d", &percent);

    printf("before discount : ");
    print_prices(price, 5);

    apply_discount(price, 5, percent);

    printf("after discount : ");
    print_prices(price, 5);

    return 0;
}