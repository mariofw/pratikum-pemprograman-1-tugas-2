#include <stdio.h>

int main(){
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    if(a == b){
        printf("Apakah a sama dengan b ? jawabannya adalah 1\n");
        } else{
        printf("Apakah a sama dengan b ? jawabannya adalah 0\n");
    }

    if(b > c){
        printf("Apakah b lebih besar dari c ? jawabannya adalah 1\n");
    } else{
        printf("Apakah b lebih besar dari c ? jawabannya adalah 0\n");
    }

    if(a != c){
        printf("Apakah a tidak sama dengan c ? jawabannya adalah 1");
    } else{
        printf("Apakah a tidak sama dengan c ? jawabannya adalah 0");
    }

    
    return 0;
}