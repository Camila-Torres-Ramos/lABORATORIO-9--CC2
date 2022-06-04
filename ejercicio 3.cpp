#include <iostream>
#include <string>

using namespace std;

template<class T>
class char_string{
    private:
        T x;
    public:
        char_string(T);
        T getX(){
            return x;
        }
};

template<class T>
char_string<T>::char_string(T x){
    this->x = x;
}

int main(){
    char_string<string>apellido1("torres");
    char_string<char>letra1('j');
    cout<<letra1.getX()<<apellido1.getX()<<"@unsa.edu.pe"<<endl;

    char_string<string>apellido2("zavala");
    char_string<char>letra2('c');
    cout<<letra2.getX()<<apellido2.getX()<<"@unsa.edu.pe"<<endl;

    char_string<string>apellido3("ramos");
    char_string<char>letra3('j');
    cout<<letra3.getX()<<apellido3.getX()<<"@unsa.edu.pe"<<endl;

    char_string<string>apellido4("belaunde");
    char_string<char>letra4('c');
    cout<<letra4.getX()<<apellido4.getX()<<"@unsa.edu.pe"<<endl;

    char_string<string>apellido5("cespedes");
    char_string<char>letra5('a');
    cout<<letra5.getX()<<apellido5.getX()<<"@unsa.edu.pe"<<endl;

    system ("pause");
    return 0;
}
