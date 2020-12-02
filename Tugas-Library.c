#include <stdio.h>
#include <string.h>
void gabungan(char a,char s);
void awalan(){
    printf("Welcome\n");
    printf("Silahkan Isi Nama Anda :\n");
}
int main(){
    char nama[20];
    awalan();
    scanf("%s",nama);
    printf("Selamat datang %s \n",nama);
return 0;
}
void gabungan (char abc,char stu){
    char abc[100] = ("Test bisa apa engga");
    char stu[] = ("gabungin ini");
    strcat(abc, stu);
    puts(abc);
}