class Door {
public:
    char mat[b];
    float x, y;
    int student;

    void open() {
        status = 1;  // open
    }

    void close() {
        status = 0;  // close
    }

    void lock() {
        status = 3;
    }
};

int pin = 123;

bool cheakpin(int p) {
    if (pin == p) {
        status = 2;
    }
}

class lock : public Door {
private:
    int pin = 123;

public:
    void lock() {
        status = 3;
    }

    void Unlock(int p) {
        if (p == pin) {
            status = 2;
        }
    }
};