#include <stdio.h>
#include "./bee_1132.h"

int main(void){
    int x,y,i;
    int soma = 0;

    scanf("%d %d", &x, &y);

    bool result = check_bigger(x,y);

    if (result == false){

        for(i = x; i <= y; i++){
    
            if(i % 13 != 0){
                soma = soma + i;
            }
            
}

    }else{
        for(i = y;  i <= x; i++){

            if(i % 13 != 0){
                soma = soma + i;
            }
    }

}

    printf("%d", soma);

    return 0;


}
