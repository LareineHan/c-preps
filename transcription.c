#include <stdio.h>
#include <string.h>

int main(){
    char dna[100];
    char rna[100];

    printf("Enter a DNA sequence (use A,T,C,G): ");
    fgets(dna, sizeof(dna), stdin);
    dna[strcspn(dna,"\n")] = '\0'; // remove newline if any
    
    for (int i =0 ; dna[i] != '\0'; i++) {
        if (dna[i] == 'A') {
            rna[i] = 'U';
        } else if (dna[i] == 'T'){
            rna[i] = 'A';
        } else if (dna[i] == 'C'){
            rna[i] = 'G';
        } else if (dna[i] == 'G'){
            rna[i] = 'C';
        } else {
            rna[i] = '?'; // Invalid character
        }
    }

    rna[strlen(dna)] = '\0'; // ending rna sequence matching to dna's
    printf("Transcription is completed!\n");
    printf("Your RNA sequence is : %s\n", rna);

    return 0;
}