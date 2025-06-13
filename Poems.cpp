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
        int firstText = 1;
        int lastText = 10;
        int numText = rand() % (lastText - firstText + 1) + firstText;

        //make filename for open needed txt files
        std::string filename = std::to_string(numText) + ".txt";
        std::ifstream file(filename);

        if (!file.is_open()){
            std::cerr << "Error open file: " << filename << std::endl;
            break;//because withou something \
            file we didn't have normal text poem
        }

        //make new paraments for text
        //std::string verse ,save text verse from TextOldPoem for making TextNewPoem
        std::string verse;
        wchar_t TextOldPoem[60][14];
        wchar_t TextNewPoem[60][14];

        int QuantityVerses = i;

        const unsigned max = -1;

        while(file && --QuantityVerses){
            file.ignore(max, '\n');
        }
        std::getline(file, verse);

        std::cout << verse << "  " << filename << std::endl;

    }
}
