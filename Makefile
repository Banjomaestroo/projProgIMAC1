# makefile2 correspondant a l'exercice 2, TP8

# Dans un fichier makefile, on peut utiliser de variables.
# monvar = valeur    pour affecter
# $(monvar)          pour recuperer la valeur

# De plus, il y a quelques variables internes, qu'on peut utiliser:
# $@ pour nom de cible
# $< pour nom de la premiere dependance
# $^ pour toute la liste des dépendances

# le suivant alors fait precisement la meme chose que makefile1:


CC=g++
CFLAGS=-Wall -ansi



moncode: moncode.o mesfonctions.o
	$(CC) -o $@ $^
	

moncode.o: main.cpp InventoryObject.h Menu.h Player.h Pokimac.h
	$(CC) -o $@ -c $< $(CFLAGS)

mesfonctions.o: InventoryObject.h InventoryObject.cpp Menu.h Menu.cpp Player.h Player.cpp Pokimac.h Pokimac.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o

# mais en plus, on va effacer les fichiers .o

# On peut en faire encore plus ; dans certains cas, par exemple, certaines
# regles peuvent etre omises, car définies implicitement.
#
# Si vous voulez en connaitre plus, pour l'instant, cherchez en ligne.
