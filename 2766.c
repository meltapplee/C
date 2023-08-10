#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int field[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &field[i][j]);
        }
    }

    int K;
    scanf("%d", &K);

    int flowers[100][2];
    for (int i = 0; i < K; i++) {
        scanf("%d %d", &flowers[i][0], &flowers[i][1]);
    }

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int k = 0; k < K; k++) {
        int x = flowers[k][0] - 1;
        int y = flowers[k][1] - 1;

        field[x][y] = 0;

        for (int i = 0; i < 8; i++) {
            int ax = x + dx[i];
            int ay = y + dy[i];

            if (ax >= 0 && ax < N && ay >= 0 && ay < N) {
                field[ax][ay] = 0;
            }
        }
    }

    int totalValue = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            totalValue += field[i][j];
        }
    }

    printf("%d\n", totalValue);

    return 0;
}
