#include <stdbool.h>

bool check_bigger(int a, int b){
    
    if (a == b) return 0;
    return ( a > b) ? true : false;
}