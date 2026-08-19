#include <stdio.h>

int main()
{
    int marks[4];                                                  // Array to store marks for 4 subjects
    char grade[4][3]; //this is string arry where syntex is arr_name[each_string_size][number_of_string]
    float gpa[4];                                                  // Array to store GPA for each subject
    float totalGPA = 0.0;                                          // Variable to calculate total GPA
    int anyFail = 0;                                               // Flag to check if any subject has GPA 0.0
    const char *subjects[4] = {"Bangla", "English","Math", "ICT"}; // Array of subject names

    // Input marks for each subject with validation
    for (int i = 0; i < 4; i++)
    {
        do
        {
            printf("Enter marks for %s : ", subjects[i]);
            scanf("%d", &marks[i]);

            if (marks[i] < 0 || marks[i] > 100)
            {
                printf("Invalid marks! Please enter a value between 0 and 100.\n");
            }
        } while (marks[i] < 0 || marks[i] > 100); // Repeat until valid input
    }

    // Calculate GPA and assign grade for each subject
    for (int i = 0; i < 4; i++)
    {
        if (marks[i] >= 80)
        {
            sprintf(grade[i], "A+");
            gpa[i] = 5.0;
        }
        else if (marks[i] >= 70)
        {
            sprintf(grade[i], "A");
            gpa[i] = 4.0;
        }
        else if (marks[i] >= 60)
        {
            sprintf(grade[i], "A-");
            gpa[i] = 3.5;
        }
        else if (marks[i] >= 50)
        {
            sprintf(grade[i], "B");
            gpa[i] = 3.0;
        }
        else if (marks[i] >= 40)
        {
            sprintf(grade[i], "C");
            gpa[i] = 2.0;
        }
        else if (marks[i] >= 33)
        {
            sprintf(grade[i], "D");
            gpa[i] = 1.0;
        }
        else
        {
            sprintf(grade[i], "F");
            gpa[i] = 0.0;
            anyFail = 1; // Set flag if any subject GPA is 0.0
        }
        totalGPA += gpa[i]; // Sum the GPA for calculating the average
    }

    // Calculate and determine the average GPA
    float averageGPA;
    if (anyFail == 1)
    {
        averageGPA = 0.0;
    }
    else
    {
        averageGPA = totalGPA / 4;
    }

    // Determine average grade based on average GPA
    char averageGrade[3];
    if (averageGPA >= 5.0)
    {
        sprintf(averageGrade, "A+");
    }
    else if (averageGPA >= 4.0)
    {
        sprintf(averageGrade, "A");
    }
    else if (averageGPA >= 3.5)
    {
        sprintf(averageGrade, "A-");
    }
    else if (averageGPA >= 3.0)
    {
        sprintf(averageGrade, "B");
    }
    else if (averageGPA >= 2.0)
    {
        sprintf(averageGrade, "C");
    }
    else if (averageGPA >= 1.0)
    {
        sprintf(averageGrade, "D");
    }
    else
    {
        sprintf(averageGrade, "F");
    }

    // Output the grade and GPA for each subject
    printf("\n");

    printf("Result of each subject. \n \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s: Grade: %s, GPA: %.1f\n", subjects[i], grade[i], gpa[i]);
    }

    // Output the average GPA and average grade
    printf("\n");
    if (anyFail == 1)
    {
        printf("Total GPA: 0.00 (due to failure in one or more subjects)\n");
    }
    else
    {
        printf("Total GPA: %.2f \n", averageGPA);
    }
    printf("Total Grade: %s\n", averageGrade);

    return 0;
}
