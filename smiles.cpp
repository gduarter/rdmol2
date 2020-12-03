
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "smiles.h"

// Methods
void SMILES::read_input( std::string FILENAME ){
    std::ifstream file(FILENAME);
    
    if (file.is_open()){
        std::string line{};
        while (std::getline(file, line)){
            smiles.push_back(line.substr(0, line.find(' ')));
            titles.push_back(line.substr(1, line.find(' ')));
        }
    } else {
        std::cerr << "Cannot open input file (";
        std::cerr << FILENAME << ")!" << std::endl;
    }
}

std::string SMILES::retrieve_smiles_by_index( unsigned int idx ){
    return this->smiles[ idx ];
}

std::string SMILES::retrieve_title_by_index( unsigned int idx ){
    return this->titles[ idx ];
}

unsigned int SMILES::retrieve_num_mol(){
    return smiles.size();
}

// Default constructor
SMILES::SMILES() {
}

//Default destructor
SMILES::~SMILES(){
    // The method below creates tmp vector that gets all attributes
    // of the vector to be released from memory. 
    std::vector <std::string>().swap(smiles); 
    std::vector <std::string>().swap(titles); 
}

// Copy constructor
SMILES::SMILES(const SMILES &object){
    this->smiles = object.smiles;
    this->titles = object.titles;
}



