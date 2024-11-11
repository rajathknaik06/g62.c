/*In a digital game, players input a number to unlock levels. Develop a program using logical operators that takes an integer as input and checks whether it satisfies the specified conditions to unlock the next level.



The number must be greater than or equal to 10.
The number must be less than or equal to 100.
The number must not be divisible by 7.


Implement a program to notify players of their eligibility to unlock the next game level.

Input format :
The input consists of an integer n, representing the player's entered number.

Output format :
The output displays "Unlock Next Level" if the input meets the conditions; otherwise, it prints "Level Locked".*/


#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    printf("%s\n", (number >= 10 && number <= 100 && number % 7 != 0) ? "Unlock Next Level" : "Level Locked");
    return 0;
}

