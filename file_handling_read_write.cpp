/*
    file handling will allows to create programs for writing th data onto files and read the data from file. We use following stream classes for handling 
    file handling programs.

    ofstream -- this stream/class used for writing the content onto a file
    ifstream -- this stream/class used for reading the content onto a file
    fstream -- this stream/class used for reading as well as writing the content
*/

//write the content onto a file

#include <iostream>
#include <fstream>

using namespace std;

/*
int main() {
    ofstream fout("k22zw.txt");
    if(!fout)
    cout<<"cannot open file";
    else{
        fout<<"hello deku\n";
        fout<<"my name is naruto";
    }
}
*/

// Reading the content of file


int main() {
    ifstream fin("k22zw.txt");
    if(!fin)
    cout<<"cannot open file\n";
    else{
        char ch;
        ch=fin.get();
        while(fin.eof()==0) {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();
}
