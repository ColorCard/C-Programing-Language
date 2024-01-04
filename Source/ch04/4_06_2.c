/*【例4-6-2】猜数游戏。改进例3-1简单的猜数游戏，输入你所猜的正整数（假定1~100内），与计算机随机产生的被猜数比较，若相等，显示猜中；若不等，显示与被猜数的大小关系，最多允许猜7次。
*/

/* 猜数游戏 2*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void) {
    int count = 0, flag, mynumber, yournumber;

    printf("Enter my number: "); /* 提示输入要猜的整数 */
    scanf("%d", &mynumber);
    flag = 0;                       /* flag的值为0表示没猜中，为1表示猜中了*/

    while (count < 7) {             /* 最多能猜7次 */
        printf("Enter your number: "); /* 提示输入你所猜的整数 */
        scanf("%d", &yournumber);
        count++;
        if (yournumber == mynumber) {         /* 若相等，显示猜中 */
            printf("Lucky You!\n");
            flag = 1;
            break;                            /* 已猜中，终止循环 */
        } else if (yournumber > mynumber) {
            printf("Too big\n");
        } else {
            printf("Too small\n");
        }
    }

    if (flag == 0) {                        /* 超过7次还没猜中，提示游戏结束 */
        printf("Game Over!\n");
    }

    return 0;
}