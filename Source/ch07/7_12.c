/*����7-12�� Ϊ�˷�ֹ��Ϣ������������ȡ����Ҫ�ѵ�������ͨ�����ܷ�ʽ�任��Ϊ���ġ�����һ���Իس���Ϊ������־���ַ���������80���ַ�����������һ��������offset���ÿ������뽫����ܺ��������������ļ��ܹ����ǽ������е�������ĸ������ĸ��������ƶ�offsetλ���������ġ�
*/

/* ����������ܣ���ƫ�ƣ� */
# include<stdio.h>

# define MAXN 80         /* ������ų���MAXN */
# define M 26            /* ������ų���M����ʾ��ĸ���д�д����Сд��ĸ������26 */

int main() {
    int i, offset;
    char str[MAXN];

    /* �����ַ��� */
    printf("Enter a string: ");    /* ��ʾ�����ַ��� */
    i = 0;
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    str[i] = '\0';                /* �������� '\0' �������� */

    printf("Enter offset: ");        /* ��ʾ����offset */
    scanf("%d", &offset);
    if (offset > M) {            /* ���offset����26 */
        offset = offset % M;    /* ��λЧ���൱��ȡ������ */
    }
    /* ���� */
    for (i = 0; str[i] != '\0'; i++) {    /* ѭ��������str[i] ������ '\0' */
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if ((str[i] - 'A' + offset) < M) {
                str[i] = str[i] + offset;
            } else {                                    /* ������Խ�� */
                str[i] = str[i] - (M - offset);    /* ѭ����λ */
            }
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            if ((str[i] - 'a' + offset) < M) {
                str[i] = str[i] + offset;
            } else {                                    /* ������Խ�� */
                str[i] = str[i] - (M - offset);    /* ѭ����λ */
            }
        }
    }
    /* ��������ַ��� */
    printf("After being encrypted: ");
    for (i = 0; str[i] != '\0'; i++) {    /* ѭ��������str[i] ������ '\0' */
        putchar(str[i]);
    }


    return 0;
}