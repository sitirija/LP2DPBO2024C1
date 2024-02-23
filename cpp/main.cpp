/*Saya Siti Rija Dana Prima dengan NIM 2202014 mengerjakan LP2 dalam mata kuliah DPBO untuk keberkahanNya 
 maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//import library and file
#include <bits/stdc++.h>
#include "Shirt.cpp"

//using standard namespace
using namespace std;

int main()
{
    /* Default code. */

    int n;
    int idProduct; //variabel untuk
    string name; //variabel untuk nama
    String brand;
    String price;
    int size;
    String material;
    char gender;
    String color;
    String sleeve_type;

    list<Shirt> llist; //menyimpan data
    
    cout << "Masukkan jumlah produk:" << '\n';
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        //masukan data
        cin >> idProduct >> name >> brand >> price >> size >> material >> gender >> color >> sleeve_type;

        Shirt temp;
        
        temp.set_idProduct(idProduct);
        temp.set_name(name);
        temp.set_brand(brand);
        temp.set_price(price);
        temp.set_size(size);
        temp.set_material(material);
        temp.set_gender(gender);
        temp.set_color(color);
        temp.set_sleeve_type(sleeve_type);

        llist.push_back(temp);
    }

    cout << "~~ DATA PRODUCT CLOTHING AND SHIRT ~~" << '\n';
    for(auto it = llist.begin(); it != llist.end(); it++)
    {
        cout << "ID: " << it->getIdProduct() << " | Nama: " << it->getName() << " | Merek: " << it->getBrand() << " | Harga: " << it->getPrice() << '\n';
        cout << "Size: " << it->getSize() << " | Bahan: " << it->getMaterial() << " | Gender: " << it->getGender() << '\n';
        cout << "Warna: " << it->getColor() << " | Jenis Lengan: " << it->getSleeve_type() << '\n';
    }

    return 0;
}