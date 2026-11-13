#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3] = {
        {1, "Amit", 85.5},
        {2, "Rahul", 90.0},
        {3, "Priya", 88.5}
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("my name is rifa khan\n");
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
