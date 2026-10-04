float media(Aluno a) {
    return (a.notas[0] + a.notas[1] + a.notas[2]) / 3.0f;
}

void imprimirBoletim(Aluno turma[], int n) {
    float somaTurma = 0.0f;
    for (int i = 0; i < n; i++) {
        float m = media(turma[i]);
        printf("%s: %.1f\n", turma[i].nome, m);
        somaTurma += m;
    }
    printf("Media da turma: %.1f\n", somaTurma / n);
}