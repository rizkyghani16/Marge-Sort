#include <stdio.h>
#define MAX 10

int angka[MAX];
int memori[MAX];

void merge(int angka[], int memori[], int kiri, int tengah, int kanan)
{
			int i, kiri_akhir, elemen, simpan;
            kiri_akhir = tengah - 1;
            simpan = kiri;
            elemen = kanan - kiri + 1;
            
            while ((kiri <= kiri_akhir) && (tengah <= kanan))
            {
            			if (angka[kiri] <= angka[tengah])
                        {
                                    memori[simpan] = angka[kiri];
                                    simpan = simpan + 1;
                                    kiri = kiri +1;
                        }
                        else
                        {
                        memori[simpan] = angka[tengah];
                        simpan = simpan + 1;
                        tengah = tengah + 1;
                        }
        	}
        	while (kiri <= kiri_akhir)
            {
            			memori[simpan] = angka[kiri];
						kiri = kiri + 1;
						simpan = simpan + 1;	
            }
            while (tengah <= kanan)
            {
            	memori[simpan] = angka[tengah];
        	}
}

