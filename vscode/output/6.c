int main() {
srand(time(0));
int number = rand() % 100 + 1; // Random number between 1 and 100
int count = 0;
int a =0;
printf("���Ѿ������һ��1��100֮�ڵ�������");
do {
    printf("��������µ����֣�");
    scanf("%d", &a);
    count++;
    if (a > number) {
        printf("��µ�����̫���ˣ�\n");
    } else if (a < number) {
        printf("��µ�����̫С�ˣ�\n");
    } else {
        printf("��ϲ�㣬�¶��ˣ����ܹ�����%d�Ρ�\n", count);
    }
} while (a != number);
printf("̫���ˣ�������%d�ξͲ¶��ˣ�\n", count);
return 0;
}