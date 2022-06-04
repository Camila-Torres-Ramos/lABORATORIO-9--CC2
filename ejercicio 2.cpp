#include <iostream>
#include <string>

using namespace std;

template<class T>
void operaciones(T n1, T n2){
    cout<<"Operacion suma: "<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
    cout<<"Operacion resta: "<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
    cout<<"Operacion multiplicacion: "<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
    cout<<"Operacion division: "<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
}

int main(){
    int a=35, b=7;
    operaciones(a,b);
    system ("pause");
    return 0;
}
