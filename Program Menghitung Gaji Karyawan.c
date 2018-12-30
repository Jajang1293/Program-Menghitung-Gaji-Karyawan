#include<stdio.h>

int main()
{
    float Jam_kerja = 0;
    float gaji=25000;
    float Total_gaji;

    printf("Program Menghitung Gaji Karyawan\n");
    printf("Gaji Karyawan per 1 Jam Kerja adalah 25000 Rupiah\n");
    printf("======================================================\n");
    printf("Total Jam Kerja : ");
    scanf("%f", &Jam_kerja);

    Total_gaji=gaji*Jam_kerja;
    printf("Gaji Karyawan tersebut adalah: Rp %.2f", Total_gaji);
    return 0;

}
