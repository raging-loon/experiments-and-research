#include <stdio.h>
#include <stdlib.h>

class vector{
private:
  unsigned int * __vector;
  unsigned int v_size;
public:
  unsigned int max_size;

  vector(int);
  ~vector();
  int push(int);
  int pop(int);
  unsigned int size(){ return v_size; }
};

vector::vector(int max_size){
  this->max_size = max_size;
  this->v_size = 0;
  this->__vector = (unsigned int *)malloc(sizeof(vector) * this->max_size);
}
vector::~vector(){
  if(this->__vector){
    free(this->__vector);
  }
}

int vector::push(int n){
  __vector[v_size++] = n;
  return n;
}

int vector::pop(int n){
  for(int i = 0; i <)
}

