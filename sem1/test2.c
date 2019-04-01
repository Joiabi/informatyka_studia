#include <stdio.h>
//program wyświetlający rzeczy różne

main(){
	printf("===========================================\n");
	printf("%40s", "Nazywam się Kacper Pacholczak\n");
	printf("%25s" "%d" "%s", "Mam ",19, " lat\n");
	printf("%10.2f " "%25s", (5+5+5+5+5+5+4.5+4)/8,"To moja średnia ocen z Chemii\n");
	printf("===========================================\n");

	return 0;
}
