# CPP-Grundkurs
## Genutzte Visual Studio Version: Microsoft Visual Studio Community 2022 (64-Bit)  (Achtung meist sind VS Projekte nicht abwärtskompatibel)

**Achtung:** Es wird ein nicht geschützter Branch genutzt. Es wird ebenfalls ausschließlich der master genutzt.

Die Datei CPP-Grundkurs/Grundkurs/Grundkurs.sln einfach als Visual Studio Projektmappe öffnen, sodass es in übersichtlicher Weise genutzt werden kann.

Entsprechend der Projektmappe das einzelne Projekt via "Rechtsklick + Als Startprojekt festlegen" als solches festlegen um dieses zu debuggen.

## Inkompatibilität mit aktueller Visual Studio Version?
**-> Dies ist für jedes Projekt in der Projektmappe einzeln durchzuführen und jedes Mal wenn man dieses Repo neu runterlädt und die Version Probleme bereitet**

1. Auf Eigenschaften des jeweiligen Projektes (z.B. 01_Grundlagen)

![Eigenschaften](https://github.com/adrianweidig/CPP-Grundkurs/blob/master/Bilder/Eigenschaften.PNG?raw=true)

2.1. Version der Zielplattform auf eine vorhandene ändern (Hier 8.1 bei VS 2015)
2.2. Plattformtoolset auf ein vorhandenes ändern (Hier v140 bei VS 2015)

![Aenderungen](https://github.com/adrianweidig/CPP-Grundkurs/blob/master/Bilder/%C3%84nderungen.PNG?raw=true)

3. Komplette Projektmappe bereinigen und neu erstellen

