#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    return (long long int) A[m] >= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
    lb = 0;
    ub = n;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        if(p(m)){
            ub = m;
        }
        else {
            lb = m;
        }
    }
    printf("%d\n", ub);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  return 0;
}
