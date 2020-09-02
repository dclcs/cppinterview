#include <iostream>
using namespace std;
#include "pointer_and_reference/ptr_variable_ref.h"
#include "pointer_and_reference/parametr_reference.h"
#include "class/class_paramter_init.h"
#include "data_structure/list.h"
#include "pointer_and_reference/pointer.h"
#include "pointer_and_reference/const_pointer.h"
#include "string/number_to_string.h"
#include "string/string_to_number.h"
#include "string/string_copy.h"
#include "pointer_and_reference/string_pointer.h"
#include "pointer_and_reference/pointer_function.h"
#include "class/copy_constructor.h"
#include "class/user_defined_string.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    test_ptr_variable_ref();
    test_swap_string();
    test_parameter_reference();
    test_init_paramter();
//    test_list_opeartions();

    test_pointer();
    test_number_to_string();
    test_string_to_number();
    test_string_copy();
    test_string_pointer();
    test_pointer_function();
    test_copy_constructor();
    test_mystring();
    return 0;
}
