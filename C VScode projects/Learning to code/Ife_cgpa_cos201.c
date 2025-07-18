
#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main()
{

    int CourseNum;
    int course_credits;
    int total_credits;
    char letter_grade;
    int grade_point;

    // letter_grade = toupper(letter_grade);


    printf("Enter number of courses: ");
    scanf("%d", &CourseNum);

    printf("Enter total credit-units for semester: \n");
    scanf("%d", &total_credits);

    // printf("");

    for(int i = 1; i <= CourseNum; i++)
    {
        printf("Enter credits for course %d: ", i);
        scanf("%d", &course_credits);

        scanf("%c", &letter_grade);

        printf("Enter letter grade for course %d: ", i);
        scanf("%c", &letter_grade);

        letter_grade = toupper(letter_grade);

        if(letter_grade == 'A'){
        grade_point = 5;
        }
        else if(letter_grade == 'B'){
        grade_point = 4;
        }
        else if(letter_grade == 'C'){
        grade_point = 3;
        }
        else if(letter_grade == 'D'){
        grade_point = 2;
        }
        else if(letter_grade == 'E'){
        grade_point = 1;
        }
        else if(letter_grade == 'F'){
        grade_point = 0;
        }

        int quality_points = grade_point * course_credits;
        // grade(letter_grade, grade_point);
        // printf("%d", quality_points);

        printf("\n");
    }


    return 0;
}