#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	string namaMhs, mataKuliah;
	int sks, jumlahKehadiran, nilaiTugas, nilaiUts, nilaiUas;
	long long nim;
	float nilaiAkhir;
	char grade;
	while (true) {
		cout << "Masukkan NIM : ";
		cin >> nim;
		if (nim < 0) break;
		cout << "Masukkan Nama : ";
		getline (cin >> ws, namaMhs);
		cout << "Masukkan Mata Kuliah : ";
		getline (cin >> ws, mataKuliah);
		cout << "Masukkan SKS : ";
		cin >> sks;
		cout << "Masukkan Jumlah Kehadiran : ";
		cin >> jumlahKehadiran;
		cout << "Masukkan Nilai Tugas : ";
		cin >> nilaiTugas;
		cout << "Masukkan Nilai UTS : ";
		cin >> nilaiUts;
		cout << "Masukkan Nilai UAS : ";
		cin >> nilaiUas;
		if (jumlahKehadiran == 0 || nilaiTugas == 0 || nilaiUts == 0 || nilaiUas == 0) {
		grade = 'E';
		} else {
		float jKehadiran = jumlahKehadiran * 0.1;
		float nTugas = nilaiTugas * 0.2;
		float nUts = nilaiUts * 0.3;
		float nUas = nilaiUas *0.4;
        float total = jKehadiran + nTugas + nUts + nUas;
		if (total >= 80) {
			grade = 'A';
		} else if (total >= 70) {
			grade = 'B';
		} else if (total >= 60) {
			grade = 'C';
		} else if (total >= 50) {
			grade = 'D';
		} else {
			grade = 'E';
		}
	}
cout << "\n\nNama Mata Kuliah : " <<mataKuliah << endl;
cout << "SKS : " << sks << "\n";
cout << "----------------------------------------\n";
cout << left << setw(15) << "NIM" << setw(25) << "NAMA" << setw(15) << "JML HADIR" << setw(8) << "TUGAS" << setw(8) << "UTS" << setw(8) << "UAS" << setw (8) << "NILAI" << endl;
cout << left << setw(15) << nim << setw(25) << namaMhs << setw(15) << jumlahKehadiran << setw(8) << nilaiTugas << setw(8) << nilaiUts << setw(8) << nilaiUas << setw (8) << grade << endl;
cout << "----------------------------------------\n";
	}
	return 0;
}