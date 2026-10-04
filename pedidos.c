float totalRecebido(Pedido v[], int n) {
    float total = 0.0f;
    for (int i = 0; i < n; i++) {
        if (v[i].pago == 1) {
            total += v[i].valor;
        }
    }
    return total;
}

void marcarPago(Pedido *p) {
    if (p != NULL) {
        p->pago = 1;
    }
}