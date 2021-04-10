#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	char str[30] = "Nama Saya Rizky Khapidsyah";
	int len;
	len = strlen(str);

	printf("Menampilkan Jumlah String : %s\n", str);
	printf("\n Length of string is : %d ", len);

	_getch();
	return 0;
}