#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int *b;
	b = &a;
	
	cout<<"Alamat Variabel a adalah = "<<a<<endl;
	cout<<"Alamat Variabel a adalah = "<<&a<<endl;
	cout<<"Isi dari Variabel b adalah = "<<b<<endl;
	cout<<"Nilai yang tertampung dalam Variabel b adalah = "<<*b<<endl;
	
	return 0;
}
