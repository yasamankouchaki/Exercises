class Person {
public:
    char name[10];
    int id;
    int gender; // 0--->F    1--->M    2--->ND

private:
    int pass;
};

class Student : Person {
private:
    int unit[10];
    float grade[10];

public:
    char level[10]; // bachor-master-phd
};

class Employee : Person {
public:
    int wh;
    int type; // 0--->guarding    1--->the expert   2--->professors   3--->deputy   4--->Chairman

private:
    float rate;
};

class Master : Employee {
public:
    int class[20];
    int grade; // coach-Associate Professor-assistant professor-master teacher

private:
    float polls[100];
};