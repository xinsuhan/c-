#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while (n > 0) {
        int nums[4];
        scanf("%d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3]);

        // ʹ��ð�����򣨴�С����
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3 - i; j++) {
                // ���ǰ������Ⱥ���Ĵ󣬾ͽ�������
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }

        // ��ӡ�����Ľ��
        printf("%d %d %d %d\n", nums[0], nums[1], nums[2], nums[3]);

        n--;
    }

    return 0;
}












