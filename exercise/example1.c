#include <stdio.h>

int main() {
    const int len = 4;
    int count;
    int num[] = {1, 2, 3, 4};
    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            for (int k=0; k<len; k++) {
                if ((num[i] != num[j]) && (num[j] != num[k]) && (num[i] != num[k])) {
                    count ++;
                    printf("%d%d%d\n", num[i], num[j], num[k]);
                }
            }
        }
    }
    printf("总数：%d\n", count);
}
