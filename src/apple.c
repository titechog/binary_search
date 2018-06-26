#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int i, s, t;
    t = k;
    i = 1;
    while(i < n+1 && t >= 0){
        if(A[i] < m){
            t = t - 1;
            i = i + 1;
        }
        else{
            s = A[i];
            while(s > 0){
                s = s - m;
                t = t - 1;
        }
            i = i+1;
        }
    }
    return (int) t >= 0;
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
    while(ub - lb > 1) {
            int m = (lb + ub) / 2;
            if(p(m)){
                ub = m;
            }
            else {
                lb = m;
            }
    }
    printf("%d\n", ub);
    return 0;
}
