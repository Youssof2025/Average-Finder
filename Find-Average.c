#include <stdio.h>

/* The average of any chosen amounts of numbers */

int main(void) {
    
    const int Max_Amount_of_Numbers = 2; //The total amount of numbers - Enter your own

    //The Average and how many numbers there are
    int Average[Max_Amount_of_Numbers] = {55, 32}; //Enter your own numbers to average out
    double sum = 0.0; //This will help calculating the average
    int i;

    printf("\nCurrent Numbers:\n");

    //Writing out the data (Not very important)
    for (i = 0; i < Max_Amount_of_Numbers; i++)
        printf("%d\t", Average[i]);

    printf("\n\n");

    //Calculating the average
    for (i = 0; i < Max_Amount_of_Numbers; i++)
        sum = sum + Average[i];
    
    printf("The Average is %.2f\n\n", sum/Max_Amount_of_Numbers); //Printing out the average to the user

    return 0;
}