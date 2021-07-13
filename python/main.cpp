#include <Python.h>

int main() {
    Py_Initialize(); // Init python
    PyRun_SimpleString("print('This is python!'.upper())"); // run code
    Py_Finalize();  // End python

    return 0;
}