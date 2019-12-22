# CrazyIDE
D�veloppement en C++ d'un IDE C++ portable.

## D�veloppeurs
- LeFan D'Ost

## Projet
### Fichiers de l'archive
	Archives/					# R�pertoire contenant des fichiers pouvant etre utiles lors du d�veloppement de l'IDE.
	doc/						# R�pertoire contenant la documentation de l'IDE g�n�r�e par Doxygen.
	include/					# R�pertoire contenant les fichiers d'en-tete de l'IDE.
		Inclusions.hpp			# Inclut en un seul fichier la totalit� des fichiers d'en-tete n�cessaires au bon d�roulement du programme de l'IDE.
		MacrosSysteme/			# R�pertoire contenant des fichiers d'en-tetes pour la compilation selon les OS.
			MacrosOS.hpp		# D�finit des macros selon le systeme d'exploitation sous lequel l'IDE est compil�e.
			MacrosCharSpec.hpp	# D�finit des macros de caracteres sp�ciaux selon l'OS.
			MacrosSysteme.hpp	# Inclut les deux fichiers pr�c�dents.
	src/						# R�pertoire contenant les fichiers source de l'IDE.
		main.cpp				# Contient le programme principal (la fonction main) du programme de l'IDE.
	obj/						# R�pertoire contenant les fichiers objets g�n�r�s lors de la compilation de l'IDE.
	Doxyfile					# D�crit la g�n�ration de la documentation Doxygen.
	make.bat					# Script MS-DOS permettant de lancer le Makefile sous Windows.
	Makefile					# Makefile permettant l'automatisation de la compilation du programme de l'IDE. Il est capable de marcher sous Linux et sous Windows, moyennant une modification selon l'OS.
	README.md					# Ce fichier.

### Librairies utilis�es lors du d�veloppement de CrazyIDE :
* TinyXML : Un parser XML simple, lien : http://www.grinninglizard.com/tinyxml/
