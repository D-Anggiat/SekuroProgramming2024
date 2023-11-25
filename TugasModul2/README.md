## Tugas Modul 2
### Identitas : 
Nama     : Dimas Anggiat <br/>
NIM      : 16523052 <br/>
Fakultas : STEI-R <br/>

### Program Simulasi Drone
Program ini dapat menjalankan beberapa fungsi dengan menerima input dari user. <br/>
Berikut fungsi yang dapat dijalankan pada program: <br/>
1. Simulasi Pergerakan Drone <br/>
   input : lokasi <br/>
   Untuk mengecek koordinat drone. <br/>
   input : gerak <br/>
   Untuk menggerakan posisi drone. <br/>
2. Simulasi Pergerakan Drone dengan Kecepatan dan Waktu <br/>
   input : gerak_2 <br/>
   Untuk menggerakkan posisi drone dengan simulasi seolah-olah drone bergerak dengan kecepatan v kotak/s selama t detik. <br/>
   Arah yang ditempuh oleh drone adalah theta derajat dari horizontal positif counter clockwise. <br/>
4. Sistem History <br/>
   input : undo <br/>
   Untuk mengubah nilai x,y (koordinat drone) dengan nilai x, y pada history sebelumnya. <br/>
   Jika history sudah berada di history awal, maka undo tidak dapat dijalankan. <br/>
   input : redo <br/>
   Untuk mengembalikan nilai x, y yang telah diundo. Undo beberapa kali memungkinkan redo beberapa kali. <br/>
   Jika setelah melakukan Undo dilakukan gerak/gerak_2, maka redo tidak dapat dilakukan <br/>
