#include<stdio.h>
#include<conio.h>

int *findMax(int *x, int *y)
{
    if(*x > *y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Maximum of %d and %d is %d\n", a, b, *findMax(&a, &b));
    getch();
    return 0;
}