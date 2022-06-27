#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 30
class Stack{
  unsigned int stack[MAX_STACK_SIZE];
  unsigned int size = 0;

public:
  Stack();

  void push(int val);
  int pop();
  void print_stack();

};

Stack::Stack(){
  memset(stack,0,sizeof(stack));
}

void Stack::push(int val){
  this->stack[this->size++] = val;
}

int Stack::pop(){
  this->size--;
  int temp = this->stack[this->size];
  this->stack[this->size] = 0;
  return temp;
}

void Stack::print_stack(){
  for(int i = 0; i < MAX_STACK_SIZE; i++){
    printf("%02x\t\t%02x\n",i,this->stack[i]);
  }
}

int main(){
  Stack stack;

  stack.push(0x1);
  stack.push(0x23);
  stack.push(0x43);
  stack.print_stack();
  printf("Popped: 0x%02x\n",stack.pop());
  stack.print_stack();
}