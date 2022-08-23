extern unsigned char __heap_base;

unsigned int alloc_ptr = &__heap_base;

void* malloc(int buffer_len) {
    unsigned int address = alloc_ptr;
    alloc_ptr += buffer_len;
    return (void *)address;

}

void changeChar(int* buffer, int index, int ascii_char) {
    buffer[index] = ascii_char;
}

int getChunk(int* buffer, int index) {
    return buffer[index];
}
