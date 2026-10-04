void reajustar(Funcionario *f, float perc) {
    f->salario += f->salario * (perc / 100.0f);
}

Funcionario *maiorSalario(Funcionario v[], int n) {
    if (n <= 0) return NULL;
    int maiorIdx = 0;
    for (int i = 1; i < n; i++) {
        if (v[i].salario > v[maiorIdx].salario) {
            maiorIdx = i;
        }
    }
    return &v[maiorIdx];
}