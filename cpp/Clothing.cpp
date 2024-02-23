//Import library
#include <iostream>
#include <string>

//Using standard namespace
using namespace std;

//class declaration. for C++, the first letter doesn't have to be
//capitalized, but it's better so we can distinguish it with the other types.
class Clothing{
    //private attributes.
    private:
        int size;
        string material;
        string gender;

    //public methods.
    public:
        /* Constructors.*/

        //constructor. The note that it doesn't have any return type.
        Clothing(){
            //set material and gender to default value.
            this->size = 0;
            this->material = "";
            this->gender = '-';
        }

        //Another constructor
        //
        Clothing(int size, string material, string gender){
            //"This" object'a attributes will be set with the given parameter attributes.
            this->size = size;
            this->material = material;
            this->gender = gender;
        }

        /* Getter and Setter. */

        //Get size.
        int get_size(){
            return this->size;
        }

        //Set size.
        void set_size(int size){
            this->size = size;
        }

        //Get material.
        string get_material(){
            return this->material;
        }

        //Set material.
        void set_material(string material){
            this->material = material;
        }

        //Get gender.
        string get_gender(){
            return this->gender;
        }

        //Set gender.
        void set_gender(string gender){
            this->gender = gender;
        }

        ~Clothing(){
            
        }
};