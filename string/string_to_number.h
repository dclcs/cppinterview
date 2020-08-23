//
// Created by dcl on 23/08/2020.
//

#ifndef CPPINTERVIEW_STRING_TO_NUMBER_H
#define CPPINTERVIEW_STRING_TO_NUMBER_H

int str2int(const char *str){
    int temp = 0;
    const char *ptr = str;
    if(*str == '-' || *str == '+'){
        str ++;
    }
    while(*str != '\0'){
        if((*str < '0') || (*str > '9')){
            break;
        }
        temp = temp * 10 + (*str - '0');
        str ++;
    }

    if(*ptr == '-'){
        temp = -temp;
    }

    return temp;
}

/**
 * built-in function:
 *      atof: string->double
 *      atoi: string->int
 *      atol: string->long
 *      strtod->string->double
 */
void test_string_to_number(){
    cout << "##### testing string to number using built-in function" << endl;
    int num_int;
    double num_double;
    char str_int[30] = "435";
    char str_double[30] = "436.55";

    num_int = atoi(str_int);
    num_double = atof(str_double);

    cout << "num_int : " << num_int << endl;
    cout << "num_double : " << num_double << endl;


    cout << "##### testing string to number using user-defined function" << endl;
    char *str = "456";
    int res = str2int(str);
    cout << "str2int(res) = " << res << endl;
}

#endif //CPPINTERVIEW_STRING_TO_NUMBER_H
