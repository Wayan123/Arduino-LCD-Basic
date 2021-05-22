
/*
 *  Project name : LCD 16x2 Arduino
 *  Created By   : Wayan Dadang
 */

 // Pemanggilan Libabry LCD 16x2-nya terlebih dahulu, jadi disini kita tak perlu membuat library cukup panggil saja
#include <LiquidCrystal.h> // Ini adalah library LCd 16x2

// Sekarang kita akan inisialisasi pin komunikasi antara arduino dengan LCD
const int rs = 12, en = 11, d4 = 10, d5 = 9, d6 = 8, d7 = 7;

// Kemudian kita masukkan pin yang telah di inisialisasi tadi ke dalam library agar nanti bisa dikenali oleh library
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  // put your setup code here, to run once:
  // Nah disini kita inisialisasi jumlah karakter LCD yang kita gunakan yaitu 16x2
  lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:

  //nahh sekarang kita bisa mulai untuk menulis kode menampilakn karakter yang kita inginkan
  // Oh ya sebagai catatan, baris pertama LCD dimulai dari 0, dan baris kedua adalah 1 begitu juga kolomnya di awali dari 0 dan untuk kolom 16 sama dengan 15 jadi 0-15 adalah 16 kolom
  lcd.setCursor(0, 0); // Ini kita inisialisasi cursor pada LCD di awali dari kolom 1 pada baris pertama.
  lcd.print("Hello, World!"); // Nahh ini adalah untuk menampilakn karakter teks ke LCd menggunakan perintah lcd.print, kata pertama kita gunakan hello World, ya.
  lcd.setCursor(0, 1); // Nahh ini program untuk menampilkan karakter teks pada baris kedua dan di awali dari kolom pertama
  lcd.print("Code and Robot"); // Kita menggunakan print untuk menampilaknnya.

}
