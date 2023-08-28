#include <stdio.h>

void printSeason(int month, int day) {
    if ((month == 12 && day >= 21) || (month <= 3)) {
        printf("Winter\n");
    } else if (month >= 4 && month <= 6) {
        printf("Spring\n");
    } else if (month >= 7 && month <= 9) {
        printf("Summer\n");
    } else {
        printf("Fall\n");
    }
}

int main() {
    int month, day;
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the day (1-31): ");
    scanf("%d", &day);

    printSeason(month, day);

    return 0;
}