//Write your code in this file

#include <stdio.h>
#include <ctype.h>

#define ROWS 5
#define NUMBERS 13
#define NAME_SIZE 100

int main(void) {
    char names[ROWS][NAME_SIZE];
    int number;
    double totalMean;
    double personMean[ROWS];
    int totalSum = 0;
    int highScore = 0;
    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0;
        int rowMean = 0;
        scanf("%99s", names[i]);
        names[i][0] = toupper(names[i][0]);
        for (int j = 0; j < NUMBERS; j++) {
            scanf("%d", &number);
            rowSum += number;
        }
        rowMean = rowSum/NUMBERS;
        personMean[i] = rowMean;
        totalSum += rowSum;

    }

    totalMean = totalSum/(ROWS * NUMBERS);

    for (int y = 0; y < ROWS-1; y++) {
        if (personMean[y] > personMean[y+1]) {
            highScore = y;
        }
    }
    printf("%s\n", names[highScore]);
    for (int k = 0; k < ROWS; k++)
    {
        
        if (personMean[k] < totalMean) {
            names[k][0] = toupper(names[k][0]);
            printf("%s\n", names[k]);
        }
        
        
    }
    
    
}
