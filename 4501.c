#include <stdio.h>

int main() {
    int height[7];

    for(int i=0; i<7; i++){
        scanf("%d", &height[i]);
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(height[j] > height[j+1]){
                int box;
                box = height[j];
                height[j] = height[j+1];
                height[j+1] = box;
            }
        }
    }
    printf("%d\n%d", height[6], height[5]);
    return 0;
}