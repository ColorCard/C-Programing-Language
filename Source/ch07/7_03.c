/*����7-3��˳����ҷ����������n��������������a�У�������1������x��Ȼ��������a�в��Ҹ�����x��
 * �������a�е�Ԫ����x��ֵ��ͬ�������������������Ԫ�ص��±꣨�±��0��ʼ�������û���ҵ������"Not Found"��*/

/* �������в��������������������� */
# include <stdio.h>

# define MAXN 10

int main() {
    int i, flag, n, x;
    int a[MAXN];

    printf("Enter n, x: ");                 /* ��ʾ����n��x */
    scanf("%d%d", &n, &x);

    printf("Enter %d integers: ", n);       /* ��ʾ����n���� */
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* ������a�в���x */
    flag = 0;                                 /* �ȼ���x��������a�У���flagΪ0 */

    for (i = 0; i < n; i++) {
        if (a[i] == x) {                           /* ���������a���ҵ���x */
            printf("Index is %d\n", i);     /* �����Ӧ���±� */
            flag = 1;                              /* ��flagΪ1��˵��������a���ҵ���x */
        }
    }

    if (flag == 0) {                               /* ���flagΪ0��˵��x����a�� */
        printf("Not Found\n");
    }

    return 0;
}