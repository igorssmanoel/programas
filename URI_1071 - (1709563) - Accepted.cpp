#include <cstdio>
 
int main()
{
    int x, y, sum = 0;
    scanf("%d%d", &x, &y);
    int min = (x < y) ? x : y;
    int max = (x > y) ? x : y;
    for (int k = min + 1; k < max; ++k) {
        int kabs = (k < 0) ? -k : k;
        if (kabs & 1) {
            sum += k;
        }
    }
    printf("%d\n", sum);
    return 0;
}