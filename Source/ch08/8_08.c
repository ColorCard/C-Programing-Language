/* ����8-8������һ������С��80���ַ�������������ַ�������ѹ�������ѹ������ַ�����
 * ѹ�������ǣ����ĳ���ַ�x��������n��n>1����������n���ַ��滻Ϊ"nx"����ʽ�����򱣳ֲ��䡣 */

/* �ַ���ѹ�� */
#include <stdio.h>

#define MAXLINE 80

void zip(char *p);

int main() {
    char line[MAXLINE];

    printf("Input the string: ");
    gets(line);

    zip(line);

    puts(line);

    return 0;
}

void zip(char *p) {
    char *q = p;
    int n;

    while (*p != '\0') {
        n = 1;

        while (*p == *(p + n)) {      /* ͳ�������ظ��ַ����� */
            n++;
        }

        if (n >= 10) {                /* ��nת��Ϊ�ַ� */
            *q++ = (n / 10) + '0';
            *q++ = (n % 10) + '0';
        } else if (n >= 2) {
            *q++ = n + '0';
        }

        *q++ = *(p + n - 1);         /* �����ظ��ַ� */
        p = p + n;                   /* ָ��p�ƶ�����һ�����ַ� */
    }
    *q = '\0';                       /* �����ַ���������־ */
}