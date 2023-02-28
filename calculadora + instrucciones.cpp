#include <iostream>
using namespace std;
//el string se usa para definir como cadena o algo asi si usas este ya no es nesesario el int
//el int nose pero siempre es nesesario para una variable
//cin es para darle un valor a una variable
//switch ya sabes cagada se usa para multiples condicionales
//el case simpre es el valor que tomara lo que esta dentro del parentesis del switch
//el default se usa para otros valores del switch en este caso si no es 1,2,3,4 llega al default
//break simpre va al finalizar la tarea de un case
//el if  ejemplo si a es igual a cero entoces escribres entre {} lo que quieres que pase y 
// si no cumple al finalizar el {} pones else seguido de {}
 int main(){
   string as;
    int n1;
    int n2;
    int op;
    int res;
    cout<<"digite el primer numero"<<endl;
    cin>> n1;
    cout<<"digite el segundo numero"<<endl;
    cin>> n2;
    cout<<"ponga el numero del operador matematico correspodiente(1:+ ; 2:- ; 3:* ; 4:/)"<<endl;
    cin>> op;
    switch (op){
        case 1:
        res=n1+n2; break;
        case 2:
        res=n1-n2; break;
        case 3:
        res=n1*n2; break;
        case 4:
        if (n2==0) {
           op=2211;
           as = "no se puede definir"; break; 
		} else {
		   res=n1/n2; break;
		}
		break;
        res=n1/n2; break;
        default:
        op=2211;
        as = "no eligio un operador valido"; break;
    }
    if (op==2211){
      cout<<as<<endl;
    } else {
    cout<< "la respuesta es "<<res<<endl;
    }
    return 0;
 }
