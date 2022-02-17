/*****************************************************************************************
*
*  Name: William B. Kennedy
*  Course: CSE1233-03
*  Filename: wbk48_prog4.c
*
*  Program description:
*     A program that will calculate a student's quiz average.
*
*
******************************************************************************************/



//a program to calculate quiz average
#include <stdio.h>

int main()

{
    int numQuiz = 0;
    int i = 0;
    float grade = 0;
    float sum = 0;
    float average = 0;


    printf("Enter the number of quizzes: ");
    scanf("%d", &numQuiz);

    for(i = 1; i <= numQuiz; i++)
    {
        printf("Enter your grade for Quiz %d: ", i);
        scanf("%f", grade);
        sum = sum + grade;
    }

    average = sum / numQuiz;
    printf("Your quiz average is: %f", average);
}
