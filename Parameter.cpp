#include <iostream>
using namespace std;

void tambah (int *angka){
	*angka +=20;
}

int main(){
	int nilai = 10;
	cout<<"Nilai Variabel nilai adalah = "<<nilai<<endl;
	tambah (&nilai);
	cout<<"Nilai Variabel nilai adalah = "<<nilai<<endl;
	return 0;
}
