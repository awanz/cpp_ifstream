#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
    char st[255];
    ifstream f;
    f.open("awan.txt");
    if(f.peek() > 0){
        while(!f.eof()){
            f.getline(st, 255);
            cout << st << endl;
        }
    }else{
        cout << "File can't open or empty" << endl;
    }
    f.close();
    return 0;
}