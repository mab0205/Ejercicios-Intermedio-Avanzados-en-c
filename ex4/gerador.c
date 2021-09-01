#include <stdio.h>

int main() {

    int a[] = {0, 5, 8, 14, 21};
    int b[] = {28, 32, 40, 47, 51};
    int c[] = {61, 67};
    int d[] = {80, 87};
    int ra, sma=0, smb=0, smc=0, smd=0, i;
    int aa, bb, cc, dd;
    scanf("%d", &ra);
    for (i=0;i<7;i++) {
        int dig = (ra%10);
        ra /= 10;
        sma += dig;
        smb += (1<<i)*dig;
        if (i&1) smc += dig*i;
        else smd += dig*(i+1);
    }
    aa = a[sma%5];
    bb = b[smb%5];
    cc = c[smc%2];
    dd = d[smd%2];

    if (sma&1) {
        int aux = cc;
        cc = dd;
        dd = aux;
    }

    printf("A = %d\n", aa);
    printf("B = %d\n", bb);
    printf("C = %d\n", cc);
    printf("D = %d\n", dd);

    return 0;
}
