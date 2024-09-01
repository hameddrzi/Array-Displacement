#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NMAX  10

void trasforma_array(const size_t lenA , const int pA[],
                     size_t nmaxB, int *pB[])
{

    size_t lenB = 0;
        for (size_t iA = 0; iA < lenA && lenB < nmaxB; ++iA) {
                if(pA[iA] >= 10) {
                    size_t num_copie;
                    if(pA[iA] % 2 == 0){
                        if(pA[iA] % 4 ==0)
                            num_copie = 4;
                        else
                            num_copie = 2;
                    }
                }


        }







}


void stampa_array(const size_t aLen, const int a[])
{
    printf("len=%zu: [ ", aLen);
    for (size_t i=0; i<aLen; i++) {
        printf("%d ", a[i]);
    }
    printf("]\n");
}


void leggi_array(size_t *p_aLen, int a[])
{
    size_t j = 0, num;
    scanf("%zu", &num); // numero di elementi da leggere
    for (size_t i=0; i<num; i++) {
        int elem;
        scanf("%d", &elem);
        if (j < *p_aLen) {
            a[j] = elem;
            j++;
        }
    }
    *p_aLen = j;
}

//------------------------------------------------------------------
int main(void) {
    int a[NMAX], b[NMAX];
    size_t aLen=NMAX, bLen=NMAX;
    leggi_array(&aLen, a);
    trasforma_array(aLen, a, &bLen, b);
    stampa_array(bLen, b);
}

//------------------------------------------------------------------
