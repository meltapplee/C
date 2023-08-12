#include <stdio.h>

int main() {
    char in[100];
    scanf("%s", in);

    printf("%c", in[0]);
    for (int i = 1; in[i]; i++) {
        if (in[i - 1] == ',')
            printf("%c", in[i]);
    }

    return 0;
}