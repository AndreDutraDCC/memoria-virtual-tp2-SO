#include "memory.h"
#include<string>
#include<iostream>

using namespace std;

VirtualMemory::VirtualMemory(int pagesize, int memsize, string algorit){

    while(pagesize > 1){
        pagesize = pagesize >> 1;
        s_++;
    }

    ptable_size_ = 1 << 22 - s_;
    ptable_ = new int(ptable_size_);

    memory_ = new unsigned char(memsize);
    dirty_ = new bool(memsize);
}