class circle {
    float r;

    float s() {
        return 2 * 3.14 * r;
    }

    float a() {
        return 3.14 * r * r;
    }

    void getR() {
        cin >> r;
    }
};

int main() {
    circle* c;
    c->getR();
    cout << c->s();
    cout << c->a();
    return 0;
}