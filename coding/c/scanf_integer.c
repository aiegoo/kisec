#include <stdio.h>

int main(void) {
    float num1, num2;
    double num3, num4;

    // First prompt and input
    printf("두개의 실수를 입력하세요 (enter two floats): ");
    scanf("%f %f", &num1, &num2);
    printf("입력하신 두 실수는 %f, %f 입니다.\n", num1, num2);
    printf("입력 받은 두 실수 중 두번째는 double형 변수에는 전혀 다른것이 저장되었습니다.\n");

    // Clear the input buffer
    while (getchar() != '\n');

    // Second prompt and input
    printf("다시한번 두개의 실수를 입력하세요: ");
    scanf("%f %lf", &num1, &num2);
    printf("입력하신 두 실수는 %f, %f 입니다.\n", num3, num4);
    printf("이번에는 두 실수 모두 제대로 저장되었습니다.\n");

    return 0;
}