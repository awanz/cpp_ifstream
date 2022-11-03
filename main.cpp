#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char st[255];
    ifstream f;
    f.open("awan.txt");
    while(!f.eof()){
        f.getline(st, 255);
        cout << st << endl;
    }
    f.close();
    return 0;
}
