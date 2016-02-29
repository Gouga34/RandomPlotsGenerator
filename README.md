# RandomPlotsGenerator

RandomPlotsGenerator permet la génération aléatoire de X plots (parcelles) et l'écriture de ses données générées dans un fichié de manière à ce que l'on puisse les enregistrer dans une base de données PostgreSQL.

# Parcelle
Une parcelle est représentée par un rectangle.
Contenu d'une parcelle :
- 4 points
- nom
- type des plantes de la parcelle (blé, mais ou orge pour l'instant)

# Fichier de sortie
Le fichier de sortie contient une parcelle par ligne. Une parcelle est de la forme :

```
id  name  plantType  geometry
```

Exemple :

```
0   plot1	mais	ST_GeomFromText('POLYGON(0 0, 10 0, 0 10, 10 10, 0 0)')
```
