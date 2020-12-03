#include <string.h>
void awalan(){
    char nama[20] = "Khusnul Qodir";
    char greet[100] = "Selamat Datang ";
    strcat(greet, nama);
}
int main(){
    awalan();
return 0;
}