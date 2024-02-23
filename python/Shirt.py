# class declaration
class Anggota:
    
    __color = ""
    __sleeve_type = ""
    
    def __init__(self, color = "", sleeve_type = ""):
        self.__color = color
        self.__sleeve_type = sleeve_type
        
    # Getter and Setter. #
    
    # Get idProduct.
    def get_idProduct(self):
        return self.__idProduct
    
    # Set idProduct.
    def set_idProduct(self, idProduct):
        self.__idProduct = idProduct
    
    # Get color.
    def get_color(self):
        return self.__color
    
    # Set color.
    def set_color(self, color):
        self.__color = color
    
    # Get sleeve_type.
    def get_sleeve_type(self):
        return self.__sleeve_type
    
    # Set sleeve_type.
    def set_sleeve_type(self, sleeve_type):
        self.__sleeve_type = sleeve_type
        
    # Get price.
    def get_price(self):
        return self.__price
    
    # Set price.
    def set_price(self, price):
        self.__price = price