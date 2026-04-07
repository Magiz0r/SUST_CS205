#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void calculator1(char* operand[]) {
    int a = atoi(operand[1]);
    int b = atoi(operand[3]);

    switch (*operand[2]) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case 'x':
            printf("%d x %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (atoi(operand[3]) == 0) {
                printf("A number cannot be divided by zero\n");
                break;
            } else {
            printf("%d / %d = %f\n", a, b, (float)a / b);
            break;
            }
    }
}

void calculator2() {
    int a;
    int b;
    char c[10];
    scanf("%d %s %d", &a, &c[0], &b);
    if (strcmp(c, "+") == 0) {
        printf("%d", a + b);
    } else if (strcmp(c, "-") == 0) {
        printf("%d", a - b);
    } else if (strcmp(c, "/") == 0) {
        printf("%f", (float)a / b);
    } else if (strcmp(c, "x") == 0) {
        printf("%d", a * b);
    }
}


int main(int argc, char* argv[]) {
    if (argc == 1) {
        calculator2();
        return 0;
    }
    calculator1(argv);
    return 0;
}