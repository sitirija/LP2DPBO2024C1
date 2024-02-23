#import class file.
from Shirt import Shirt

list = [] # menyimpan data

# menambah data
print("Masukkan jumlah produk:")
    
n = int(input())
for i in range (n):
    idProduct = int(input())
    name = input()
    brand = input()
    price = input()
    size = int(input())
    material = input()
    gender = input()[0]
    color = input()
    sleeve_type = input()
    
    temp = Shirt(idProduct, name, brand, price, size, material, gender, color, sleeve_type)
    list.append(temp)

# Menampilkan Daftar Shirt DPR
print("~~ DATA PRODUCT CLOTHING AND SHIRT ~~")
for Shirt in list:
    print("ID: ", Shirt.get_idProduct(), " | Nama: ", Shirt.get_name(), " | Merek: ", Shirt.get_brand(), " | Harga: ", Shirt.get_price())
    print("Size: ", Shirt.get_size(), " | Bahan: ", Shirt.get_material(), " | Gender: ", Shirt.get_gender())
    print("Warna: ", Shirt.get_color(), " | Jenis Lengan: ", Shirt.get_sleeve_type())