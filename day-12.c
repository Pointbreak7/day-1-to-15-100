//Write a program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Cancelled.
#include <stdio.h>

int main() {
    int late_days, fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 0) {
        printf("No fine.\n");
    } else if (late_days <= 5) {
        fine = late_days * 2;
        printf("Fine: ₹%d\n", fine);
    } else if (late_days <= 10) {
        fine = 5 * 2 + (late_days - 5) * 4;
        printf("Fine: ₹%d\n", fine);
    } else if (late_days <= 30) {
        fine = 5 * 2 + 5 * 4 + (late_days - 10) * 6;
        printf("Fine: ₹%d\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }
    return 0;
}

//Write a program to calculate electricity bill based on units consumed with these rates:
//First 100 units at ₹5/unit
//Next 100 units at ₹7/unit
//Next 100 units at ₹10/unit
//Above at ₹12/unit
int units, bill = 0;
printf("Enter number of units consumed: ");
scanf("%d", &units);

if (units <= 0) {
    printf("No bill.\n");
} else if (units <= 100) {
    bill = units * 5;
    printf("Bill: ₹%d\n", bill);
} else if (units <= 200) {
    bill = 100 * 5 + (units - 100) * 7;
    printf("Bill: ₹%d\n", bill);
} else if (units <= 300) {
    bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    printf("Bill: ₹%d\n", bill);
} else {
    bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    printf("Bill: ₹%d\n", bill);
}