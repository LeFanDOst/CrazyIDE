Profile=no
TinyXMLUseSTL=no

DirSrc=src
DirObj=obj
DirLib=lib

ifeq ($(Debug),yes)
	DebugFlags= -g
else
	DebugFlags=
endif

ifeq ($(Profile),yes)
	ProfilingFlags= -pg
else
	ProfilingFlags=
endif

ifeq ($(TinyXMLUseSTL),yes)
	UseSTL= -DTIXML_USE_STL
else
	UseSTL=
endif

CompiloLib=ar
Preproc=-c $(DebugFlags) $(ProfilingFlags) $(UseSTL) -Wall -Wextra -Werror -Wfatal-errors -O3 -fexceptions -std=c++11
LiensLib=-rv
DrapeauxPreproc=
DrapeauxLiens=$(DrapeauxPreproc)

ifeq ($(Linux),yes)
	RM=rm -f
	cmdClean=$(RM) $(DirObj)/*.o
	Extension=.lib
else
	RM=del
	cmdClean=$(RM) $(DirObj)\*.o
	Extension=.a
endif

Src=$(wildcard $(DirSrc)/*.cpp)
Obj=$(patsubst $(DirSrc)/%.cpp,$(DirObj)/%.o, $(Src))
Exec=libTinyXML$(Extension)

ifeq ($(Linux),yes)
	cmdMrProper=$(RM) $(DirLib)/$(Exec)
else
	cmdMrProper=$(RM) $(DirLib)\$(Exec)
endif

all: $(DirLib)/$(Exec)

$(DirLib)/$(Exec): $(Obj)
	$(CompiloLib) $(LiensLib) $@ $^ $(DrapeauxLiens)

$(DirObj)/%.o: $(DirSrc)/%.cpp
	$(Compilo) $(Liens) $@ $< $(Preproc) $(DrapeauxPreproc)

.PHONY: clean mrproper

clean:
	$(cmdClean)

mrproper:
	$(cmdMrProper)