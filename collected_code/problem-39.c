#include <stdio.h>
#include <stdbool.h>

bool canRearrangeAdjacentDifferent(char* str) {
    int count[26] = {0};
    int len = 0;
    
    while (str[len] != '\0') {
        count[str[len] - 'a']++;
        len++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] > (len + 1) / 2) {
            return false;
        }
    }
    
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (canRearrangeAdjacentDifferent(str)) {
        printf("The letters of the given string can be rearranged so that two adjacent characters are different.\n");
    } else {
        printf("The letters of the given string cannot be rearranged to satisfy the condition.\n");
    }
    
    return 0;
}