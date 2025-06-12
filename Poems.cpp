#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <string>
#include "Poems.hpp"


int main(){
    //loop for every line
    for(int i = 1; i < 15; i++){

        int const SIZE = 11;
        int num;

        srand(time(NULL));

        //realise random number needed text
        for(int q = 0; q < SIZE; q++){
            num = rand()%10;
        }


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
