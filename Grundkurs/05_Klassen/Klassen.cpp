/*
* @author Adrian Weidig
* Contact: theheadless@gmx.net
*/
#include "Klassen.h"

// Wir m�ssen wie gewohnt die Datei der Klasse
// inkludieren,
#include "Mensch.h"
#include <iostream>
#include "Hund.h"
using namespace std;

void grundlagen_klassen() {
	Mensch olaf;

	// Man beachte, dass beide wieder die klasssichen Initialwerte
	// beim Zugriff erhalten, au�er diese sind als default zugewiesen.
	cout << "Alter: " << olaf.alter << endl;
	cout << "Name: " << olaf.name << endl;

	// Diese k�nnen wie gewohnt angepasst und ver�ndert werden
	olaf.alter = 20;
	olaf.name = "Olaf";

	cout << "Alter: " << olaf.alter << endl;
	cout << "Name: " << olaf.name << endl;

	// Besser ist es �ber Methoden auf Attribute zuzugreifen
	olaf.sprechen();

	// Weitere Objekte k�nnen �quivalent erzeugt werden und verhalten
	// sich mittels der Methoden entsprechend
	Mensch bernd;
	bernd.alter = 30;
	bernd.name = "Bernd";

	bernd.sprechen();

}

void konstruktoren_klassen() {
	// Konstruktoren machen den Sinn hinter Objekten erst erkenntlich
	Hund dackel("Dackel", 2);
	cout << "Rasse: " << dackel.get_rasse() << " | Alter: " << dackel.get_alter() << endl;

	// Rasse k�nnen wir nicht �ndern, da es keine M�glichkeit gibt
	// darauf zuzugreifen. Jedoch auf das Alter.
	// Hier wird also das Alter auf das bereits vorhandene +1 ge�ndert. 
	dackel.set_alter(dackel.get_alter() + 1);

	cout << "Rasse: " << dackel.get_rasse() << " | Alter: " << dackel.get_alter() << endl;

	// Wird keine () angegeben, so wird schlichtweg der sogenannte default Konstruktor
	// ausgef�hrt. Siehe Hund.h --> Aufruf von Hund() ohne Parametern in Klammern.
	// ACHTUNG: Wird terrier() genutzt so geht C++ von einem Funktionsaufruf aus
	Hund terrier;
	
	cout << "Rasse: " << terrier.get_rasse() << " | Alter: " << terrier.get_alter() << endl;

	// Rasse kann nicht gesetzt werden
	terrier.set_alter(1);

	cout << "Rasse: " << terrier.get_rasse() << " | Alter: " << terrier.get_alter() << endl;

}
