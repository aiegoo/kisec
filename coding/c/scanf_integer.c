#include <stdio.h>

int main(void) {
    float num1, num2;
    double num3, num4;

    // First prompt and input
    printf("�ΰ��� �Ǽ��� �Է��ϼ��� (enter two floats): ");
    scanf("%f %f", &num1, &num2);
    printf("�Է��Ͻ� �� �Ǽ��� %f, %f �Դϴ�.\n", num1, num2);
    printf("�Է� ���� �� �Ǽ� �� �ι�°�� double�� �������� ���� �ٸ����� ����Ǿ����ϴ�.\n");

    // Clear the input buffer
    while (getchar() != '\n');

    // Second prompt and input
    printf("�ٽ��ѹ� �ΰ��� �Ǽ��� �Է��ϼ���: ");
    scanf("%f %lf", &num1, &num2);
    printf("�Է��Ͻ� �� �Ǽ��� %f, %f �Դϴ�.\n", num3, num4);
    printf("�̹����� �� �Ǽ� ��� ����� ����Ǿ����ϴ�.\n");

    return 0;
}