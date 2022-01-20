#ifndef MEMORY_H
#define MEMORY_H

#include<string>

using namespace std;

class VirtualMemory{
    public:
        //Constói um simulador de memória virtual dados o tamanho de suas páginas, o tamanho da memória disponível e um string descrevendo o algoritmo de reposição
        VirtualMemory(int pagesize, int memsize, string algorit);

        //Acessa na memória virtual o byte de endereço indicado por address, o endereço tendo 32bits. O modo é um char que indica se foi feita uma leitura ou escrita
        //Ao contrário da memória real, a memória virtual sempre tem 2^32 entradas, cada uma de um byte
        void access_mem(int address, char mode);

        //Destrutor da classe
        ~VirtualMemory();

    private:
        //


        int ptable_size_;
        unsigned char s_;
        int* ptable_;

        int mem_size_;
        unsigned char* memory_;
        bool dirty_;
};

#endif #MEMORY_H