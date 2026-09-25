#include <iostream>
using namespace std;
int main()
{
	int opt;
	float n1, n2, result;
	cout<<"BIENVENIDOS A LA CALCULADORA"<<endl;
	cout<<"Seleccione una opcion"<<endl;
	cout<<"1. suma"<<endl;
	cout<<"2. resta"<<endl;
	cout<<"3. multiplicacion"<<endl;
	cout<<"4. division"<<endl;
	
	cout<<"Ingrese una opcion: ";
	cin>>opt;
	if (opt<0 && opt<4)
	{
		cout<<"Numero invalido, ingrese un numero valido: ";
	}
	cout<<"Ingrese el primer numero:"<<endl;
	cin>>n1;
	if(n1<0 || n2>100)
	{
		cout<<"Numero invalido, ingrese un numero valido"<<endl;
	}
	else 
	{
		cout<<"Ingrese el segundo numero: "<<endl;
		cin>>n2;
		if (n2<0 || n2>100)
		{
			cout<<"Numero invalido, ingrese un numero valido";
		}
		else
		{
			switch (opt)
			{
				case 1:
					result=n1+n2;
					cout<<"El resultado es: "<<result;
				break;
				case 2:
					result=n1-n2;
					cout<<"El resultado es: "<<result;
				break;
				case 3:
					result=n1*n2;
					cout<<"El resultado es: "<<result;
				break;
				case 4:
					if(n2==0)
					cout<<"No se puede dividir entre 0";
					else
					{
						result=n1/n2;
					    cout<<"El resultado es: "<<result;
				    }
				break;
				default:
				cout<<"Opcion invalida, ingrese un numero valido";
			}
		}
	}
	return 0;
}

