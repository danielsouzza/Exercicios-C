#include <stdio.h>
#include <string.h>


typedef struct{
    char name[20];
    int id;
    float notas[3];
} data;
typedef struct{
    float smaller; char name0[20];
    float larger; char name1[20];
    float first; char name2[20];
} average;

void display_data(average media);
void grade_calculation(data *students, average *media);

int main()
{
    data students[5];
    average media;

    int st;
    media.first = 0;

    printf("Informe os dados dos alunos\n");

    for(st = 0; st < 2; st++){
        printf("============================\n");
        printf("Nome: ");
        scanf("%s", &students[st].name);
        printf("Matricula: ");
        scanf("%d", &students[st].id);
        printf("Notas 1: ");
        scanf("%f", &students[st].notas[0]);
        printf("Notas 2: ");
        scanf("%f", &students[st].notas[1]);
        printf("Notas 3: ");
        scanf("%f", &students[st].notas[2]);
   }
    grade_calculation(&students, &media);
    display_data(media);
    return 0;
}
void grade_calculation(data *students, average *media){
    int av, i;

    for(i = 0; i < 2; i++){
        av = (students[i].notas[0] + students[i].notas[1] + students[i].notas[2]) / 3;
        if(media->first < students[i].notas[0]){
            media->first = students[i].notas[0];
            strcpy(media->name2,students[i].name);
        }
        if(i == 0)
            media->larger = media->smaller = av;
        if(av >= media->larger){
            media->larger = av;
            strcpy(media->name1,students[i].name);
        }
        if(av <= media->smaller){
            media->smaller = av;
            strcpy(media->name0,students[i].name);
        }
    }
}
void display_data(average media){
    printf("============================\n");
    printf("O aluno com a maior nota na primeira prova:\n");
    printf("%s \t%.1f pontos\n",media.name2, media.first);
     printf("============================\n");
    printf("O aluno com maior média geral:\n%s \t%.1f pontos\n", media.name1, media.larger);
     printf("============================\n");
    printf("O aluno com a menor média geral:\n%s \t%.1f pontos\n", media.name0,media.smaller);
}