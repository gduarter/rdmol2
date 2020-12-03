#ifndef _MOLS3D_H_
#define _MOLS3D_H_

// Standard libraries
#include <string>
#include <vector>

// RDKit stuff
#include <GraphMol/GraphMol.h>

class Mols3D {
private:
    std::vector <RDKit::ROMol> mols;
public:
    void       create_3d_molecule(std::string smiles, bool toCharge);
    void       push_back_molecule(RDKit::ROMol mol);
    void       name_mol_by_index(int idx);

    // Constructors and destructor
    Mols3D();
    Mols3D(const Mols3D &object);
    ~Mols3D();

};


#endif
