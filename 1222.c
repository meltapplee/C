#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int time, s1, s2;
    scanf("%d %d %d", &time, &s1, &s2);


    time = 90 - time;
    if (time != 0)
    {
        s1 += 1;
        if (time >= 5) {
            s1 = s1 + (time - 1) / 5;
        }
    }

    if (s1 > s2) printf("win");
    else if (s1 == s2) printf("same");
    else printf("lose");

    return 0;
}