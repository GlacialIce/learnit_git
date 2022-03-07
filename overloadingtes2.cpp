#include <iostream>
using namespace std;

class kecepatan {
	public :

	void hitung() {
		cout << "Tidak ada jumlah, ulangi pengisian" << endl;
	}

	int hitung(int jarak, int waktu) {
		return jarak/waktu;
		
	}

	float hitung(float jarak, float waktu) {
		return jarak/waktu;
		
	}
};

int main() {
	kecepatan jumlah;

	jumlah.hitung(300, 60);
	jumlah.hitung((float)750.60, 60.30);
	jumlah.hitung();

	return 0;
}