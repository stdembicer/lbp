#include <stdio.h>;

int initialized_data = 5;

main() {
        int *heap;
        // printf("main's text segment is located at %p\n", &main);
        // printf("while initialized_data's initialized data segment is located at %p\n", &initialized_data);
       //  printf("and the heap is located at %p\n", &heap);
        return 0;
}
