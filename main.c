//170202037 - Arda Talu
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dizi[10];
  int i, j, gecici, sayac;
  printf("10 tane sayi giriniz:\n");
  for(int i=0; i<10; i++){
    scanf("%d", &dizi[i]);
  }
  for(i=0; i<10; i++){
        sayac = 1;
        for(j=i+1; j<10; j++){
            if(dizi[i] == dizi[j]){
                sayac++;
                dizi[j] = -1;
            }
        }
  }
            printf("%d -> %d adet\n", dizi[i], sayac);

  return 0;
}