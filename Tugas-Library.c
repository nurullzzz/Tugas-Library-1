#include <stdio.h>
#include <string.h>
void gabungan(char a,char s);
void awalan(){
    printf("Welcome\n");
    printf("Silahkan Isi Nama Anda :\n");
}
int main(){
    char nama[20];
    char greet[100] = "Selamat Datang ";
    awalan();
    scanf("%s",nama);
    strcat(greet, nama);
    puts(greet);
return 0;
}