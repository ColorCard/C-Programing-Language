/*����7-6��������ӽ�Ŀ��ӭ�̶ȡ�
 * ĳ����̨Ҫ������ڶԸ�̨8����Ŀ������Ӧ��Ŀ���Ϊ1~8�����ܻ�ӭ�������������nλ���ڣ�1��n��1000����
 * ��Ҫ���д��������ÿһλ���ڵ�ͶƱ�����ÿλ����ֻ��ѡ��һ����ϲ������ĿͶƱ����ͳ���������Ŀ�ĵ�Ʊ�����*/

/* ͶƱ���ͳ�� */
# include<stdio.h>

# define MAXN 8                    /* ������ų���MAXN */

int main() {
    int i, n, response;
    int count[MAXN + 1];                      /*�����±��Ӧ��Ŀ��ţ���ʹ��count[0] */

    printf("Enter n: ");               /* ��ʾ����n */
    scanf("%d", &n);

    for (i = 1; i <= MAXN; i++) {
        count[i] = 0;                         /* ����Ŀ��������0 */
    }

    /* ���벢ͳ��ͶƱ���� */
    for (i = 1; i <= n; i++) {
        printf("Enter your response: ");         /* ������ʾ */
        scanf("%d", &response);
        if (response >= 1 && response <= MAXN) {        /* ���ͶƱ�Ƿ���Ч*/
            count[response]++;                          /* ��Ӧ��Ŀ��Ʊ��1 */
        } else {
            printf("invalid: %d\n", response);
        }
    }

    /* �����Ʊ����Ϊ�����Ŀ��Ʊ��� */
    printf("result:\n");
    for (i = 1; i <= MAXN; i++) {
        if (count[i] != 0) {
            printf("%4d%4d\n", i, count[i]);
        }
    }

    return 0;
}