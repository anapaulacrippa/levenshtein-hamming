#include "pocketpy.h"

// 1. Define a wrapper function with the signature `py_CFunction`.
bool py_add(int argc, py_Ref argv) {
    // 2. Check the number of arguments.
    PY_CHECK_ARGC(2);
    // 3. Check the type of arguments.
    PY_CHECK_ARG_TYPE(0, tp_int);
    PY_CHECK_ARG_TYPE(1, tp_int);
    // 4. Convert the arguments into C types.
    int _0 = py_toint(py_arg(0));
    int _1 = py_toint(py_arg(1));
    // 5. Call the original function.
    int res = add(_0, _1);
    // 6. Set the return value.
    py_newint(py_retval(), res);
    // 7. Return `true`.
    return true;
}

int main() {
  // Initialize python environment
  // Call this function before using any other function from `pocketpy.h`
  py_initialize();

  // Hello world!
  bool ok = py_exec("print('Hello world!')", "<string>", EXEC_MODE, NULL);
  if (!ok) {
    // In case of error, print the exception message
    py_printexc();
  }

  // Finalize python environment
  // Call this function in the end of the program
  // After this call, you should not use any function from `pocketpy.h`
  py_finalize();
  return 0;
}