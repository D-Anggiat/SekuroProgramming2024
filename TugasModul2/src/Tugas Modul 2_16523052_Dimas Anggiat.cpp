#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

float xo,yo;
int i,j;
float arr[0];

// Untuk mengecek koordinat drone.
void lokasi() {
    cout<<fixed<<setprecision(2)<<"("<<xo<<","<<yo<<")"<<endl;
}

// Untuk menggerakkan posisi (x,y) drone. 
// x positif 	: ke kanan
// x negatif 	: ke kiri
// y positif	: ke atas
// y negatif	: ke bawah
void gerak(int x, int y) {
    xo += x;
    yo += y;
    i += 2;
    j = 0;
    arr[i] = xo;
    arr[i+1] = yo;
}

// Untuk menggerakkan posisi (x,y) drone dengan memberi simulasi seolah-olah drone bergerak dengan  kecepatan v kotak/s selama t detik. 
// Arah yang ditempuh oleh drone adalah theta derajat dari horizontal positif counter clockwise. 
void gerak_2(int v, int t, int theta) {
    int d = v*t;
    float x,y;

    x = cos(theta*M_PI/180)*d;
    y = sin(theta*M_PI/180)*d;

    xo += x;
    yo += y;
    i += 2;
    j = 0;
    arr[i] = xo;
    arr[i+1] = yo;
}

// Untuk mengubah posisi (x,y) drone pada posisi sebelumnnya.
void undo() {
    j+=2;
    if (j>i) {
        cout<<"Tidak dapat undo!"<<endl;
        j-=2;
    }

    else if (j<=i) {
        xo = arr[i-j];
        yo = arr[i-j+1];
        cout<<"Undo berhasil!"<<endl;
    }
}

// Untuk mengembalikan posisi (x,y) drone yang telah di undo
void redo() {
    j-=2;
    if (j<0) {
        cout<<"Tidak dapat redo!"<<endl;
        j+=2;
    }

    else if (j>=0) {
        xo = arr[i-j];
        yo = arr[i-j+1];
        cout<<"Redo berhasil!"<<endl;
    }
}

int main()
{
    string cmd;
    // input exit untuk memberhentikan program
    while (cmd!="exit") {
        cin>>cmd;
        if (cmd == "lokasi") {
            lokasi();
        }
        
        else if (cmd=="gerak") {
            int x,y;
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            gerak(x,y);
        }

        else if (cmd=="gerak_2") {
            int v,t,theta;
            cout<<"v : ";
            cin>>v;
            cout<<"t : ";
            cin>>t;
            cout<<"theta : ";
            cin>>theta;
            gerak_2(v, t, theta);
        }

        else if (cmd=="undo") {
            undo();
        }
        
        else if (cmd=="redo") {
            redo();
        }
    }
    return 0;
}