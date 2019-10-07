#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void echanger_elem_tab(int tab[], int i, int j)
	{
	int t = tab[i];
	tab[i] = tab[j];
	tab[j] = t;
	}

int tab_trie(int tab[], int n)
	{
	int i;
	for (i = 1; i < n; i++)
		if( tab[i] < tab[i-1])
			return 0;
	return 1;
	}

int *nouveau_tableau(int n){
	int *t=malloc(n*(sizeof(int));
	return t;
}

int * detruire_tableau(int *t) {
	free(t);
  return NULL;
}

#define LIGNE_MAX 9999

int compter_lignes(char *nomFichier){
	FILE *pFi;
	int nbL=0;
	char c;
	
	pFi=fopen(nomFichier, "r");
	if(pFi==NULL){
		fprintf(stderr, "compter_lignes:: Ne peut ouvrir %s\nEXITING\n", nomFichier);
		exit(1);
	}
	while((c=fgetc( pFi))!=EOF)
		if(c=='\n')
			nbL++;
	fclose(pFi);
	return nbL;
}

int *lire_tableau(char *nomFichier, int *p_nbVal){
	FILE *pf1;
	char a;
	int i=0;
	int j=0;
	int *t=nouveau_tableau(*p_nbVal);
	pf1=fopen(nomFichier, "r");
	if(pf1==NULL){
		fprintf(stderr, "lire_tableau:: Ne peut ouvrir %s\nEXITING\n", nomFichier);
		exit(1);
	}
	while((a=fgetc( pf1))!=EOF){
		fscanf(pf1,"%d",&entier);
		if (j>*p_nbVal){
			break;
		}
		*(t+j)=entier;
		i++
		}
	}
	*p_nbVal=i;
	fclose(pf1);
	return t;
}


void ecrire_tableau(char *nomFichier, int *tab, int n){
	FILE *pFi;
	int i;
	char c;
	pFi=fopen(nomFichier, "w");
	if(pFi==NULL){
		fprintf(stderr, "ecrire_tableau:: Ne peut ouvrir %s\nEXITING\n", nomFichier);
		exit(1);
	}
		for(i=0;i<n;i++){
			fprintf(pFi,"%d",tab[i]);
		}
}

