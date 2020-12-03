# Control variables
RDBASE = /export/home/gduarter/local/rdkit-Release_2019_09_1
BOOST = /export/home/gduarter/local/boost
CXX = g++
CXXFLAGS = -Wall -g #-std=c++11 
CPPFLAGS = -I$(RDBASE)/Code -I$(RDBASE)/Extern -I$(BOOST)/include
LDFLAGS = -L$(RDBASE)/lib -L$(BOOST)/lib 
LDLIBS = -lstdc++ -lRDKitGraphMol -lRDKitRDGeneral 
# Targets and dependencies
# Executable
rdmol2: rdmol2.o smiles.o
# Other targets
rdmol2.o: rdmol2.cpp smiles.h
smiles.o: smiles.cpp smiles.h
clean:
	rm rdmol2 *.o

