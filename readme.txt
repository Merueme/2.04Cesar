main 		:	Prends en parametre un message sous la forme d'un tableau de char ainsi qu'une clée int.
			Ensuite il teste que le message sois valide (que des caractere alphanumerique) et enleve les 
			accents du message. Si le message est valide il est ensuite coder ou décoder selon le choix de 
			l'utilisateur via la méthode de Cesar.

verifier 	: 	Parcours une chaine de charactere fournit et renvois False si un des charactére ou plus n'est pas 
			alphanumerique renvois True sinon.

convertir	:	Parcours une chaine de charactere fournit et echange tous les accent présent dedans fessant partis de la 
			table ascii fournit (https://www.asciitable.com/) par leur variante sans accent.

chiffrer	:	Parcours une chaine de character fournit et echange chaqu'un de ces charactere par celui suivant selon la
			clée fournit. Pour cela on ajoute la valeur de la clée à la valeur ASCII du charactere et si cela devrait
			dépasser la valeur de z ou Z selon si le charactere est en minuscule ou majuscule on lui enleve 26.

dechiffrer 	:	Parcours une chaine de character fournit et echange chaqu'un de ces charactere par celui precedant selon la
			clée fournit. Pour cela on enleve la valeur de la clée à la valeur ASCII du charactere et si cela devrait
			dépasser la valeur de a ou A selon si le charactere est en minuscule ou majuscule on lui ajoute 26.

Un makefile permetant la compilation du programme est aussi fournit.

Il est possible de changer le mode de codage du programme en celui de Vigenere pour cela il faut changer le type de la clée
de int en "char cle[]" dans l'entête de main, chiffrer et dechiffrer et dé-commenter les partis de code présente dans chiffrer
et dechiffrer ainsi que la ligne dans le main verifiant que la clé est alphanumerique et lui enlevant ces accent.

