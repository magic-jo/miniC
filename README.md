`git remote -v` : indique si on est connecté à un repo distant

Pour se lier à un repo distant : `git remote add origin git@github.com:user/projet`

Pour build un projet CMake : `cmake -B chemin/dossier/build -S chemin/dossier/source`

Pour tester un projet CMake : à la racine du projet __buildé__, `ctest .`

`git log` : afficher les commit d'un projet
`git log --all` : tous les commits, même ceux issus du __remote__
`git log --all --graph --oneline --decorate` : même commande qu'avant mais jolie

`git fetch` : récupérer le contenu du repo distant
`git merge` : fusionner le repo distant avec le repo local (c'est le contenu __local__ qui est modifié, pas le contenu distant)