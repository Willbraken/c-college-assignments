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
    printf("\n");

    for(i = 1; i <= numQuiz; i++)
    {
        printf("Enter your grade for Quiz %d: ", i);
        scanf("%f", &grade);
        sum = sum + grade;
        printf("\n");
    }

    average = sum / numQuiz;
    printf("Your quiz average is: %f,  ", average);

    if(average >= 90)
        printf("A");
    if(average >= 80 && average < 90)
        printf("B");
    if(average >= 70 && average < 80)
        printf("C");
    if(average >= 60 && average < 70)
        printf("D");
    else if(average < 60)
        printf("F");

printf(" \n\n");
}
