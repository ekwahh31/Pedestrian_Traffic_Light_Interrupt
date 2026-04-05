# 🚦🧑‍🤝‍🧑  PEDESTRIAN TRAFFIC LIGHT

Percobaan ini bertujuan membuat sistem lampu lalu lintas sederhana berbasis Arduino yang mengatur kendaraan dan pedestrian. Sistem menggunakan tombol sebagai input untuk meminta penyeberangan. Saat tombol ditekan, sistem akan menghentikan kendaraan dan memberi waktu bagi pedestrian untuk menyeberang dengan aman. Setelah itu, sistem kembali ke kondisi normal secara otomatis.

## Fitur Utama
- Kontrol lampu kendaraan otomatis
- Sistem penyeberangan pedestrian
- Respons cepat dengan interrupt
- Transisi lampu kuning berkedip
- Tombol sebagai pemicu sistem
- Kembali otomatis ke kondisi normal
- Simulasi menggunakan Tinkercad

## Konsep yang Digunakan
Sistem ini menggunakan konsep dasar mikrokontroler dengan input dan output digital. Arduino membaca tombol sebagai input menggunakan mode INPUT_PULLUP, sehingga kondisi default HIGH dan berubah LOW saat ditekan. Output digunakan untuk mengontrol LED sebagai representasi lampu lalu lintas. Program memanfaatkan interrupt agar respon terhadap tombol lebih cepat tanpa harus menunggu loop selesai. Selain itu, digunakan logika HIGH dan LOW untuk mengatur nyala lampu serta delay untuk menentukan durasi setiap kondisi.

## Alur Kerja
- Kondisi awal: kendaraan hijau, pedestrian merah
- Tombol ditekan → interrupt aktif
- Flag berubah dan sistem mulai siklus
- Kendaraan berubah menjadi merah
- Pedestrian berubah menjadi hijau
- Tunggu beberapa detik untuk penyeberangan
- Pedestrian kembali merah
- Kendaraan masuk fase kuning berkedip
- Sistem kembali ke kondisi awal

## Dokukemtasi
https://github.com/user-attachments/assets/f3b8123e-3864-440a-b923-5d27d32d23c4

