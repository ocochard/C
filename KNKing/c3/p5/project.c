#include <stdio.h>

int main(void)
{
	int aa=0, ab=0, ac=0, ad=0, ba=0, bb=0, bc=0, bd=0, ca=0, cb=0, cc=0, cd=0, da=0, db=0, dc=0, dd=0;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &aa, &ab, &ac, &ad, &ba, &bb, &bc, &bd, &ca, &cb, &cc, &cd, &da, &db, &dc, &dd);

	printf("%3d %3d %3d %3d\n", aa, ab, ac, ad);
	printf("%3d %3d %3d %3d\n", ba, bb, bc, bd);
	printf("%3d %3d %3d %3d\n", ca, cb, cc, cd);
	printf("%3d %3d %3d %3d\n", da, db, dc, dd);

	printf("\nRow sums: %d %d %d %d\n", aa + ab + ac + ad, ba + bb + bc + bd, ca + cb + cc + cd, da + db + dc + dd);
	printf("Column sums: %d %d %d %d\n", aa + ba + ca + da, ab + bb + cb + db, ac + bc + cc + dc, ad + bd + cd +dd);
	printf("Diagonal sums: %d %d\n", aa + bb + cc + dd, ad + bc + cb + da);
	return 0;
}
