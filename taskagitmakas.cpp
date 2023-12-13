#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int random,bilgisayar,oyuncu,i,n,secim,a;
	bilgisayar=0;
	oyuncu=0;
	anamenu:
	system("cls");
	printf("Kac tur oynamak istiyorsunuz\n");
	scanf("%d",&i);
	srand(time(NULL));
	for(n=0;n<i;n++){
		random=rand()%3+1;
		menu:
		printf("Seciminizi giriniz 1-Tas 2-Kagit 3-Makas\n");
		scanf("%d",&secim);
		if(secim==1){
			if(random==1){
				printf("berabere kaldin\n");
			}else if(random==2){
				printf("kaybettin\n");
				bilgisayar++;
			}else if(random==3){
				printf("kazandin\n");
				oyuncu++;
			}
		}else if(secim==2){
			if(random==1){
				printf("kazandin\n");
				oyuncu++;
			}else if(random==2){
				printf("berabere kaldin\n");
			}else if(random==3){
				printf("kaybettin\n");
				bilgisayar++;
			}
		}else if(secim==3){
			if(random==1){
				printf("kaybettin\n");
				bilgisayar++;
			}else if(random==2){
				printf("kazandin\n");
				oyuncu++;
			}else if(random==3){
				printf("berabere kaldin\n");
			}
		}else{
			printf("yanlis secim yapildi lutfen tekrar deneyin\n");
			goto menu;
		}
	}
	if(oyuncu<bilgisayar){
		printf("KAYBETTIN\n\n\n");
		printf("siz:%d\tbilgisayar:%d\n\n",oyuncu,bilgisayar);
		printf("tekrar oynamak icin 1 cikis yapmak icin 0 seciniz\n");
		scanf("%d",&a);
		if(a==1){
			goto anamenu;
		}else if(a==0){
			exit(0);
		}else{
			printf("hatali secim yaptiniz\n");
		}
	}else if(bilgisayar<oyuncu){
		printf("TEBRIKLER KAZANDIN\n\n\n");
		printf("siz:%d\tbilgisayar:%d\n\n",oyuncu,bilgisayar);
		printf("tekrar oynamak icin 1 cikis yapmak icin 0 seciniz\n");
		scanf("%d",&a);
		if(a==1){
			goto anamenu;
		}else if(a==0){
			exit(0);
		}else{
			printf("hatali secim yaptiniz\n");
		}
	}else if(bilgisayar==oyuncu){
		printf("BERABERE KALDIN\n\n\n");
		printf("siz:%d\tbilgisayar:%d\n\n",oyuncu,bilgisayar);
		printf("tekrar oynamak icin 1 cikis yapmak icin 0 seciniz\n");
		scanf("%d",&a);
		if(a==1){
			goto anamenu;
		}else if(a==0){
			exit(0);
		}else{
			printf("hatali secim yaptiniz\n");
		}
	}
	
}
