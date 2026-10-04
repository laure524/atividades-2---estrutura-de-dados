Vetor2D somar(Vetor2D a, Vetor2D b) {
    Vetor2D r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    return r;
}

float produtoEscalar(Vetor2D a, Vetor2D b) {
    return (a.x * b.x) + (a.y * b.y);
}

void escalar(Vetor2D *v, float k) {
    v->x *= k;
    v->y *= k;
}