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
        string color;
        string sleeve_type;

    //public methods.
    public:
        /* Constructors.*/

        //constructor. The note that it doesn't have any return type.
        Clothing(){
            //set color and sleeve_type to default value.
            this->color = "";
            this->sleeve_type = "";
        }

        //Another constructor
        //
        Clothing(string color, string sleeve_type){
            //"This" object'a attributes will be set with the given parameter attributes.
            this->color = color;
            this->sleeve_type = sleeve_type;
        }

        /* Getter and Setter. */

        //Get color.
        string get_color(){
            return this->color;
        }

        //Set color.
        void set_color(string color){
            this->color = color;
        }

        //Get sleeve_type.
        string get_sleeve_type(){
            return this->sleeve_type;
        }

        //Set sleeve_type.
        void set_sleeve_type(string sleeve_type){
            this->sleeve_type = sleeve_type;
        }

        ~Clothing(){
            
        }
};