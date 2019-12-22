#ifndef MACROSCMDOS_HPP
#define MACROSCMDOS_HPP

#include "MacrosOS.hpp"

// Définition des macros pour les fonctions DOS/Shell.
#if defined (WINDOWS)
	#define DEL "del" /*!< Cette macro définit la fonction DOS pour supprimer un fichier. */
	#define LIST "dir /b /s" /*!< Cette macro définit la fonction DOS pour lister des fichiers. */
#elif defined (POSIX) || defined (MACOS)
	#define DEL "rm -f" /*!< Cette macro définit la fonction Bash pour supprimer un fichier. */
	#define LIST "ls -a" /*!< Cette macro définit la fonction Bash pour lister des fichiers. */
#endif

#include <sstream>
#include <cstdlib>
#define DELETEAFILEFORME( file ) \
		std::ostringstream ossDelFile; \
		ossDelFile << DEL << " " << file; \
		system(ossDelFile.str().c_str());

#endif // MACROSCMDOS_HPP