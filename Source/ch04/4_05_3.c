/*【例4-5-3】判断一个整数是否为素数。输入一个整数m，判断它是否为素数。
 * 素数就是只能被1和自身整除的正整数，1不是素数，2是素数 */

/* 判断整数m是否为素数-3 */
# include <stdio.h>
# include <math.h>

int main() {
    int i, is_prime, limit, m;  /* is_prime的值表示是否为素数 */

    printf("Enter a number: "); /* 输入提示 */
    scanf("%d", &m);

    if (m <= 1) {               /* 小于等于1的数不是素数，is_prime置为0*/
        is_prime = 0;
    } else if (m == 2) {        /* 2是素数，is_prime置为1 */
        is_prime = 1;
    } else if (m % 2 == 0) {    /* 2以外的偶数都不是素数，is_prime置为0 */
        is_prime = 0;
    } else {                    /* 其他情况先假设是素数，is_prime初值置为1 */
        is_prime = 1;
        limit = sqrt(m) + 1;
        for (i = 3; i <= limit; i += 2) { /* 第21行 */
            if (m % i == 0) {
                is_prime = 0;       /* 若m能被某个i整除，则m不是素数，is_prime置为0 */
                break;              /* 提前结束循环 */
            }
        }
    }

    /* 若循环正常结束，说明m不能被任何一个i整除，则is_prime的值为1不变 */
    if (is_prime == 1) {          /* m是素数 */
        printf("%d is a prime number!\n", m);
    } else {                      /* m不是素数 */
        printf("No!\n");
    }

    return 0;
}