#include "pocketpy.h"
#include "levenshtein.h"
//#include <stdio.h>

bool py_levenshtein(int argc, py_Ref argv) {
    PY_CHECK_ARGC(2);
    PY_CHECK_ARG_TYPE(0, tp_int);
    PY_CHECK_ARG_TYPE(1, tp_int);

    const char *_s1 = py_tostr(py_arg(0));
    const char *_s2 = py_tostr(py_arg(1));

    int distance = levenshtein(_s1, _s2);
    py_newint(py_retval(), distance);
    return true;
}

int main() {
  py_initialize();

  py_GlobalRef __main__ = py_getmodule("__main__");

  py_bindfunc(__main__, "levenshtein.c", py_levenshtein);

  bool ok = py_exec("", "scripts.py", EXEC_MODE, NULL);
  if (!ok) {
    py_printexc();
//    goto finalize;
  }

//finalize:  
  py_finalize();
  return 0;
}