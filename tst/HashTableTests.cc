#include "gtest/gtest.h"
#include "../src/HashTable.h"
#include "../src/HashTable.cpp"
TEST(Constructor,NormalConstructor){
    HashTable<int,int> k;
    k.insert(1,2);
    k.insert(2,3);
    k.insert(1,2);
}
