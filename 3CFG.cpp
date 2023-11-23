#include <stdio.h>
#include <stdbool.h>
bool isS(char *str);
bool isA(char *str);
bool isS(char *str) {
    if (*str == '0') {
        str++;
        if (isA(str)) {
            if (*str == '1') {
                str++;
                return (*str == '\0'); 
            }
        }
    }
    return false;
}
bool isA(char *str) {
    if (*str == '0') {
        str++;
        return isA(str);
    } else if (*str == '1') {
        str++;
        return isA(str);
    } else {
        return true;
    }
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (isS(input)) {
        printf("The string '%s' belongs to the language defined by the CFG.\n", input);
    } else {
        printf("The string '%s' does not belong to the language defined by the CFG.\n", input);
    }
    return 0;
}

