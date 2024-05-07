#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No induk = " << nim << endl;
	}
};



int main() {
	mahasiswa mhs{ 1 };  //object mhs
	mhs.showNim();     // Member access operator
	mahasiswa& refMhs = mhs;    // pointer reference refMhs
	refMhs.nim = 2;           // Mmember Access operator

}