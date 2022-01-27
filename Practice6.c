// Question: Write a program to find out whether a student passed or failed if it requires a total of 40% and at least 33% in each subject to pass. Assume three subjects, of a maximum of 100 marks each, and take marks as input from the user.

#include <stdio.h>
int main()
{
    int math, science, computer;
    float total;

    printf("Enter your marks for Math: ");
    scanf("%d", &math);

    printf("\nEnter your marks for Science: ");
    scanf("%d", &science);

    printf("\nEnter your marks for Computer: ");
    scanf("%d", &computer);

    total = (math + science + computer) / 3;
    if (total < 40 || math < 33 || science < 33 || computer < 33)
    {
        printf("\nYou have an equivalent percentage of %0.2f or/and 
                  you have secured less than 33 percent in 
                  either/all of Math, Science or/and Computer. Well 
                  Tried!!\n", total);
    }
    else
    {
        printf("\nYou have an equivalent percentage of %0.2f. Keep 
                 it up!\n", total);
    }
    return 0;
}