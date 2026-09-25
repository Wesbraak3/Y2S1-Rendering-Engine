#include <cstdio>

class SimpleClass {
    public:
        int simpleValue;
        SimpleClass();
        ~SimpleClass();
};

SimpleClass::SimpleClass() {
    simpleValue = 0;
    printf("SimpleClass was created\n");
}

SimpleClass::~SimpleClass() {
    printf("SimpleClass was destroyed with value: %d\n", simpleValue);
}

int main() {
    {
        SimpleClass cl1;
        cl1.simpleValue = 10;
        printf("SimpleClass was created with value %d\n", cl1.simpleValue);
    }

    SimpleClass* sl2 = new SimpleClass();
    sl2->simpleValue = 20;
    delete sl2;

    printf("Program Ended");

    return 0;
}
