Livro *buscarPorTitulo(Livro v[], int n, char titulo[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(v[i].titulo, titulo) == 0) {
            return &v[i];
        }
    }
    return NULL;
}

void emprestar(Livro *l) {
    if (l != NULL) {
        l->disponivel = 0;
    }
}