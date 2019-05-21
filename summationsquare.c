#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int testcases;

    scanf("%d",&testcases);
    long long int number[testcases];
    for(int x=0;x<testcases;x++)
        scanf("%d",&number[x]);

        long long int sum=0;
        for(int t=0;t<testcases;t++)
            sum+=number[t];
    printf("%0.10lld",sum);

    return 0;
}
