#include <iostream>
using namespace std;

class LinearLine
{
private:
    // empat float data type, yaitu x1, y1, x2, dan y2
    float x1;
    float y1;
    float x2;
    float y2;

public:
    LinearLine (float x1, float y1, float x2, float y2) {
        // Isilah definisi constructor ini dengan tujuan untuk
        // menginisialisasi data member
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }
    float gradient() {
        // hitunglah gradient berdasarkan 4 titik tersebut
        float y0 = y2-y1;
        float x0 = x2-x1;
        float m = y0/x0;
        return m;
    }
    float y_intercept() {
        // hitunglah nilai y ketika x = 0
        float m = gradient();
        float x = 0;
        float y = m*x - m*x1 + y1;
        return y;
    }
    void operator + (float a) {
        // Buatlah operator overloading untuk menggeser garis linear
        // sejauh a pada arah sumbu x
        x1 = x1 + a;
        x2 = x2 + a;
    }
    void printEquation() {
        // print equation dengan format y = mx+c
        // perhatikan m = gradient dan c = y_intercept
        float m = gradient();
        float c = y_intercept();
        cout<<"y = "<<m<<"x + "<<c<<endl;
    }
    void printPoints() {
        // print nilai member data dengan format
        // (x1, y1) = ( , )
        // (x2, y2) = ( , )
        cout<<"(x1, y1) = ("<<x1<<", "<<y1<<")"<<endl;
        cout<<"(x2, y2) = ("<<x2<<", "<<y2<<")"<<endl;
    }
};

int main()
{

    LinearLine line(1.0f, 8.0f, 2.0f, 3.0f); // inisialisasi objek line
    int a = 3; // nilai banyaknya penggeseran pada persamaan linear
    
    line.printPoints();
    cout<<"Sehingga didapatkan"<<endl;
    cout<<"gradient = "<<line.gradient()<<endl;
    cout<<"y_intercept = "<<line.y_intercept()<<endl;
    line.printEquation();
    cout<<endl;
    cout<<"Setelah digeser sejauh a, didapatkan persamaan baru:"<<endl;
    line.operator+(a);
    line.printEquation();

    /*
    lengkapilah fungsi main sehingga output program seperti pada contoh di bawah
    
    
    (x1, y1) = (1, 8)
    (x2, y2) = (2, 3)
    Sehingga didapatkan
    gradient = -5
    y_intercept = 13
    y = -5 x + 13
    
    Setelah digeser sejauh a, didapatkan persamaan baru:
    y = -5 x + 28
    */

}