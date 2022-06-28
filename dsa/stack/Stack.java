

public class Stack{
  private int[] stack;
  private int stackSize = 0;
  private int maxSize;
  public void push(int val) throws StackOverflow{
    if(stackSize >= maxSize){
      throw new StackOverflow("To many items in stack");
    }
    stack[stackSize++] = val;
  }
  public int pop(){
    stackSize--;
    int temp = stack[stackSize];
    stack[stackSize] = 0;
    return temp;
  }
  public void printStack(){
    for(int i = 0; i < this.maxSize; i++){
      System.out.println(String.format("0x%02x",i) + "\t\t" + String.format("0x%02x", stack[i]));
    }
  }
  public Stack(int size){
    this.maxSize = size;
    this.stack = new int[size];
  }
  
  public static void main(String[] args){
    Stack sStack = new Stack(10);
    try{
      sStack.push(0x90);
      sStack.push(0x34);
      sStack.push(0x45);
    } catch(StackOverflow e){
      e.printStackTrace();
    }
    sStack.pop();
    sStack.printStack();


  }
}

class StackOverflow extends Exception{
  public StackOverflow(String str){
    super(str);
  }
}