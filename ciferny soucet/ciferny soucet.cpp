#include <stdio.h>
//ve škole mi nefungoval počítač tak nemám zbytek funkcí ale tato funkce by po dosazení snad měla vypočítat ciferný součet
int cif_soucet(int x) {
	int m, vysledek = 0;
	while (x > 0) {
		m = x % 10;
		vysledek = vysledek + m;
		x = x / 10;
	}
	return vysledek;
}
{
	printf("cif soucet je %d", cif_soucet(23));
}