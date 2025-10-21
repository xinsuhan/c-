int main() {
srand(time(0));
int number = rand() % 100 + 1; // Random number between 1 and 100
int count = 0;
int a =0;
printf("我已经想好了一个1到100之内的整数。");
do {
    printf("请输入你猜的数字：");
    scanf("%d", &a);
    count++;
    if (a > number) {
        printf("你猜的数字太大了！\n");
    } else if (a < number) {
        printf("你猜的数字太小了！\n");
    } else {
        printf("恭喜你，猜对了！你总共猜了%d次。\n", count);
    }
} while (a != number);
printf("太好了，你用了%d次就猜对了！\n", count);
return 0;
}