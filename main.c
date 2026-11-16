#include <stdio.h>

/* 累積値を保持して返す関数 */
int calculate_sum(int value)
{
    /* static変数は関数終了後も値を保持する */
    static int total = 0;

    total += value;

    return total;
}

int main(void)
{
    int input_number;
    int answer = 0;

    scanf("%d", &input_number);

    if (input_number < 1 || input_number > 10)
    {
        printf("NG");
        return 0;
    }

    /* 2, 4, 6, ... , 2n を順に加算する */
    for (int current_number = 1; current_number <= input_number; current_number++)
    {
        answer = calculate_sum(current_number * 2);
    }

    printf("%d", answer);

    return 0;
}
