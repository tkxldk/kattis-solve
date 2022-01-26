#include <stdio.h>

// INTINYA NANYA UNTUK BULAN SELANJUTNYA BISA SISA BERAPA
// KALAU MAKE METODE BULAN SEBELUMNYA
// MAKANYA RUMUSNYA (T + 1) *megabyte - sum
int main(){
    int megabyte;
    scanf("%d", &megabyte);
    //MegabyNe yang didapat selama 1 bulan
    int N, P;
    scanf("%d", &N);
    //Buat brp bulan
    int sum = 0; 
	//Total penggunaan bulan ini
    for(int i = 1; i <= N; i++){
        scanf("%d", &P);
        sum = sum + P;
        //Totalin brp megabyte yang dipake selama T bulan
    }
    int count = ((N + 1) * megabyte) - sum;
    //Buat bulan selanjutnya bakal sisa brp?
    //Bulan ke T + 1 = bulan selanjutnya
    //T + 1 dikali megabyte = brp banyak total megabyte yang didapatkan selama T bulan
    //^^^^ dikurang sum = total megabyte yang didapat selama T bulan dikurang total
    //brp megabyte yang dipake selama T bulan.
    printf("%d\n", count);

    return 0;
}
