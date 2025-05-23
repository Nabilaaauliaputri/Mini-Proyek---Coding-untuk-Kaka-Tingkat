
//Nabila Aulia Putri_2406153
//TugasMiniProject
//MembuatProgramPengingatWaktuBelajar



#include <stdio.h>      
#include <time.h>       // Library untuk fungsi waktu (clock)

// Fungsi untuk membuat jeda selama 'detik' detik
void jeda(int detik) {
    clock_t waktuMulai = clock();                  // Menyimpan waktu saat fungsi mulai dipanggil
    clock_t waktuTunggu = detik * CLOCKS_PER_SEC;  // Menghitung waktu tunggu dalam satuan clock ticks

    // Loop akan berjalan sampai waktu tunggu tercapai
    while ((clock() - waktuMulai) < waktuTunggu);
}

int main() {
    int durasiTotal = 120;        // Total durasi belajar, 120 menit (2 jam)
    int intervalPengingat = 5;    // Jeda antar pengingat, 5 detik (untuk demo cepat)
    int jumlahPengingat = durasiTotal / 30;  // Jumlah pengingat, dihitung dari 120/30 = 4
    int i;                        // Variabel untuk perulangan

    // Menampilkan pesan pembuka program
    printf("Program Pengingat Belajar Bestie Biar Nilai UAS Memuaskan!\n");
    printf("Bestie akan diingatkan untuk belajar setiap 30 menit selama 2 jam.\n\n");

    // Perulangan sebanyak jumlah pengingat
    for (i = 1; i <= jumlahPengingat; i++) {
        jeda(intervalPengingat);  // Menunggu selama 5 detik (demo)
        // Menampilkan pesan pengingat ke layar
        printf("Pengingat #%d: Ayo udah waktunya belajar bestie! \n", i);
    }

    // Menampilkan pesan penutup setelah semua pengingat selesai
    printf("\nSesi belajar selesai! Semoga hasil belajarnya nanti dapat nilai 100 bestie.\n");

    return 0;   // Mengakhiri program
}
