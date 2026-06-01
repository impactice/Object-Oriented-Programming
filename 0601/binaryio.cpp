#include <iostream>
#include <fstream>
using namespace std;

int mian(){
    //바이너리 파일 쓰기
    int scores[5] = {90, 85, 70, 95, 80};

    ofstream fout("scores.bin", ios::binary);  // ← ios::binary 필수!
    fout.write((char*)(scores), sizeof(scores));

    fout.close();

    //바이너리 파일 읽어오기 
    int loaded[5];
    ifstream fin("scores.bin", ios::binary);
    fin.read((char*)loaded, sizeof(loaded));
    fin.close();

    for(int s:loaded) {
        cout<<s<<" ";
    }
}