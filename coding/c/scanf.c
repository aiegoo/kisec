#include <stdio.h>

int main(void) {
    int number;

    printf("숫자를 입력하시오: "); // Prompt the user to enter a number
    scanf("%d", &number);          // Read the entered number

    printf("입력하신 숫자는 %d 입니다.\n", number); // Print the entered number

    return 0;
}