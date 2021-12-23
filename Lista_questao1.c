#include<stdio.h>

int primo(int i){
    int cont,j = 0;
    for(cont = 1;cont <= i;cont++){
        if(cont == 1){
            j++;
        }
        else if(cont > 1 && i%cont == 0){
            j++;
        }
    }
    return j;
}

int main(){
    int a, b;

    scanf("%d",&a);
    b = primo(a);
    if(b > 2)
        printf("Nao e Primo");
    else if(b == 2)
        printf("E primo");
}