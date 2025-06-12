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



        std::string filename = std::to_string(num) + ".txt";
        std::ifstream file(filename);

        if (!file.is_open()){
            std::cerr << "Error open file: " << filename << std::endl;
            break; //because withou something file we didn't have normal text poem
        } else{
            std::cout << filename << std::endl;
        }

    }
}
