#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int s = 0;
    scanf("%d", &s);
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    s1 = s / 3600;
    s2 = (s % 3600) / 60;
    s3 = (s % 3600) % 60;
    printf("–° ±%d ∑÷÷”%d √Î%d", s1, s2, s3);
    return 0;
}