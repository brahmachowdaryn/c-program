#include <stdio.h>

int main() {
    int rows, num = 1;

    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    printf("Floyd's Triangle:\n");

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

