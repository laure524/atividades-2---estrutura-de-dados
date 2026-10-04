int dataMaior(Data d1, Data d2) {
    if (d1.ano != d2.ano) return d1.ano > d2.ano;
    if (d1.mes != d2.mes) return d1.mes > d2.mes;
    return d1.dia > d2.dia;
}

Evento *eventoMaisRecente(Evento v[], int n) {
    if (n <= 0) return NULL;
    int maiorIdx = 0;
    for (int i = 1; i < n; i++) {
        if (dataMaior(v[i].data, v[maiorIdx].data)) {
            maiorIdx = i;
        }
    }
    return &v[maiorIdx];
}