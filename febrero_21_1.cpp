#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	int height, weidth;
	ifstream infile;
	infile.open("measures.dat");
	if ( !infile){
		cout<<"No se puede abrir el archivo de entrada"<<endl;
		return 1;
	}
	infile >>height>>weidth;
	cout<<"Para altura: "<<height<<" y ancho: "<<weidth<<endl;
	cout<<"El area es: "<<height*weidth;
	return 0;
}

