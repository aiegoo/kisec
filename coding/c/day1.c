#include <stdio.h>


int main(void) {
    printf("줄 바꿈, World!\n");       // 줄 바꿈 (Newline)
    printf("수평 탭, \tWorld!\n");     // 수평 탭 (Horizontal tab)
    printf("백스페이스, \bWorld!\n");     // 백스페이스 (Backspace)
    printf("백슬래시, \\World!\n");     // 백슬래시 (Backslash)
    printf("큰따옴표, \"World!\"\n");   // 큰따옴표 (Double quote)
    printf("작은따옴표, \'World!\'\n");   // 작은따옴표 (Single quote)
    printf("백틱, \`World!\`\n");   // 백틱 (Backtick) (Note: Backtick is not an escape character, but included for demonstration)
    printf("경고음, \aWorld!\n");     // 경고음 (Alert bell)
    printf("캐리지 리턴, \rWorld!\n");     // 캐리지 리턴 (Carriage return)
    printf("폼 피드, \fWorld!\n");     // 폼 피드 (Form feed)

    return 0;
}