int area(Retangulo r) {
    int largura = r.b.x - r.a.x;
    int altura = r.b.y - r.a.y;
    return largura * altura;
}

int perimetro(Retangulo r) {
    int largura = r.b.x - r.a.x;
    int altura = r.b.y - r.a.y;
    return 2 * (largura + altura);
}

void deslocar(Retangulo *r, int dx, int dy) {
    r->a.x += dx;
    r->a.y += dy;
    r->b.x += dx;
    r->b.y += dy;
}