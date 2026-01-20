#include<stdio.h>
#include<conio.h>

int main()
{
    int num_terms = 0;
    int a = 0;
    int b = 1;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num_terms);
    printf("Fibonacci Series:\n");
    for(int i = 0; i < num_terms; i++)  
    {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    getch();
    return 0;
}