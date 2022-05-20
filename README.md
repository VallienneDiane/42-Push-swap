# PUSH SWAP

## Lancer le programme :

```./pushswap 5 4 85 -52 0 14 6```

```ARG=" 24 58 -8 27 41"; ./pushswap $ARG | wc -l```

Résultat : 

Tri en 6784 operations pour 500 valeurs
Tri en 1084 operations pour 100 valeurs

### Description de mon programme

J'ai utilisé le radix sort.

1. J'attribue un index à chaque valeur en fonction de sa place
2. J'utilise les bitwise operations >> et & pour transformer chaque index en octet base 2 ">>" decale le binaire de X vers la droite "&" additionne X avec le dernier digit de la valeur binaire
3. Je calcule la valeur ayant le plus grand nombre d'octets pour pouvoir comparer les digits
4. Je trie sur deux stacks avec les valeurs de digits 0 ou 1 d'abord pour le dernier digit, puis celui d'avant ect.
