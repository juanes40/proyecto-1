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
	cout<<"2da vez git"<<endl;
	infile >>height>>weidth;
	cout<<"Para altura del sujeto: "<<height<<" y ancho: "<<weidth<<endl;
	cout<<"Master 1"<<endl;
	cout<<"El a´rea es: "<<height*weidth;
	return 0;
}

