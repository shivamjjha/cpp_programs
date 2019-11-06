/*
    Program that converts user def string obj to c-style string and vice versa
*/
#include<iostream>
#include<cstring>

using namespace std;

class String{
    char str[50];
    
    public:
        String();
        String(char *);
        operator char*();//char* means char[], since '*' means pointer-to
        void display();
};

String:: String(){
    str[0] = '\0';
}

String:: String(char *c){
    strcpy(str, c);
}

//conversion operator
String::operator char *(){
    return str;
}

void String:: display(){
    cout << str << endl;
}

int main(){

    
    String s1;
    char cstr[] = "Shivam";
    s1 = cstr;
    s1.display();

    String s2 = "Upinder Jit";
    cout << static_cast<char*>(s2) << endl;
    // same as s2.display(), since also uses conversion operator func
    
    return 0;
}