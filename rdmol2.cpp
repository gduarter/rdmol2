
#include <iostream>
#include <string>
#include <vector>
#include "smiles.h"

//#include <GraphMol/GraphMol.h>
//#include <GraphMol/FileParsers/MolSupplier.h>
//#include <GraphMol/FileParsers/MolWriters.h>


int main(int argc, char *argv[]){

    // Check number of arguments
    if (argc < 2 || argc > 2){
        std::cerr << "Usage: " << argv[0] << " NAME_OF_SMILES_FILE" << std::endl;
        return 1;
    }

    // Assign argument to variable
    std::string FILENAME = argv[1];;

    // declare SMILES container and read file
    SMILES  all_mols;
    all_mols.read_input( FILENAME );

    // test: print smiles
    unsigned int num_mols = all_mols.retrieve_num_mol();
    for (unsigned int i = 0; i < num_mols; ++i){
        std::cout << all_mols.retrieve_smiles_by_index(i) << std::endl;
    }

    return 0;
}




