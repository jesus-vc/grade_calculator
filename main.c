//
//  main.c
//  grade_calculator
//
//  Created by Jesus Vasquez-Cipriano on 9/19/20.
//  Copyright © 2020 Jesus Vasquez-Cipriano. All rights reserved.
//
/* ********************************************
 * SUMMARY
 * Function: int main()
 * Input: User inputs scores from 3 assignments, 1 midterm, and 1 final.
 * Output: Returns 0 on success.
 * Procedure: Calculates and prints the total weighted score based on inputted scores. Error occurs when inputs are not integers.
 ******************************************* */

#include <stdio.h>

int main() {
    
    /* Constants assigned based on the current weight of scores: Assignment is 40%, Midterm is 30%, and Final is 40%. */
    int score1 = 0, score2 = 0, score3 = 0, midterm = 0, final = 0;
    float assignment_average = 0, total_weighted_score = 0;
    const float assignment_weight = .40;
    const float midterm_weight = .30;
    const float final_weight = .40;
    
    puts("\nI'm a program within this computer that will calculate your final weighted score based on your scores from your 3 Assignments, 1 Midterm, and 1 Final. My stomach (database) is hungry and my Central Processing Unit wishes to compute. So, feed me data.");
    puts("\n\nTo do so, I require you to input your scores individually.\n\nCAUTION: ONLY input scores as a single whole number, such as 66, 80, and 99. NO decimal points. Otherwise, I can't help you!");
   
    /* CAUTION: User inputting non-integer datatypes produces errors. */
    printf("\nFirst, give me your score from Assignment 1: ");
    scanf("%d",&score1);
    printf("Second, give me your score from Assignment 2: ");
    scanf("%d",&score2);
    printf("Third, give me your score from Assignment 3: ");
    scanf("%d",&score3);
    printf("Now, give me your score from the Midterm: ");
    scanf("%d",&midterm);
    printf("Finally, give me your score from the Final: ");
    scanf("%d",&final);
 
    assignment_average = (score1 + score2 + score3)/3.0;
    total_weighted_score = (assignment_average * assignment_weight) + (midterm * midterm_weight) + (final * final_weight);
    
    /* Placeholder for Future Debugging:
     Printf statments below may help with future troubleshooting when adjusting the above formula.
     printf("\n\nYour assignment average is: %lf\n",assignment_average);
     printf("\nThe weight of your 3 assignments is: %lf\n",weighted_assignments);
     printf("The weight of your midterm is: %lf\n",weighted_midterm);
     printf("The weight of your final is: %lf\n",weighted_final); */
    
    printf("\n\nYour final score is: %.2lf%%\n",total_weighted_score);
    puts("\nMy stomach is full now. Hope I helped. Goodbye!");
    
    return(0);
}
