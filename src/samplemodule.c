#define PY_SSIZE_T_CLEAN
#include <Python.h>


// C function: add two numbers
static PyObject* add_numbers(PyObject* self, PyObject* args) {
    int a, b, result;

    // Parse Python arguments (two ints)
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }

    result = a + b;

    // Return result as Python int
    return PyLong_FromLong(result);
}

// Method table
static PyMethodDef SampleMethods[] = {
    {"add_numbers", add_numbers, METH_VARARGS, "Add two numbers"},
    {NULL, NULL, 0, NULL}
};

// // Module definition
// static struct PyModuleDef sampleModule = {
//     PyModuleDef_HEAD_INIT,
//     "sampleModule",     // module name
//     NULL,               // module documentation
//     -1,                 // size of per-interpreter state of the module
//     SampleMethods
// };

// // Module initialization
// PyMODINIT_FUNC PyInit_sample_pkg(void) {
//     return PyModule_Create(&sampleModule);
// }


// Define the initialization function for the module
static PyModuleDef samplemodule = {
    PyModuleDef_HEAD_INIT,
    "sample_pkg",  // Module name
    NULL,          // Module documentation
    -1,            // Size of per-interpreter state of the module
    SampleMethods           // Module methods
};

PyMODINIT_FUNC PyInit_sample_pkg() {
    return PyModule_Create(&samplemodule);
}