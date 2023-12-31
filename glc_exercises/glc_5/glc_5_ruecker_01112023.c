/*
Gegeben sei folgender String:
string hallo = "Dies ist meine neue Welt";
Suchen Sie mit einer Stringfunktion, ob in diesem String "neue" vorkommt
und geben die Position aus.
Testen Sie auch den String: "Meine heile Welt".

Schreiben Sie eine Funktion pruefeZeichen, die einen String, ein Zeichen und eine Anzahl übergeben bekommt.
Die Funktion prüft, ob das Zeichen in dem String genau Anzahl oft vorkommt.
Falls nein, gibt sie false zurück, sonst true.
Der Aufruf der Funktion ist wie folgt:
bool ergebnis = pruefeZeichen("banane", 'a', 2);
if (ergebnis == true)
    cout "Passt";
else
   cout "Passt nicht";
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <stdbool.h>

int finde_string(char text[], char string[]){
    int fundstelle;
    for(int i = 0; i<strlen(text); ++i){
        if(string[0] == text[i]){
            fundstelle = i+1;
            int temp_found_character = 1;
            while(temp_found_character != strlen(string)){
                if(string[temp_found_character] != text[i+1]){
                    break;    
                }
                ++i;
                ++temp_found_character;
            }
            if(temp_found_character == strlen(string)){
                printf("Der String \"%s\" wurde in dem Text an der %d. Stelle gefunden.\n", string, fundstelle);
                return fundstelle;
            }
        }
        
    }
    printf("Der String \"%s\" wurde in dem Text nicht gefunden.\n", string);
    return -1;
}

bool pruefeZeichen(char string[], char zeichen, unsigned int anzahl){
    int zeichenanzahl = 0;
    for(int i = 0; i < strlen(string); ++i){
        if(string[i] == zeichen){
            zeichenanzahl += 1;
        }
    }
    if(anzahl == zeichenanzahl) return true;
    return false;
}


int main(void){
    char hallo2[] = "Dies ist meine neue Welt";

    char neue[] = "neue";

    

    finde_string(hallo2, neue);

    char meine_heile_welt[] = "Meine heile Welt";

    finde_string(hallo2, meine_heile_welt);

    char banane[] = "banane";

    bool ergebnis = pruefeZeichen(banane, 'a', 2);
    if (ergebnis == true)
        printf("Passt\n");
    else
        printf("Passt nicht\n");

    return 0;
}