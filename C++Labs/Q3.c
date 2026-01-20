#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int num_subjects = 0;

void accept(float *marks) //, int num_subjects)
{
    for(int i = 0; i < num_subjects; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
}   

float calculateTotal(float *marks) //, int num_subjects)
{
    float total = 0.0;
    for(int i = 0; i < num_subjects; i++)
    {
        total += marks[i];
    }
    return total;
}
 float calculateAverage(float *marks) //, int num_subjects)
{
    float total = calculateTotal(marks); //, num_subjects);
    return total / num_subjects;
}
void display(float *marks) //, int num_subjects)
{
    printf("Marks obtained in each subject:\n");
    for(int i = 0; i < num_subjects; i++)
    {
        printf("Subject %d: %.2f\n", i + 1, marks[i]);
    }

    printf("Total Marks: %.2f\n", calculateTotal(marks)); // , num_subjects));
    printf("Average Marks: %.2f\n", calculateAverage(marks)); //, num_subjects));
}



int main()
{
    
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);
    printf("Number of subjects: %d\n", num_subjects);

    float *marks = (float *)malloc(num_subjects * sizeof(float));
    accept(marks); //, num_subjects);
    display(marks); //, num_subjects);
    free(marks);

    getch();
    return 0;
}