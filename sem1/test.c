#include <stdio.h>

//program wyświetlający moje imię, nazwisko, obliczający średnią ocen z chemii, (dwa miejsca po przecinku)
//oraz wyświetlający dzisiejszą datę, wszystko pisane pod sobą, wyrównane do lewej.

main(){
	printf("%30s", "Kacper\n");
	printf("%30s", "Pacholczak\n");
	printf("%30.2f\n", (5+5+5+5+4.5+4+5+5)/8);
	printf("%23d" "." "%d" "." "%d", 2018,11,20);
	
	return 0;
}
