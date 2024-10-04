#include <stdio.h>

int main()
{
    printf("selamat datang di program perkenalan!\n");
    printf("masukan nama mu\n");

    char nama[32];
    // fgets(nama, sizeof(nama), stdin);
    scanf("%31s[^\n]", &nama);

    printf("masukan umurmu\n");

    int umur;
    scanf("%d[^\n]", &umur);

    printf("apa saja hoby mu \n");

    char hoby[256];
    // fgets(hoby, sizeof(hoby), stdin);
    scanf("%255s[^\n]", &hoby);

    printf("di mana kamu tinggal? \n");

    char lokasi[256];
    // fgets(lokasi, sizeof(lokasi), stdin);
    scanf("%255s[^\n]", &lokasi);

    printf("hi nama kamu %s, umur kamu %d, hoby kamu adalah %s, kamu tinggal di %s", nama, umur, hoby, lokasi);
}
