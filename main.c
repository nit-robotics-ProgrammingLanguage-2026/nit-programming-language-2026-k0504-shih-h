#include <stdio.h>
int main(void)
{
    int input_number;
    // 判定する整数を入力する
    scanf("%d",&input_number);
    // 0以上10未満、または12以上15未満ならOKと表示する
    if ((input_number >= 0 && input_number < 10)||(input_number >= 12 && input_number < 15))
    {
        printf("OK\n");
    }else {
        printf("NG\n");
    }
    return 0;
}
