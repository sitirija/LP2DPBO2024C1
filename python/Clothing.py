# class declaration
class Clothing:
    
    __size = 0
    __material = ""
    __gender = ''
    
    def __init__(self, size = 0, material = "", gender = ''):
        self.__size = size
        self.__material = material
        self.__gender = gender
        
    # Getter and Setter. #
    
    # Get size.
    def get_size(self):
        return self.__size
    
    # Set size.
    def set_size(self, size):
        self.__size = size
    
    # Get material.
    def get_material(self):
        return self.__material
    
    # Set material.
    def set_material(self, material):
        self.__material = material
    
    # Get gender.
    def get_gender(self):
        return self.__gender
    
    # Set gender.
    def set_gender(self, gender):
        self.__gender = gender