export Linux=no
export Debug=yes

DirSrc=src
DirObj=obj
DirLibTinyXML=lib/TinyXML

export Compilo=g++
ifeq ($(Debug),yes)
	Preproc=-c -g -Wall -Wextra -Werror -Wfatal-errors -O3 -fexceptions -std=c++11
else
	Preproc=-c -Wall -Wextra -Werror -Wfatal-errors -O3 -fexceptions -std=c++11
endif
export Liens=-o
DrapeauxPreproc=
DrapeauxLiens=$(DrapeauxPreproc) -L$(DirLibTinyXML)/lib -lTinyXML

ifeq ($(Linux),yes)
	RM=rm -f
	cmdClean=$(RM) $(DirObj)/*.o
	Extension=
else
	RM=del
	cmdClean=$(RM) $(DirObj)\*.o
	Extension=.exe
endif

Src=$(wildcard $(DirSrc)/*.cpp)
Obj=$(patsubst $(DirSrc)/%.cpp,$(DirObj)/%.o, $(Src))
Exec=main$(Extension)

ifeq ($(Linux),yes)
	DroitsExec=chmod u+x $(Exec) ./$(Exec)
	cmdRun=./$(Exec)
else
	DroitsExec=
	cmdRun=$(Exec)
endif

all: $(Exec)

$(Exec): $(Obj)
	@(cd $(DirLibTinyXML) && $(MAKE))
	$(Compilo) $(Liens) $@ $^ $(DrapeauxLiens)

$(DirObj)/main.o: include/Inclusions.hpp

$(DirObj)/%.o: $(DirSrc)/%.cpp
	$(Compilo) $(Liens) $@ $< $(Preproc) $(DrapeauxPreproc)

.PHONY: clean mrproper run

clean:
	$(cmdClean)

mrproper:
	$(RM) $(Exec)

run:
	$(DroitsExec)
	$(cmdRun)