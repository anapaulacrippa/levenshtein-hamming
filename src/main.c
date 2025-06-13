#include "include/pocketpy.h"
#include "include/levenshtein.h"
#include "include/hamming.h"
#include <stdio.h>

bool py_levenshtein(int argc, py_Ref argv) {
    PY_CHECK_ARGC(2);
    PY_CHECK_ARG_TYPE(0, tp_str);
    PY_CHECK_ARG_TYPE(1, tp_str);

    const char *_s1 = py_tostr(py_arg(0));
    const char *_s2 = py_tostr(py_arg(1));

    int distance = levenshtein(_s1, _s2);
    py_newint(py_retval(), distance);
    return true;
}

bool py_hamming(int argc, py_Ref argv) {
    PY_CHECK_ARGC(2);
    PY_CHECK_ARG_TYPE(0, tp_str);
    PY_CHECK_ARG_TYPE(1, tp_str);

    const char *_s1 = py_tostr(py_arg(0));
    const char *_s2 = py_tostr(py_arg(1));

    int distance = hamming(_s1, _s2);
    py_newint(py_retval(), distance);
    return true;
}

int main() {
    char input[4000];
    FILE *ptr_arq = fopen("script.py", "r");
    size_t n = fread(input, 1, 4000, ptr_arq);
    input[n] = '\0';
    fclose(ptr_arq);

    py_initialize();

    py_GlobalRef main_module = py_getmodule("__main__");
    py_bindfunc(main_module, "levenshtein", py_levenshtein);
    py_bindfunc(main_module, "hamming", py_hamming);
    bool ok = py_exec(input, "", EXEC_MODE, NULL);
    if (!ok) {
      py_printexc();
    }
 
    py_finalize();
    return 0;
}