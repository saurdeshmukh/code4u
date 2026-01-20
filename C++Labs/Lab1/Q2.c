#include<stdio.h>
#include<conio.h>
void AreaCircum(int radious, float *area, float *circumference)
{
    const float PI = 3.14159;
    *area = PI * radious * radious;
    *circumference = 2 * PI * radious;
}   

int main()
{
    int radious;
    float area, circumference;
    printf("Enter the radious of the circle: ");
    scanf("%d", &radious);
    AreaCircum(radious, &area, &circumference);
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    getch();
    return 0;
}