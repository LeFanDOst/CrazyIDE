# CrazyIDE
Développement en C++ d'un IDE C++ portable.

## Développeurs
- LeFan D'Ost

## Projet
### Fichiers de l'archive
	Archives/					# Répertoire contenant des fichiers pouvant etre utiles lors du développement de l'IDE.
	doc/						# Répertoire contenant la documentation de l'IDE générée par Doxygen.
	include/					# Répertoire contenant les fichiers d'en-tete de l'IDE.
		Inclusions.hpp			# Inclut en un seul fichier la totalité des fichiers d'en-tete nécessaires au bon déroulement du programme de l'IDE.
		MacrosSysteme/			# Répertoire contenant des fichiers d'en-tetes pour la compilation selon les OS.
			MacrosOS.hpp		# Définit des macros selon le systeme d'exploitation sous lequel l'IDE est compilée.
			MacrosCharSpec.hpp	# Définit des macros de caracteres spéciaux selon l'OS.
			MacrosSysteme.hpp	# Inclut les deux fichiers précédents.
	src/						# Répertoire contenant les fichiers source de l'IDE.
		main.cpp				# Contient le programme principal (la fonction main) du programme de l'IDE.
	obj/						# Répertoire contenant les fichiers objets générés lors de la compilation de l'IDE.
	Doxyfile					# Décrit la génération de la documentation Doxygen.
	make.bat					# Script MS-DOS permettant de lancer le Makefile sous Windows.
	Makefile					# Makefile permettant l'automatisation de la compilation du programme de l'IDE. Il est capable de marcher sous Linux et sous Windows, moyennant une modification selon l'OS.
	README.md					# Ce fichier.

### Librairies utilisées lors du développement de CrazyIDE :
* TinyXML : Un parser XML simple, lien : http://www.grinninglizard.com/tinyxml/
