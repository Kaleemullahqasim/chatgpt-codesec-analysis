#include <stdio.h>

void separateAndPrintNumbers(char* string) {
    int count = 0;
    
    for (int i = 0; string[i] != '\0'; i++) {
        if (isdigit(string[i])) {
            printf("Number: %c, Position: %d\n", string[i], i);
            count++;
        }
    }
    
    printf("Total numbers found: %d\n", count);
}

int main() {
    char string[] = "ab12cd34ef56";
    
    separateAndPrintNumbers(string);
    
    return 0;
}