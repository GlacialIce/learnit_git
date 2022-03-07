#include <iostream>
using namespace std;

class kasir {
	public :

	cekdiskon() {
		cout << "\nTidak ada jumlah, ulangi program" << "\n\n";
	}

	cekdiskon(int jumlah) {
		if(jumlah >= 300000){
			cout << "Selamat, anda mendapat diskon 20%" << endl;
			cout << "harga setelah diskon : " << jumlah*80/100 << endl; 
			cout << "Terimakasih sudah berbelanja" << "\n\n";
		}
		else{
			cout << "Mohon maaf, jumlah nominal tidak mencukupi" << endl;
			cout << "Terimakasih sudah berbelanja" << "\n\n";

		}
	}
};

int main() {
	kasir jumlah;

	jumlah.cekdiskon();
	jumlah.cekdiskon(500000);
	jumlah.cekdiskon(100000);

	return 0;
}
