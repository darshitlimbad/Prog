#include <stdio.h>

int main() {
    int numRows, numCols, space;

    printf("Enter the number of pyramids in the row: ");
    scanf("%d", &numRows);

    for (int i = 1; i <= numRows; i++) {
        // Print spaces before each pyramid
        for (space = 1; space <= numRows - i; space++) {
            printf("  ");
        }

        // Print left half of the pyramid
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        // Print right half of the pyramid
	for (
	j = i - 1; j >= 1; j--) {
            printf("* ");
        }

        // Move to the next line for the next pyramid
        printf("\n");
    }

    return 0;
}
