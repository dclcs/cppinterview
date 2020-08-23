//
// Created by dcl on 23/08/2020.
//

#ifndef CPPINTERVIEW_STRING_COPY_H
#define CPPINTERVIEW_STRING_COPY_H
#include <assert.h>

char* mystring_copy(char *str_dest, const char *str_src){
    if((str_dest == nullptr) || (str_src == nullptr)){
        return nullptr;
    }
    char *str_dest_copy = str_dest;
    while(*str_src != '\0'){
        *str_dest = *str_src;
        str_src ++;
        str_dest ++;
    }
    return str_dest_copy;


}

void *my_memcpy(void *mem_to, const void *mem_from, size_t size){
    assert((mem_to != nullptr) || (mem_from != nullptr));
    char *temp_from = (char *)mem_from;
    char *temp_to = (char *)mem_to;

    while (size > 0){
        *temp_to = *temp_from;
        temp_to ++; temp_from ++;
        size --;
    }
    return mem_to;
}

void test_string_copy(){
    cout << "##### testing string copy using strcpy" << endl;
    char str_src[] = "Hello World!sdajsodjaoweqwr";
    char str_dest[20];
    mystring_copy(str_dest, str_src);
    cout << "str_dest : " << str_dest << endl;
    cout << "##### testing string copy using memcpy" << endl;
    char str_src2[] = "Hello World!";
    char str_dst2[20];


    my_memcpy(str_dst2, str_src2, 5);
    str_dst2[5] = '\0';
    cout << "str_dest : " << str_dst2 << endl;
}

#endif //CPPINTERVIEW_STRING_COPY_H
