/*����7-14��ʮ�������ַ���ת����ʮ���ƷǸ�����������һ����'#'Ϊ������־���ַ���������10���ַ�����
 * ��ȥ���еķ�ʮ�������ַ������ִ�Сд�������һ���µı�ʾʮ���������ֵ��ַ�����������ַ���������ת��Ϊʮ�������������
*/

/* ʮ�������ַ���ת����ʮ���ƷǸ����� */
# include <stdio.h>

# define MAXLINE 80            /* ������ų���MAXLINE */

int main() {
    int i, k, number;
    char hexad[MAXLINE], str[MAXLINE];

    /* �����ַ��� */
    printf("Enter a string: ");         /* ��ʾ�����ַ��� */

    i = 0;
    while ((str[i] = getchar()) != '#') {     /* ���������Ϊ '#' */
        i++;
    }
    str[i] = '\0';                            /* ���ַ��������� '\0' ��������str */

    /*��ȥ��ʮ�������ַ����������ַ���hexad */
    i = 0;
    k = 0;                     /* k�����ַ���hexad���±� */

    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')) {
            hexad[k] = str[i];       /* ��ʮ�������ַ��������ַ��� */
            k++;
        }
        i++;
    }

    hexad[k] = '\0';                  /* ���ַ���������� */

    /* ���ʮ���������ַ��� */
    printf("New string: ");
    for (i = 0; hexad[i] != '\0'; i++) {
        putchar(hexad[i]);
    }
    printf("\n");

    /* ת��Ϊʮ�������� */
    number = 0;                                     /* ���ʮ������������0 */
    for (i = 0; hexad[i] != '\0'; i++) {            /* ���ת�� */
        if (hexad[i] >= '0' && hexad[i] <= '9') {
            number = number * 16 + hexad[i] - '0';
        } else if (hexad[i] >= 'A' && hexad[i] <= 'F') {
            number = number * 16 + hexad[i] - 'A' + 10;
        } else if (hexad[i] >= 'a' && hexad[i] <= 'f') {
            number = number * 16 + hexad[i] - 'a' + 10;
        }
    }

    printf("Number = %d\n", number);   /* ���ʮ����ֵ */

    return 0;
}