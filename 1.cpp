#include <iostream>

using namespace std;

typedef struct bil_polinom{
	int bilangan, pangkat;
	char x;
};
bil_polinom deklar_Pol1[5], deklar_Pol2[6], deklar_Pol3[2];
bil_polinom penambahan[8], pengalian[5*2], penurunan[5];
int i = 0, ik = 0, ikur = 0;

void Fungsi_Pol1(){

	deklar_Pol1[0].bilangan = 6;
	deklar_Pol1[0].x = 'x';
	deklar_Pol1[0].pangkat = 8;

	deklar_Pol1[1].bilangan = 8;
	deklar_Pol1[1].x = 'x';
	deklar_Pol1[1].pangkat = 7;

	deklar_Pol1[2].bilangan = 5;
	deklar_Pol1[2].x = 'x';
	deklar_Pol1[2].pangkat = 5;

	deklar_Pol1[3].bilangan = 1;
	deklar_Pol1[3].x = 'x';
	deklar_Pol1[3].pangkat = 3;

	deklar_Pol1[4].bilangan = 15;}

void Fungsi_Pol2(){

	deklar_Pol2[0].bilangan = 3;
	deklar_Pol2[0].x = 'x';
	deklar_Pol2[0].pangkat = 9;

	deklar_Pol2[1].bilangan = 4;
	deklar_Pol2[1].x = 'x';
	deklar_Pol2[1].pangkat = 7;

	deklar_Pol2[2].bilangan = 3;
	deklar_Pol2[2].x = 'x';
	deklar_Pol2[2].pangkat = 4;

	deklar_Pol2[3].bilangan = 2;
	deklar_Pol2[3].x = 'x';
	deklar_Pol2[3].pangkat = 3;

	deklar_Pol2[4].bilangan = 2;
	deklar_Pol2[4].x = 'x';
	deklar_Pol2[4].pangkat = 2;

	deklar_Pol2[5].bilangan = 10;}

void Fungsi_Pol3(){

	deklar_Pol3[0].bilangan = 1;
	deklar_Pol3[0].x = 'x';
	deklar_Pol3[0].pangkat = 2;

	deklar_Pol3[1].bilangan = 5;}

void pengisian_Polinom() {
	Fungsi_Pol1();
	Fungsi_Pol2();
	Fungsi_Pol3();}
void penjumlahan() {
	for (int a = 0; a < sizeof(deklar_Pol1) / sizeof(bil_polinom); a++){
		for (int b = 0; b < sizeof(deklar_Pol2) / sizeof(bil_polinom); b++){
			if (deklar_Pol1[a].pangkat == deklar_Pol2[b].pangkat){
				penambahan[i].bilangan = deklar_Pol1[a].bilangan + deklar_Pol2[b].bilangan;
				penambahan[i].x = deklar_Pol1[a].x;
				penambahan[i].pangkat = deklar_Pol1[a].pangkat;
				i++;}}}
	for (int a = 0; a < sizeof(deklar_Pol1) / sizeof(bil_polinom); a++){
		if (deklar_Pol1[a].pangkat != penambahan[0].pangkat){
			if (deklar_Pol1[a].pangkat != penambahan[1].pangkat){
				if (deklar_Pol1[a].pangkat != penambahan[2].pangkat){
					penambahan[i].bilangan = deklar_Pol1[a].bilangan;
					penambahan[i].x = deklar_Pol1[a].x;
					penambahan[i].pangkat = deklar_Pol1[a].pangkat;
					i++;}}}}
	for (int a = 0; a < sizeof(deklar_Pol2) / sizeof(bil_polinom); a++){
		if (deklar_Pol2[a].pangkat != penambahan[0].pangkat){
			if (deklar_Pol2[a].pangkat != penambahan[1].pangkat){
				if (deklar_Pol2[a].pangkat != penambahan[2].pangkat){
					penambahan[i].bilangan = deklar_Pol2[a].bilangan;
					penambahan[i].x = deklar_Pol2[a].x;
					penambahan[i].pangkat = deklar_Pol2[a].pangkat;
					i++;}}}}
	for (i = 0; i < sizeof(penambahan) / sizeof(
                                         bil_polinom); i++){
		cout << penambahan[i].bilangan << penambahan[i].x << penambahan[i].pangkat << " + ";}
	cout << endl;}
void pengurangan() {
	for (int a = 0; a < sizeof(deklar_Pol1) / sizeof(bil_polinom); a++){
		for (int b = 0; b < sizeof(deklar_Pol2) / sizeof(
                                            bil_polinom); b++){
			if (deklar_Pol1[a].pangkat == deklar_Pol2[b].pangkat){
				penambahan[ikur].bilangan = deklar_Pol1[a].bilangan - deklar_Pol2[b].bilangan;
				penambahan[ikur].x = deklar_Pol1[a].x;
				penambahan[ikur].pangkat = deklar_Pol1[a].pangkat;
				ikur++;}}}
	for (int a = 0; a < sizeof(deklar_Pol1) / sizeof(
                                           bil_polinom); a++){
		if (deklar_Pol1[a].pangkat != penambahan[0].pangkat){
			if (deklar_Pol1[a].pangkat != penambahan[1].pangkat){
				if (deklar_Pol1[a].pangkat != penambahan[2].pangkat){
					penambahan[ikur].bilangan = deklar_Pol1[a].bilangan;
					penambahan[ikur].x = deklar_Pol1[a].x;
					penambahan[ikur].pangkat = deklar_Pol1[a].pangkat;
					ikur++;}}}}
	for (int a = 0; a < sizeof(deklar_Pol2) / sizeof(
                                           bil_polinom); a++){
		if (deklar_Pol2[a].pangkat != penambahan[0].pangkat){
			if (deklar_Pol2[a].pangkat != penambahan[1].pangkat){
				if (deklar_Pol2[a].pangkat != penambahan[2].pangkat){
					penambahan[ikur].bilangan = deklar_Pol2[a].bilangan;
					penambahan[ikur].x = deklar_Pol2[a].x;
					penambahan[ikur].pangkat = deklar_Pol2[a].pangkat;
					ikur++;}
			}}}
	for (ikur = 0; ikur < sizeof(penambahan) / sizeof(
                                               bil_polinom); ikur++){
		cout << penambahan[ikur].bilangan << penambahan[ikur].x << penambahan[ikur].pangkat << " + ";}
	cout << endl;}
void perkalian(){
	for (int a = 0; a < sizeof(deklar_Pol1) / sizeof(
                                           bil_polinom); a++){
		for (int b = 0; b < sizeof(deklar_Pol3) / sizeof(
                                            bil_polinom); b++){
			pengalian[ik].bilangan = deklar_Pol1[a].bilangan * deklar_Pol3[b].bilangan;
			pengalian[ik].x = deklar_Pol1[a].x;
			pengalian[ik].pangkat = deklar_Pol1[a].pangkat + deklar_Pol3[b].pangkat;
			ik++;}}
	for (ik = 0; ik < sizeof(pengalian) / sizeof(
                                         bil_polinom); ik++){
		if (pengalian[ik].pangkat == 2){
			pengalian[ik].x = 'x';}
		cout << pengalian[ik].bilangan << pengalian[ik].x << pengalian[ik].pangkat << " + ";}
	cout << endl;}
void turunan(){
	//2x^n-1
	//2x^3 = 3.2x^2 = 6x^2
	for (int a = 0; a < sizeof(deklar_Pol2)/sizeof(bil_polinom); a++){
		if (deklar_Pol2[a].pangkat == 0){
			break;}
		else{
			penurunan[a].bilangan = deklar_Pol2[a].bilangan * deklar_Pol2[a].pangkat;
			penurunan[a].x = 'x';
			penurunan[a].pangkat = deklar_Pol2[a].pangkat - 1;}}
	for (int a = 0; a < sizeof(penurunan) / sizeof(bil_polinom); a++){
		cout << penurunan[a].bilangan << penurunan[a].x << penurunan[a].pangkat << " + ";}}


int main()
{
    cout << "P1 = 6x^8 + 8x^7 + 5x^5+ x^3 + 15" << endl;
    cout << "P2 = 3x^9 + 4x^7 + 3x^4 + 2xP^3 + 2x^2 + 10" << endl;
    cout << "P3 = x^2 + 5" << endl;
	pengisian_Polinom();
	cout << "Hasil Penjumlahan : " << endl;
	penjumlahan();
	cout << "Hasil Pengurangan : " << endl;
	pengurangan();
	cout << "Hasil Perkalian   : " << endl;
	perkalian();
	cout << "Hasil Penurunan   : " << endl;
	turunan();

    return 0;
}
