#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string nombres[3] = {"Juan Jose", "Luis Peres", "Ana Maria", };
	int Not[4];
	Not[0]=0;Not[1]=0;Not[2]=0;Not[3];
	int op, i, Prome, SumaNota;
	char bucle='a';
	while (bucle!='n'||bucle!='n'){
		cout<<"Listado de alumnos"<<endl;
		for(i=0;i<3;i++){
			cout<<i+1<<". "<<nombres[i]<<endl;
		}
		cout<<"Escoja al estudiante "<<endl;
		cin>>op;
		switch(op){
			case 1:
				Not[0]=67;Not[1]=96;Not[2]=98;Not[3]=88;
				break;
			case 2:
				Not[0]=54;Not[1]=59;Not[2]=79;Not[3]=59;
				break;
			case 3:
				Not[0]=79;Not[1]=88;Not[2]=99;Not[3]=82;
				
				break;
			
		
		}
		cout<<"Alumno: "<<nombres[op-1]<<endl;
		for (i=0;i<4;i++){
			cout<<"Nota "<<i+1<<": "<<Not[i]<<endl;
		}
		cout<<endl;
		while(op!=0){
			cout<<"Que deseas realizar ?"<<endl;
			cout<<"1.Promedio"<<endl;
			cout<<"2.Nota Maxima "<<endl;
			cout<<"3.Nota Minima "<<endl;
			cout<<"0.SALIR DEL MENU"<<endl;
			cin>>op;
			switch(op){
				case 1:
					SumaNota=Not[0]+Not[1]+Not[2]+Not[3];
					Prome=SumaNota/4;
					cout<<"EL Promdeio del alumno es de: "<<Prome<<endl;
					break;
				case 2:
					if(Not[0]>Not[1]&&Not[0]>Not[2]>Not[3]){
						cout<<"La Nota Maxima es de  : "<<Not[0]<<endl;
					}
					else{
						if(Not[0]>Not[1]&&Not[0]>Not[2]>Not[3]){
							cout<<"La Nota Maxima es de  : "<<Not[1]<<endl;
						}
						else{
							cout<<"La Nota Maxima es de  : "<<Not[2]<<endl;
						}
					}
					break;
				case 3:
					if(Not[0]<Not[1]&&Not[0]<Not[2]<Not[3]){
						cout<<"La Nota Minima es de  :  "<<Not[0]<<endl;
					}
					else{
						if(Not[1]<Not[0]&&Not[1]<Not[2]<Not[3]){
							cout<<"La Nota Minima es de  : "<<Not[1]<<endl;
						}
						else{
							cout<<"La Nota Minima es de  : "<<Not[2]<<endl;
						}
					}
					break;
				
			}
			cout<<endl;
		}
	cout<<"Quieres ver otro estudiante? Y/N"<<endl;
	cin>>bucle;
	cout<<endl;
	}
	system("pause");
	return 0;
}
