Tarefa *inserirTarefa(Tarefa *inicio, char nome[], int prioridade) {
    Tarefa *novo = (Tarefa *)malloc(sizeof(Tarefa));
    if (novo == NULL) return inicio;
    strcpy(novo->nome, nome);
    novo->prioridade = prioridade;
    novo->prox = NULL;

    if (inicio == NULL || prioridade < inicio->prioridade) {
        novo->prox = inicio;
        return novo;
    }

    Tarefa *atual = inicio;
    while (atual->prox != NULL && atual->prox->prioridade <= prioridade) {
        atual = atual->prox;
    }
    novo->prox = atual->prox;
    atual->prox = novo;
    return inicio;
}

void imprimirLista(Tarefa *inicio) {
    Tarefa *atual = inicio;
    while (atual != NULL) {
        printf("%s (%d)\n", atual->nome, atual->prioridade);
        atual = atual->prox;
    }
}