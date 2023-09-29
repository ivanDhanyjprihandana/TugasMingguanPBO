#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;

    cout << "Masukkan jumlah nilai: ";
    cin >> n;

    double nilai[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
        sum += nilai[i];4
        
    }

    double rata_rata = sum / n;

    cout << "Rata-rata dari " << n << " nilai adalah: " << rata_rata << endl;

    return 0;
}