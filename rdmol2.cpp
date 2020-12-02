
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

//#include <GraphMol/GraphMol.h>
//#include <GraphMol/FileParsers/MolSupplier.h>
//#include <GraphMol/FileParsers/MolWriters.h>


int main(int argc, char *argv[]){

    // Check number of arguments
    if (argc < 2 || argc > 2){
        std::cerr << "Usage: " << argv[0] << " NAME_OF_SMILES_FILE" << std::endl;
        return 1;
    }

    std::string FILENAME = argv[1];
    std::ifstream file(FILENAME);
    if (file.is_open()){
        std::string line{};
        while (std::getline(file, line)){
            std::cout << line << std::endl;
        }
    }

    return 0;
}



