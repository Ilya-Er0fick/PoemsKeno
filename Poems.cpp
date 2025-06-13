#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <string>
#include "Poems.hpp"


int main(){
    srand(time(NULL));
    //loop for every line
    for(int i = 1; i < 15; i++){
        //realise random number needed text
        int first = 1;
        int last = 10;
        int num = rand() % (last - first + 1) + first;

        //make filename for open needed txt files
        std::string filename = std::to_string(num) + ".txt";
        std::ifstream file(filename);

        if (!file.is_open()){
            std::cerr << "Error open file: " << filename << std::endl;
            break;//because withou something \
            file we didn't have normal text poem
        } else{
            std::cout << filename << std::endl;
        }
        //make new paraments for text
        //std::vector<wchar_t> verse ,save text verse \
        from TextOldPoem for making TextNewPoem
        std::vector<wchar_t> verse;
        wchar_t TextOldPoem[60][14];
        wchar_t TextNewPoem[60][14];
    }
}
