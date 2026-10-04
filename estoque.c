float valorTotalEstoque(Produto v[], int n) {
    float total = 0.0f;
    for (int i = 0; i < n; i++) {
        total += v[i].preco * v[i].quantidade;
    }
    return total;
}

void aplicarDesconto(Produto *p, float perc) {
    p->preco -= p->preco * (perc / 100.0f);
}