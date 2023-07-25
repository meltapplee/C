#include <stdio.h>

int main() {
    int n, arr[10000] = {0};
    arr[0] = arr[1] = 1;

    scanf("%d", &n);
    for(int i = 2; i < n; i++) {
        arr[i] = arr[arr[i-1]-1] + arr[i-arr[i-1]];
    }
    printf("%d", arr[n-1]);
    return 0;
}

