#include<iostream>
#include<string>
using namespace std;

float averageMarks(int *, int );

void acceptMarks(int *marks, int num_subjects)
{
    for(int i = 0; i < num_subjects; i++)
    {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
    }
}

void displayMarks(int *marks, int num_subjects)
{
    cout << "Marks obtained in each subject:\n";
    for(int i = 0; i < num_subjects; i++)
    {
        cout << "Subject " << (i + 1) << ": " << marks[i] << "\n";
    }
    cout << "Total Marks: ";
    int total = 0;
    for(int i = 0; i < num_subjects; i++)
    {
        total += marks[i];
    }
    cout << total << "\n";
    cout << "Average Marks: " << averageMarks(marks, num_subjects) << "\n";
}

float averageMarks(int *marks, int num_subjects)
{
    int total = 0;
    for(int i = 0; i < num_subjects; i++)
    {
        total += marks[i];
    }
    return static_cast<float>(total) / num_subjects;
}

int main()
{
    int num_subjects = 0;
    string student_name;
    cout << "Enter the student's name: ";
    getline(cin, student_name);
    cout << "Enter the number of subjects: ";
    cin >> num_subjects;
    
    int *marks = new int[num_subjects];
    acceptMarks(marks, num_subjects);
    displayMarks(marks, num_subjects);
    delete[] marks;
    return 0;

}