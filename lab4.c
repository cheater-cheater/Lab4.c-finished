// Charles M. Heater
// Febuary 4th, 2025
// Lab section 004
// Lab 4
// Calculates BMI

#include <stdio.h>

int main() {
    int weight;
    int height;
    int bmi;
    int repeat = 1;

    printf("\n\n               bmi Calculator \n\n");   // 15 spaces
    printf("Body Mass Index (bmi) is a ratio of weight to height.\n\n");
    printf("Keep in mind that muscle weighs more than fat, so bmi is \n"
           "not always the best metric of a healthy weight.\n\n\n");

    while (repeat != 0) {

        printf("Enter your weight in pounds (as an integer): ");
        scanf("%d", &weight);

        printf("Enter your height in inches (as an integer): \n");
        scanf("%d", &height);

        bmi = (weight * 703) / (height * height);
        printf("Your bmi is %d.\n", bmi);

        printf("- - - - - - - - - - - - - - - - - - - - - "
           "- - - - - - - - - - - -\n\n");
       	 do {
            printf("Enter 1 to go again or 0 to quit: ");
            scanf("%d", &repeat);
        } while (repeat != 0 && repeat != 1);  // Only allow 0 or 1
        printf("\n");
    }

    return 0;
}