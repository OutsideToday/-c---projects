#include <cstdlib>
#include <fstream>
#include <iostream>
#include "header.h" 


using namespace std;

int main() {    
    readTextFile();
    writeTextFile();
}

void writeTextFile(){
    ofstream ofs;
    ofs.open("C:\\Users\\1bctt\\OneDrive\\!c++ projects\\lab3-ReadWrite\\text.txt");
    ofs << "john";
    ofs <<"\n";
    ofs << "Mary";
    ofs <<"\n";
    ofs << "Paul";
    ofs <<"\n";
    ofs << 1000;
    ofs.close();    
}
void readTextFile(){
    
    ifstream ifs;
    ifs.open("C:\\Users\\1bctt\\OneDrive\\!c++ projects\\lab3-ReadWrite\\text.txt");
    string a, b, c;
    int x;
    ifs >> a >> b >> c >> x;

    ifs.close();
    
    cout << a <<" " << b << " " << c << " " << x;    
    
}
