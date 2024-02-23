//Import library
#include <iostream>
#include <string>

//Using standard namespace
using namespace std;

//class declaration. for C++, the first letter doesn't have to be
//capitalized, but it's better so we can distinguish it with the other types.
class Product{
    //private attributes.
    private:
        int idProduct;
        string name;
        string brand;
        string price;

    //public methods.
    public:
        /* Constructors.*/

        //constructor. The note that it doesn't have any return type.
        Product(){
            //set name and gender to default value.
            this->idProduct = 0;
            this->name = "";
            this->brand = "";
            this->price = "";
        }

        //Another constructor
        //
        Product(int idProduct, string name, string brand, string price){
            //"This" object'a attributes will be set with the given parameter attributes.
            this->idProduct = idProduct;
            this->name = name;
            this->brand = brand;
            this->price = price;
        }

        /* Getter and Setter. */

        //Get idProduct.
        int get_idProduct(){
            return this->idProduct;
        }

        //Set idProduct.
        void set_idProduct(int idProduct){
            this->idProduct = idProduct;
        }

        //Get name.
        string get_name(){
            return this->name;
        }

        //Set name.
        void set_name(string name){
            this->name = name;
        }

        //Get brand.
        string get_brand(){
            return this->brand;
        }

        //Set brand.
        void set_brand(string brand){
            this->brand = brand;
        }

        //Get price.
        string get_price(){
            return this->price;
        }

        //Set price.
        void set_price(string price){
            this->price = price;
        }

        ~Product(){
            
        }
};