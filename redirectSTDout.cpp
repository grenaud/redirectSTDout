/*
 * redirectSTDout
 * Date: May-10-2022 
 * Author : Gabriel Renaud gabriel.reno [at sign here ] gmail.com
 *
 */

#include <iostream>
#include <fstream>


using namespace std;

int main (int argc, char *argv[]) {

    fstream fout;
    fout.open("test.txt", ios::out);
    string line;
    cout<<"Hello world 1!"<<endl;

    streambuf* sbcout = cout.rdbuf(); 
    streambuf* sbfile = fout.rdbuf();
 
    cout.rdbuf(sbfile);
 
    cout<<"Hello world 2!"<<endl;
    
    cout.rdbuf(sbcout);

    cout<<"Hello world 3!"<<endl;

    fout.close();
    
    return 0;    
}

