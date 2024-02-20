1. `seed` adalah variabel yang digunakan untuk menyimpan nilai seed (awal) untuk metode middle square.
2. Fungsi `middleSquareMethod()` digunakan untuk menghasilkan angka acak. 
    - Pertama, kita menghitung kuadrat dari nilai `seed` dengan mengalikannya dengan dirinya sendiri.
    - Selanjutnya, kita ambil 6 digit tengah dari hasil perkalian tersebut dengan menggunakan operasi pembagian dan modulo.
    - Kemudian, kita perbarui nilai `seed` dengan hasil tersebut.
    - Akhirnya, kita gunakan modulo 6 dan tambahkan 1 sehingga mendapatkan nilai acak antara 1 hingga 6.
3. `main()` adalah fungsi utama program.
    - Pertama, kita inisialisasi nilai `seed` menggunakan `time(NULL)`. Ini penting agar seed berubah setiap kali program dijalankan, sehingga menghasilkan angka acak yang berbeda.
    - Selanjutnya, kita panggil fungsi `middleSquareMethod()` dan cetak hasilnya.

Dengan menggunakan waktu sebagai seed, kita memastikan bahwa seed yang digunakan dalam metode middle square berubah setiap kali program dijalankan, sehingga menghasilkan angka acak yang berbeda pada setiap eksekusi. Hal ini membuat program sesuai dengan kebutuhan yang telah Anda tentukan.

Kita buat salah satu contoh dengan waktu acak

1. Inisialisasi seed menggunakan waktu saat ini:
   - `seed = 1645123456`

2. Pertama, kita hitung kuadrat dari nilai seed:
   - `square = 1645123456 * 1645123456 = 2,706,308,422,160,432`

3. Selanjutnya, kita ambil 6 digit tengah dari hasil perkalian tersebut:
   - `result = (2,706,308,422,160,432 / 1000) % 1000000 = 8,422,160`

4. Perbarui nilai seed dengan hasil tersebut:
   - `seed = 8,422,160`

5. Gunakan modulo 6 dan tambahkan 1 untuk mendapatkan angka acak antara 1 hingga 6:
   - `random_number = (8,422,160 % 6) + 1 = 1`

Jadi, pada iterasi ini, program akan menghasilkan angka acak 1. Setiap kali program dijalankan, waktu saat ini yang berbeda akan digunakan sebagai seed awal, sehingga menghasilkan hasil yang berbeda dan sesuai dengan kebutuhan keacakan yang diinginkan.
