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



moncode: main.cpp InventoryObject.cpp Menu.cpp Player.cpp Pokimac.cpp Carte.cpp Tile.cpp PokimacDealer.cpp AsciiGetter.cpp
	$(CC) -o $@ $^ 
	
moncode.o: main.cpp InventoryObject.h Menu.h Player.h Pokimac.h Carte.h Tile.h PokimacDealer.h AsciiGetter.h
	$(CC) -o $@ -c $< $(CFLAGS)

mesfonctions.o: InventoryObject.h InventoryObject.cpp Menu.h Menu.cpp Player.h Player.cpp Pokimac.h Pokimac.cpp Carte.h Carte.cpp Tile.h Tile.cpp PokimacDealer.h PokimacDealer.cpp AsciiGetter.h AsciiGetter.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o
	rm -rf moncode

# mais en plus, on va effacer les fichiers .o

# On peut en faire encore plus ; dans certains cas, par exemple, certaines
# regles peuvent etre omises, car définies implicitement.
#
# Si vous voulez en connaitre plus, pour l'instant, cherchez en ligne.
#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
#git push https://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@github.com/Banjomaestroo/projProgIMAC1.git
