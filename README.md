# ⚙️ Setting Up

## 📜 Description

**Setting Up** est un projet visant à trouver le plus grand carré de 'O' dans une grille composée de 'X' et 'O', avec la complexité la plus basse possible. L'algorithme utilise une pile et traite chaque ligne comme un histogramme pour identifier rapidement la solution optimale.

## 🚀 Fonctionnalités principales

- Résolution du problème de manière efficace avec une complexité O((n * logn) * n).
- Utilisation d'une pile pour analyser chaque ligne comme un histogramme et trouver le plus grand carré d'O.
- Prise en charge de fichiers d'entrée ou génération de la carte avec un motif prédéfini.
- Option d'afficher l'aide avec `-h` pour plus de détails.

## 🧑‍💻 Technologies utilisées

- **Langage** : C

## 🛠️ Installation

1. Clonez le repository :
   ```
   git clone https://github.com/votreutilisateur/setting_up.git
   ```
2. Accédez au répertoire du projet :
   ```
   cd setting_up
   ```
3. Compilez le projet avec `make` (aucune bibliothèque externe nécessaire, uniquement les bibliothèques standard C).

## 💡 Utilisation

Pour obtenir plus de détails sur l’utilisation, lancez la commande suivante :
```
./setting_up -h
```

## 📊 Exemple d'exécution

1. Si vous souhaitez fournir un fichier en entrée avec votre grille, utilisez :
   ```
   ./setting_up chemin/vers/fichier.txt
   ```
2. Pour générer un motif aléatoire de taille spécifiée :
   ```
   ./setting_up [largeur] [hauteur]
   ```

## 📈 État du projet

Le projet est terminé et est un exercice d'apprentissage de l'école Epitech. Il n'est pas destiné à être utilisé pour des fins autres que l'apprentissage.

## 📝 Licence

Ce projet est un exercice d’apprentissage d’Epitech. Il n’a pas de licence spécifique et ne doit pas être utilisé pour tricher si vous êtes étudiant à Epitech.
