#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "Poems.hpp"


int main(){
    for(int num = 1; num < 11; num++){
        std::string filename = std::to_string(num) + ".txt";
        std::ifstream file(filename);

        if (!file.is_open()){
            std::cerr << "Error open file: " << filename << std::endl;
            break; //because withou something file we didn't have normal text poem
        }
    }
}
