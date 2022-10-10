#include <stdio.h>
#include "./bee_1143.h"

int main(){

    int x,i;
    int qua=0;
    int cub=0;
    scanf("%d",&x);

    for(i=1; i<=x;i++){
            qua=check_bigger_quadrado(i);
            cub=check_bigger_cubo(i);
        printf("%d %d %d\n",i,qua,cub);
    }


return 0;

}