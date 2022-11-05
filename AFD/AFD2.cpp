#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
		
		enum TEstado{
			q0, q1, q2, q3 , q4, q5, q6 ,q7
		};	
		
		TEstado Estado;
		string Cadena;
		int Simbolo,i,longitud;
		
		//bool EsNumero;
		i=longitud=0;
		Estado=q0;
		
		//EsNumero=false;
		cout<<"Ingrese la palabra shjoa22 o SHJOA22 o la combinacion en mayusculas y minusculas: "; // SH = Shelly, J = Justo, O = Oliver, A = Alejandra
		//cout<<;
		cin>>Cadena;
		
		longitud=Cadena.size();
		
		while(longitud>i){
			Simbolo= Cadena[i];
			switch(Estado){
			case q0:
				if(Simbolo== 'S' || Simbolo== 's' ){
					Estado =q1;
				}else{
					Estado=q0;
					//cout<<"Cadena NO valida";
				}break;
			case q1:
				if(Simbolo== 'H' || Simbolo== 'h' ){
					Estado=q2;
				}else{
					Estado=q0;
					//cout<<"Cadena NO valida";
				}break;
			case q2:
				if(Simbolo== 'J' || Simbolo== 'j' ){
					Estado=q3;
				}else{
					Estado=q0;
					//cout<<"Cadena NO valida";
				}break;
			case q3:
				if(Simbolo== 'O' || Simbolo== 'o' ){
					Estado=q4;	
				}else{
					Estado=q0;
					//cout<<"Cadena NO valida";
				}break;
			case q4:
				if(Simbolo== 'A' || Simbolo== 'a' ){
					Estado=q5;
				}else{
					Estado=q0;
					//cout<<"Cadena NO valida";
				}break;
			case q5:
				if(Simbolo== '2' ){
					Estado=q6;
				}else{
					Estado=q0;
					   //cout<<"Cadena NO valida";
				}break;
			case q6:
				if(Simbolo== '2' ){
					Estado=q7;
				}else{
					Estado=q0;
					
				}break;
			case q7:
				if((Simbolo>='0'||Simbolo<='9')||(Simbolo>='c'||Simbolo>='z')||(Simbolo>='C'||Simbolo>='Z')||Simbolo=='!'||Simbolo=='.'||Simbolo==','||Simbolo==';'||Simbolo=='/'||Simbolo=='+'||Simbolo=='*'||Simbolo=='-'
					||Simbolo=='@'||Simbolo=='#'||Simbolo=='$'||Simbolo=='%'||Simbolo=='&'||Simbolo=='('||Simbolo==')'||Simbolo=='='||Simbolo=='¿'||Simbolo=='?'
					||Simbolo=='¡'||Simbolo==':'||Simbolo=='"'||Simbolo=='|'||Simbolo==' '){
					cout<<"ERROR HAY MAS CARACTERES AGREGADO->"+Cadena;
					Estado=q0;
				}else{
					cout<<"Cadena valida";
				}break;
			}
			i++;
		}
		if(Estado==q7){
			cout<< " ";
			cout<<"Cadena Valida";
		}else{
				cout<< " ";
			cout<<" Cadena NO valida";
		}
		return 0;
	}
