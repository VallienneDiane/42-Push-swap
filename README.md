### PUSH SWAP

## PARTIE OBLIGATOIRE

• The game is composed of 2 stacks named a and b. 

• To start with:
	◦ the stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
	◦ b is empty

• The goal is to sort in ascending order numbers into stack a.

• To do this you have the following operations at your disposal:

sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).

sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).

ss : sa and sb at the same time.

pa : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.

pb : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.

ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.

rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.

rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.

rrr : rra and rrb at the same time.

### Description de mon programme

J'ai utilisé le radix sort.

1. J'attribue un index à chaque valeur en fonction de sa place
2. J'utilise les bitwise operations >> et & pour transformer chaque index en octet base 2
 ">>" decale le binaire de X vers la droite
 "&" additionne X avec le dernier digit de la valeur binaire
3. Je calcul la valeur ayant le plus grand nombre d'octets pour pouvoir comparer les digits
4. Je trie sur deux stacks avec les valeurs de digits 0 ou 1 d'abord pour le dernier digit, puis celui d'avant ect.

Pour tester le programme :

```./pushswap 5 4 85 -52 0 14 6```

```ARG=" 24 58 -8 27 41"; ./pushswap $ARG | wc -l```

Résultat : 

Tri en 6784 operations pour 500 valeurs
Tri en 1084 operations pour 100 valeurs