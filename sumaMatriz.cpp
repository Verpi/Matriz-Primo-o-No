#include<iostream>

using namespace std;

int main(){
	int matriz[100][100];
	int fil;
	int col;
	int i,j;
	int sum;
	bool pri=true;
	
	cout<<"Ingrese el numero de filas: ";
	cin>>fil;
	cout<<"Ingrese el numero de columnas: ";
	cin>>col;
	
	for(i=0; i<fil; i++){
		for(j=0; j<col; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	} 
	
	for(i=0; i<fil; i++){
		for(j=0; j<col; j++){
			sum += matriz[i][j];
		}
	}
	
	cout<<"\n";
	cout<<"La suma de todos los elementos es: "<<sum<<"\n";
	cout<<endl;
	
	for(i=2; i<sum; i++){
		if(sum % i ==0) pri =false;
	}
	if (pri==true)
	cout<<"el resultado de la suma de la matriz es primo ";
	else cout<<"el resultado de la suma de la matriz NO es primo "<<"\n"<<endl;
	
	cout<<"La matriz que se ingreso es: "<<endl;
	
	for(i=0; i<fil; i++){
		for(j=0; j<col; j++){
			cout<<"["<<matriz[i][j]<<"]";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
