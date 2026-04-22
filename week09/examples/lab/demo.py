class VSDEMO:
    class_id = 2025  # same as the static member variable in C++
    
    def __init__(self, length: int, nm: str):   # Constructor
        self._length = length
        self.name = (nm[:length-1] + '\0').ljust(length, '\0')[:length]
        
    @property 
    def length(self):
        return self._length
    
    def __del__(self):     # Destructor
        print("~vsdemo")
        
    def dis_obj(self):
        print(f"Obj address: {hex(id(self))}, length: {self.length}, name: {self.name.split(chr(0))!r}")
        
    @classmethod 
    def display_class_id(cls):  # work as static method in c++
        print(f"classId: {cls.class_id}")
        
            
            
if __name__ == "__main__":
    tdata = "SUSTECH_CS219"
    vsd1 = VSDEMO(len(tdata) + 1 , tdata)
    VSDEMO.display_class_id()
    vsd1.dis_obj()