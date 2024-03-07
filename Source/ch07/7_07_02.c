/* ����7-7-2�����ֲ��ҷ�������һ��������n (1<n��10)��������n������������Ѱ�ֵ��С�����������У�
 * ���������һ������x��Ȼ���������в���x������ҵ��������Ӧ���±꣬�������"Not Found"��*/

/* ���ֲ��ҷ� */
# include <stdio.h>

# define MAXN 10                    /* ������ų���MAXN */

int main() {
    int i, low, high, mid, n, sorted, x;
    int a[MAXN];

    printf("Enter n: ");                /* ��ʾ����n */
    scanf("%d", &n);
    printf("Enter %d integers: ", n);    /* ��ʾ����n���� */
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sorted = 1;
    for (i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sorted = 0;
            break;
        }
    }
    if (sorted == 0) {
        printf("Invalid Value\n");
    } else {
        printf("Enter x��");                /* ��ʾ����x */
        scanf("%d", &x);
        low = 0;
        high = n - 1;                /* ��ʼʱ��������Ϊ�������� */
        while (low <= high) {                /* ѭ������ */
            mid = (low + high) / 2;         /* �м�λ�� */
            if (x == a[mid])
                break;                    /* ���ҳɹ�����ֹѭ�� */
            else if (x < a[mid])
                high = mid - 1;            /* ǰ��Σ�highǰ�� */
            else
                low = mid + 1;            /* ���Σ�low���� */
        }
        if (low <= high) {                    /* �ҵ�������±� */
            printf("Index is %d \n", mid);
        } else {                                 /* x��������a�� */
            printf("Not Found\n");
        }
    }

    return 0;
}