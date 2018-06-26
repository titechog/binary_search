#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int i, s, t;
    s = 0;
    for(i = 1; i < n; i++){
        int t = A[i] / m;
        s = s + t;
    }
    return (int) s < k;
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n , &k);
    lb = 0;
    for(i = 1; i < n; i++){
        scanf("%d", &A[i]);
    }
    ub = 0;
    for(i = 1; i < n; i++){
        ub = ub + A[i];
    }
    int l = ub / k;
    ub = l + 1;
    while(ub - lb > 1) {
        int m = (lb + ub) / 2;
        if(p(m)){
            ub = m;
        }
        else {
            lb = m;
        }
    }
    printf("%d\n", lb);
    return 0;
}

