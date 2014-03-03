#include <classes.h>

struct locals {
    int aaa;
    int bbb;

    void test(int x, char x) const {};
};


int main(int argc, char *argv[]) {
    
    myclass cls;
    locals loc;
    
    loc.test(0, 0);

    return 0;
}

















