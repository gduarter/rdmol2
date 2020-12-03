#ifndef _SMILES_H_
#define _SMILES_H_

#include <fstream>
#include <string>
#include <vector>

class   SMILES {

private:
    std::vector <std::string>   smiles;
    std::vector <std::string>   titles;

public:
    // Methods and attributes
    void                        read_input( std::string FILENAME );
    std::string                 retrieve_smiles_by_index( unsigned int idx );
    std::string                 retrieve_title_by_index( unsigned int idx );
    unsigned int                retrieve_num_mol();

    // Constructors and destructor
    SMILES();                     // Default constructor
    SMILES(const SMILES &object); // Copy constructor 
    ~SMILES();                    // Destructor    

};

#endif 



