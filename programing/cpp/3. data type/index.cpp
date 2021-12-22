#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main(){
    
    int _int = 1;
    float _float = 1.5;
    char _char = 'a';
    string _string = "Hello world";
    bool _bool = true;

    cout<<"int = "<<_int<<" [int = intiger]\n";
    cout<<"float = "<<_float<<" [float = decimal]\n";
    cout<<"char = "<<_char<<" [char = character]\n";
    cout<<"string = "<<_string<<" [string = multi character, message or text]\n";
    cout<<"bool = "<<_bool<<" [bool = logic val such as 'true' and 'false or 1 and 0']\n";

    system("pause");
}