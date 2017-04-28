#include <iostream>
#include "AllHeader.h"
using namespace std;

int main() {

    GenerationCard gc;
    cout << gc.getGUID() << endl;
    gc.setGUID(gc.key16);
    cout << gc.getGUID();

    return 0;
}