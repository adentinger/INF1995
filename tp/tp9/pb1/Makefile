########       AVR Project Makefile   	  ########
#####                                        #####
#####	   Makefile produit et ecrit par     #####
#####	Simon Barrette & Jerome Collin pour  #####
#####		 INF1995 - 2016		     #####
#####					     #####
#####	      Inspire de Pat Deegan -        #####
#####  Psychogenic Inc (www.psychogenic.com) #####
##################################################

# Ce Makefile vous permet de compiler des projets
# pour les microcontroleurs Atmel AVR sur 
# Linux ou Unix, en utilisant l'outil AVR-GCC. 
# Ce Makefile supporte C & C++

# Ce fichier Makefile peut etre transporte dans le dossier d'une librairie
# pour produire une librairie statique .a (en utilisant la cible "lib")
# ou dans le dossier d'un projet destiner a produire un executable (en
# en utilisant les cibles "all" et/ou "auto").

#####      Details specifique a la cible       #####
#####  Vous devez les adapter a votre projet   #####

# Les variables qui suivent vont etre différentes si c'est pour generer une 
# librairie que si c'est pour generer un executable.

### Variables utilisees pour generer une librairie et pour generer un executable

# Nom de votre projet
# (utilisez un seul mot, exemple: 'monprojet')
PROJECTNAME=tp9Test

# Nom de la cible à utiliser
# ('lib' pour 'make lib' ou 'compile' pour 'make compile')
RECIPE=compile

# Emplacement ou se trouve les fichiers sources (ex: ../src ./main . )
# Par defaut, c'est le dossier courant (".")
SRCDIR=.

# Emplacement de stockage temporaire des fichiers generes
# lors de la compilation (par defaut, creer un dossier 'gen' dans le
# repertoire courant)
GENDIR=gen

# Inclusions additionnels separes par des espaces
# (L'emplacement des fichiers .h utilises dans les fichers sources)
# (ex: /path/to/mydir /path/to/dir2) (utilisation avec le prefix -I)
INC=$(REPO_ROOT_PATH)/lib

### Variables spécifiques à la production d'un executable

# Librairies a lier (ex: mylib) (utilisation avec le prefix -l dans
# la generation de l'executable final)
LIBS=robot

# Chemins vers les dossiers contenants les librairies
# (ex: /path/to/libdir) (utilisation avec le prefix -L dans
# la generation de l'executable final)
LIBS_PATHS=$(REPO_ROOT_PATH)/lib

.PHONY: danse

danse: protocol.bin
	@echo "+--------------------------------------+";
	@echo "| CHARGEMENT DU MICROPROGRAMME SUR RAM |";
	@echo "+--------------------------------------+";
	${MAKE} -C ${LIBS_PATHS} clean lib DEBUG=-DDEBUG;
	${MAKE} -C ${SRCDIR}/transfert compile install DEBUG=-DDEBUG;
	$(REPO_ROOT_PATH)/serieViaUSB_ubuntu -e -h -s 8 -f $<;
	${MAKE} -C ${LIBS_PATHS} clean lib; ${MAKE} -C ${SRCDIR}/transfert clean;
	@echo "+-----------------------------------+";
	@echo "| CHARGEMENT DU PROGRAMME PRINCIPAL |";
	@echo "+-----------------------------------+";
	${MAKE} compile install;

%.bin: %.asmb
	$(REPO_ROOT_PATH)/progmem_ubuntu -o $@ $<



-include $(shell git rev-parse --show-toplevel)/Makefile_common.txt
