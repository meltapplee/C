#include <stdio.h>

int main()
{
    int time, score;
    scanf("%d %d", &time, &score);
    for (; 90 > time; time += 5) score += 1;
    printf("%d", score);
    return 0;
}