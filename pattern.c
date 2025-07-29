#include <stdio.h>

int main() {
int row, r, c;

printf("Enter number of rows: ");
scanf("%d", &row);

for (r = 0; r < row; r++) {
    for (c = row - r; c > 1; c--)
        printf(" ");

        for (c = 0; c <= r; c++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
