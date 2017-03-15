#include <iostream>
#include<math.h>

using namespace std;

typedef struct s_kompleks{
	int bil;
	char y;};
s_kompleks a, b, c, d;

void deklarasi_kompleks(){
	a.bil = 2;
	b.bil = 3;
	b.y = 'i';
	c.bil = 2;
	d.bil = 5;
	d.y = 'i';
	cout << "a = " << a.bil << endl;
	cout << "b = " << b.bil << b.y << endl;
	cout << "c = " << a.bil << endl;
	cout << "d = " << d.bil << d.y << endl;}
void tambah() {
	cout << a.bil + c.bil << " + " << b.bil + d.bil << d.y << endl;}
void kurang() {
	cout << a.bil - c.bil << " + " << b.bil - d.bil << d.y << endl;}
void kali() {
	int h1 = (a.bil * c.bil) - (b.bil * d.bil);
	int h2 = (a.bil * d.bil) - (b.bil * c.bil);
	cout << h1 + h2 << d.y << endl;}
void bagi() {
	int n, m, o, p;
	n = ((a.bil * c.bil) + (b.bil * d.bil));
	m = (pow(a.bil, 2) + pow(b.bil, 2));
	o = ((b.bil * c.bil) - (a.bil * d.bil));
	p = (pow(c.bil, 2) + pow(d.bil, 2));
	cout << ((n / m) + (o / p)) << d.y << endl;}
int main(){
	deklarasi_kompleks();
	int pilih;
	do{
		cout << "\nSilahkan Pilih Operasi : " << endl;
		cout << "1. Penambahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Keluar" << endl;
		cout << "Silahkan Pilih Menu : "; cin >> pilih;
		if (pilih == 1){
			tambah();}
			else if (pilih == 2){
			kurang();}
		else if (pilih == 3){
			kali();}
		else if (pilih == 4){
			bagi();}
		else if (pilih == 5){
			break;}
		else{
			cout << "Pilihan hanya 1 - 5" << endl;}} while (true);

    return 0;
}
