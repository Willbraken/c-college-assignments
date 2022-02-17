/*****************************************************************************************
*
*  Name: William B. Kennedy
*  Course: CSE1233-03
*  Filename: wbk48_prog2.c
*
*  Program description:
*     A program that will calculate my final grade in this class
*
*
******************************************************************************************/



//a program to calculate final grade
#include <stdio.h>

int main()

{
    float fAssignments = 0;
    float fTests = 0;
    float fFinal = 0;
    float fQuizzes = 0;
    float final_grade = 0;
    float fAssignment2 = 0;

    printf("Enter your programming assignment average: ");
    scanf("%f", &fAssignments);

    printf("Enter your test average: ");
    scanf("%f", &fTests);

    printf("Enter your quiz average: ");
    scanf("%f", &fQuizzes);

    printf("Enter your final exam grade: ");
    scanf("%f", &fFinal);

    printf("enter assignment 2 average: ");
    scanf("%f", &fAssignment2);


    //calculate final grade
    final_grade  = .45*fTests + .20*fAssignments + .15*fQuizzes + .10*fFinal + .10f*fAssignment2;
    //print grade
    printf("Your grade is: %f\n", final_grade);

}
