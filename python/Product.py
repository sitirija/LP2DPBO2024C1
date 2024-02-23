# class declaration
class Anggota:
    
    __idProduct = 0
    __name = ""
    __brand = ""
    __price = ""
    
    def __init__(self, idProduct = 0, name = "", brand = "", price = ""):
        self.__idProduct = idProduct
        self.__name = name
        self.__brand = brand
        self.__price = price
        
    # Getter and Setter. #
    
    # Get idProduct.
    def get_idProduct(self):
        return self.__idProduct
    
    # Set idProduct.
    def set_idProduct(self, idProduct):
        self.__idProduct = idProduct
    
    # Get name.
    def get_name(self):
        return self.__name
    
    # Set name.
    def set_name(self, name):
        self.__name = name
    
    # Get brand.
    def get_brand(self):
        return self.__brand
    
    # Set brand.
    def set_brand(self, brand):
        self.__brand = brand
        
    # Get price.
    def get_price(self):
        return self.__price
    
    # Set price.
    def set_price(self, price):
        self.__price = price