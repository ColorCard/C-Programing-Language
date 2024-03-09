/*����7-8����������������m��n��1��m,n��6����������һ��1��m��n�ľ����ҳ����ֵ�Լ��������±�����±ꡣ�������ֵΨһ��*/

/* �ҳ������е����ֵ�������±�����±� */
# include <stdio.h>

# define MAXM 6                /* ������ų���MAXM */
# define MAXN 6                /* ������ų���MAXN */

int main() {
    int col, i, j, m, n, row;
    int a[MAXM][MAXN];

    printf("Enter m, n: ");                /* ��ʾ����m��n */
    scanf("%d %d", &m, &n);

    /* ��������������ά���� */
    printf("Enter %d integers: \n", m * n);    /* ��ʾ����m*n���� */

    for (i = 0; i < m; i++) {                         /* ���±�����ѭ����ѭ������ */
        for (j = 0; j < n; j++) {                     /* ���±�����ѭ����ѭ������ */
            scanf("%d", &a[i][j]);             /* ��������Ԫ�� */
        }
    }

    /* ������ά���飬�ҳ����ֵ a[row][col] */
    row = col = 0;                      /* �ȼ��� a[0][0] �����ֵ */
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] > a[row][col]) {    /* ��� a[i][j] �ȼ���ֵ�� */
                row = i;                  /* �ټ��� a[i][j] ���µ����ֵ */
                col = j;
            }
        }
    }

    printf("max = a[%d][%d] = %d\n", row, col, a[row][col]);

    return 0;
}