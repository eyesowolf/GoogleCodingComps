#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i = 0;
    int t; //Number of test cases in file
    int n; //Length of string to be stored
    int k; //Desired goodness score
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d%d", &n, &k);
        char *s = (char *) malloc(n * sizeof(char));
        scanf("%s", s);
        int testnum = i + 1;
        int ops = 0;
        int j;
        int N = round(n/2);
        for(j = 0; j < N; j++){
            char Sj = s[j];
            char Sn = s[n-j-1];
            if (Sj != Sn){
                ops += 1;
            }
        }
        if(k == ops){
            ops = 0;
        } else if (k < ops){
            ops = ops - k;
        } else {
            ops = k - ops;
        }
        printf("Case #%d: %d\n", testnum, ops);
    }
}