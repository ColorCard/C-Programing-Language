/* ����7-5��ѡ�����򷨡�����һ��������n (1<n��10)��������n����������ѡ�񷨽����Ǵ�С�������������� */

/* ѡ������ */
# include <stdio.h>

# define MAXN 10                    /* ������ų���MAXN */

int main() {
    int i, index, k, n, temp;
    int a[MAXN];

    printf("Enter n: ");                 /* ��ʾ����n */
    scanf("%d", &n);

    printf("Enter %d integers: ", n);    /* ��ʾ����n ���� */
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* ��n�������� */
    for (k = 0; k < n - 1; k++) {
        index = k;                        /* index�����Сֵ���ڵ��±� */
        for (i = k + 1; i < n; i++) {     /* Ѱ����Сֵ�����±� */
            if (a[i] < a[index]) {
                index = i;
            }
        }

        temp = a[index];                        /* ��СԪ�����±�Ϊk��Ԫ�ؽ��� */
        a[index] = a[k];
        a[k] = temp;
    }

    printf("After sorted: ", n);         /* ���n������Ԫ�ص�ֵ */

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}