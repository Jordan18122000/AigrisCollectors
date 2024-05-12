# Script MISRA-C

Pour l'utilisation du scirpt ce positionner dans le repertoire du projet : `AigrisCollectors/`

Définir le répertoire à analyser :
`export DIRECTORY_TO_EXAMINE=src`

Définir si on est en mode test :
`export TEST_MODE=true`

Run le script
`./CI/build.sh main.c`

Pour activer le mode test, vous pouvez définir la variable d'environnement TEST_MODE à "true" avant d'exécuter le script. Vous pouvez le faire de la manière suivante dans votre terminal :

export TEST_MODE=true

Le désactiver en réinitialisant la variable d'environnement TEST_MODE à une valeur vide ou en la supprimant :

unset TEST_MODE

##  MISRA-C 2023
Vérification la conformité des programmes écrits en C avec certaines des règles de la norme de développement logiciel [MISRA-C:2004](http://en.wikipedia.org/wiki/MISRA_C).

[FR]Les vérifications des règles suivantes sont mises en œuvre :

### √ Règle 2.2 (requise) : Le code source ne doit utiliser que des commentaires de style `/*` ... `*/`.

### √ Règle 2.3 (requise) : La séquence de caractères /* ne doit pas être utilisée dans un commentaire.

### √ Règle 4.1 (requise) : Seules les séquences d'échappement définies dans la norme ISO C doivent être utilisées.

Autorisées : 

        \'  \"  \?  \\  \a  \b  \f  \n  \r  \t  \v  \0

Non autorisées :

        \0... chiffre-octal
        \x... chiffre-hexadécimal

### √ Règle 4.2 (requise) : Les trigraphes ne doivent pas être utilisés.

        ??=  ??(  ??/  ??)  ??'  ??<  ??!  ??>  ??- 

### √ Règle 5.1 (requise) : Les identificateurs (internes et externes) ne doivent pas reposer sur la signification de plus de 31 caractères.

### √ Règle 7.1 (requise) : Les constantes octales (autres que zéro) et les séquences d'échappement octales ne doivent pas être utilisées.

### √ Règle 14.4 (requise) : L'instruction goto ne doit pas être utilisée.

### √ Règle 14.5 (requise) : L'instruction continue ne doit pas être utilisée.

### √ Règle 19.6 (requise) : #undef ne doit pas être utilisé.

### √ Règle 19.13 (conseillée) : Les opérateurs # et ## ne devraient pas être utilisés.

Les vérifications des règles suivantes sont prévues d'être mises en œuvre :

### Règle 12.10 (requise) : L'opérateur virgule ne doit pas être utilisé.

### Règle 12.13 (conseillée) : Les opérateurs d'incrémentation (++) et de décrémentation (--) ne devraient pas être mélangés avec d'autres opérateurs dans une expression.

### Règle 13.1 (requise) : Les opérateurs d'assignation ne doivent pas être utilisés dans des expressions qui produisent une valeur booléenne.

### Règle 14.3 (requise) : Avant la préparation, une instruction nulle ne doit apparaître que sur une ligne à part entière ; elle peut être suivie d'un commentaire à condition que le premier caractère suivant l'instruction nulle soit un caractère d'espace blanc.

### Règle 14.6 (requise) : Pour toute instruction d'itération, il ne doit y avoir au plus qu'une seule instruction break utilisée pour la terminaison de la boucle.

### Règle 14.7 (requise) : Une fonction doit avoir un seul point de sortie à la fin de la fonction.

### Règle 14.8 (requise) : L'instruction formant le corps d'une instruction switch, while, do ... while ou for doit être une instruction composée.

### Règle 14.9 (requise) : Une construction if (expression) doit être suivie d'une instruction composée. Le mot-clé else doit être suivi soit d'une instruction composée, soit d'une autre instruction if.

### Règle 14.10 (requise) : Toutes les constructions if ... else if doivent se terminer par une clause else.

### Règle 15.3 (requise) : La clause finale d'une instruction switch doit être la clause par défaut.

### Règle 15.5 (requise) : Chaque instruction switch doit avoir au moins une clause case.

### Règle 19.1 (conseillée) : Les instructions #include dans un fichier ne devraient être précédées que d'autres directives de préprocesseur ou de commentaires.

### Règle 19.2 (conseillée) : Les caractères non standard ne devraient pas apparaître dans les noms de fichiers d'en-tête dans les directives #include.

### Règle 19.5 (requise) : Les macros ne doivent pas être #define'd ou #undef'd à l'intérieur d'un bloc.

### Règle 19.12 (requise) : Il ne doit y avoir au plus qu'une occurrence des opérateurs # ou ## dans une seule définition de macro.


---------------------[EN]-------------------------

### √ Rule 2.2 (requited): Source code shall only use `/*` ... `*/` style comments.

### √ Rule 2.3 (required): The character sequence /* shall not be used within a comment.

### √ Rule 4.1 (required): Only those escape sequences that are defined in the ISO C standard shall be used.

Permited: 
    
        \'  \"  \?  \\  \a  \b  \f  \n  \r  \t  \v  \0

Not permited:

        \0... octal-digit
        \x... hexadecimal-digit 

### √ Rule 4.2 (required): Trigraphs shall not be used.

        ??=  ??(  ??/  ??)  ??'  ??<  ??!  ??>  ??- 

### √ Rule 5.1 (required): Identifiers (internal and external) shall not rely on the significance of more than 31 characters.

### √ Rule 7.1 (required): Octal constants (other than zero) and octal escape sequences shall not be used.

### √ Rule 14.4 (required): The goto statement shall not be used.

### √ Rule 14.5 (required): The continue statement shall not be used.

### √ Rule 19.6 (required): #undef shall not be used.

### √ Rule 19.13 (advisory): The # and ## operators should not be used.


Checks for the following rules are planned to be implemented:
-------------------------------------------------------------

### Rule 12.10 (required): The comma operator shall not be used.

### Rule 12.13 (advisory): The increment (++) and decrement (--) operators should not be mixed with other operators in an expression.

### Rule 13.1 (required): Assignment operators shall not be used in expressions that yield a Boolean value.

### Rule 14.3 (required): Before preprocessing, a null statement shall only occur on a line by itself; it may be followed by a comment provided that the first character following the null statement is a white-space character.

### Rule 14.6 (required): For any iteration statement there shall be at most one break statement used for loop termination.

### Rule 14.7 (required): A function shall have a single point of exit at the end of the function.

### Rule 14.8 (required): The statement forming the body of a switch, while, do ... while or for statement shall be a compound statement.

### Rule 14.9 (required): An if (expression) construct shall be followed by a compound statement. The else keyword shall be followed by either a compound statement, or another if statement.

### Rule 14.10 (required): All if ... else if constructs shall be terminated with an else clause.

### Rule 15.3 (required): The final clause of a switch statement shall be the default clause.

### Rule 15.5 (required): Every switch statement shall have at least one case clause.

### Rule 19.1 (advisory): #include statements in a file should only be preceded by other preprocessor directives or comments.

### Rule 19.2 (advisory): Non-standard characters should not occur in header file names in #include directives.

### Rule 19.5 (required): Macros shall not be #define’d or #undef’d within a block.

### Rule 19.12 (required): There shall be at most one occurrence of the # or ## operators in a single macro definition.
