#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int omikuzi;

    printf("あなたの今日の運勢を占います\n");
    srand(time(NULL));
    omikuzi = rand() % 6;
    if (omikuzi == 0)
    {
        printf("あなたの今日の運勢は大凶です\n");
    }
    if (omikuzi == 1)
    {
        printf("あなたの今日の運勢は凶です\n");
    }
    if (omikuzi == 2)
    {
        printf("あなたの今日の運勢は吉です\n");
    }
    if (omikuzi == 3)
    {
        printf("あなたの今日の運勢は小吉です\n");
    }
    if (omikuzi == 4)
    {
        printf("あなたの今日の運勢は中吉です\n");
    }
    if (omikuzi == 5)
    {
        printf("あなたの今日の運勢は大吉です\n");
    }
    printf("⊂二二二(　＾ω＾)二二⊃ﾌﾞｰﾝ\n");
    return 0;
}