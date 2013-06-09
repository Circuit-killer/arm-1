class RaspiStruct < FFI::Struct
  layout :r, :pointer,
    :sp,   :uint32,
    :lr,   :uint32,
    :pc,   :uint32,
    :cpsr, :uint32,
    :em,   :pointer,
    :dm,   :pointer

  def regs
    regs = FFI::Pointer.new self[:r]
    regs.read_array_of_type(:uint32, :read_uint32, 12)
  end

  def encoded_mem
    em = FFI::Pointer.new self[:em]
    em.read_array_of_type(:uint32, :read_uint32, MEMSIZE)
  end

  def zeroed
    r = self.regs
    em = self.encoded_mem
    sum = (self[:sp] + self[:pc] + self[:cpsr] + self[:lr])
    return false unless sum.zero?
    r.map  { |n| return false unless n.zero? }
    em.map { |n| return false unless n.zero? }
    return true
  end

  def set_reg(i, v)
    self[:r].put_int((i << 2), v)
  end
  
  def get_reg(i)
    self[:r].get_int(i << 2)
  end
  
  def set_emem(i, v)
    self[:em].put_int((i << 2), v)
  end
  
  def get_emem(i)
    self[:em].get_int(i << 2)
  end

  def get_mem(i)
    Emulate.memget self, i
  end

end