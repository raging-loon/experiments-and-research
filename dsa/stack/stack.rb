class Stack
  @@stacksize = 0
  @@maxstacksize = 5
  @@stack = Array.new
  
  
  def init
    for i in 0..@@maxstacksize do
      @@stack << 0x0
      # @stacksize += 1
    end
  end

  def push(val)
    if not val.is_a? Integer 
      raise Exception.new "val must be int"
    end
    @@stack[@@stacksize] = val
    @@stacksize += 1
  end
  def pop
    @@stacksize -= 1
    val = @@stack[@@stacksize]
    @@stack[@@stacksize] = 0
    return val
  end
  def print_stack
    for i in 0..@@maxstacksize do
      print "0x%02x\t\t0x%02x\n" %[i, @@stack[i]]
    end

  end

end

s_stack = Stack.new
s_stack.init
puts "Stack after push"
s_stack.push(1)
s_stack.push(2)
s_stack.print_stack
s_stack.pop
s_stack.push 0x34
s_stack.push 0x45
s_stack.pop
puts "Stack after pop"
s_stack.print_stack
