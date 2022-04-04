    #include <stdio.h>
    #include <stdlib.h>

    int main(){
        float nota1,nota2,nota3, media;
        printf("Digite a nota1\n");
        scanf("%f%*c", &nota1);
        printf("Digite a nota2\n");
        scanf("%f%*c", &nota2);
        printf("Digite a nota3\n");
        scanf("%f%*c", &nota3);
        media=(nota1+nota2+nota3)/3;
        printf("a media de idade e:%.2f", media);
        return 0;

    }