class Clothing extends Product{
    //private atributes.
    private int size;
    private String material;
    private char gender;

    /* Constructors */

    public Clothing(){
        this.size = 0;
        this.material = "";
        this.gender = '-';
    }

    public Clothing(int size, String material, char gender){
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    /* Getter and Setter. */

    //get size
    public int getSize(){
        return this.size;
    }

    //set size
    public void setSize(int size){
        this.size = size;
    }

    //get material
    public String getMaterial(){
        return this.material;
    }

    //set material
    public void setMaterial(String material){
        this.material = material;
    }

    //get gender
    public char getGender(){
        return this.gender;
    }
    //set gender
    public void setGender(char gender){
        this.gender = gender;
    }
}