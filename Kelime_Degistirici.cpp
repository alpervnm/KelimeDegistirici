//Proje: Program ilk girilen kelimeyi alýr ve verilen metinde bu kelime varsa ikinci girilen kelimeyle deðiþtirir.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char arama[20], sw[20], mtn[100];
	int size,j=0,z;
	FILE* ptr;
	printf("Degistirelecek kelimeyi giriniz: "); scanf("%s",arama);
	printf("Yeni kelimeyi giriniz: "); scanf("%s",sw);
	
	ptr=fopen("metin.txt","r+");
	if(ptr==NULL)
		printf("Dosya acilamadi");
		
	fgets(mtn,100,ptr);
	while(j<strlen(mtn)){
		z=j;
		if(arama[0] == mtn[j] && arama[1]==mtn[j+1] && arama[2]== mtn[j+2] && arama[3]==mtn[j+3] && arama[4] == mtn[j+4]){
			for(int k=0;k<strlen(sw);k++){
				mtn[z]=sw[k];
				z++;
			}
		}
	j++;
	}
	ptr=fopen("metin.txt","w+");
	if(ptr==NULL)
		printf("Dosya acilamadi");
	fprintf(ptr,mtn);
	puts(mtn);
	
	
}
