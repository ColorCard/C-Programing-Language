/*����7-4-2������һ��������n (1��n��10)��������n�������������Ǵ�������a�С�
�� �����Сֵ��������Ӧ����С�±ꡣ
�� ����Сֵ���һ��������������������n������*/

/* ���������Сֵ���һ�������� */
# include <stdio.h>

# define MAXN 10                    /* ������ų���MAXN */

int main() {
    int i, index, n;
    int a[MAXN];

    printf("Enter n: ");                 /* ��ʾ����n */
    scanf("%d", &n);
    printf("Enter %d integers: ", n);    /* ��ʾ����n ���� */

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* ����Сֵa[index] */
    index = 0;                    /* ����a[0]����Сֵ�����±�Ϊ0��Ԫ����С */
    for (i = 1; i < n; i++) {
        if (a[i] < a[index]) {    /* ��� a[i] �ȼ������Сֵ��С */
            index = i;            /* �ټ��� a[i] ���µ���Сֵ�����±�Ϊ i ��Ԫ����С */
        }
    }

    /* �����Сֵ�Ͷ�Ӧ���±� */
    printf("min is %d\tsub is %d\n", a[index], index);   /* ��23�� */

    {
        int temp;                /* �ڸ�������ж������temp*/
        temp = a[index];         /* ����3�佻��a[index]��a[0] */
        a[index] = a[0];
        a[0] = temp;

        for (i = 0; i < n; i++) {
            printf(" %d ", a[i]);
        }
    }

    return 0;
}