//Kelas Induk
class Product{
    //private atributes.
    private int idProduct;
    private String name;
    private String brand;
    private String price;

    /* Constructors */

    public Product(){
        this.idProduct = 0;
        this.name = "";
        this.brand = "-";
        this.price = "-";
    }

    public Product(int idProduct, String name, String brand, String price){
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    /* Getter and Setter. */

    //get id product
    public int getIdProduct(){
        return this.idProduct;
    }

    //set id product
    public void setIdProduct(int idProduct){
        this.idProduct = idProduct;
    }

    //get name
    public String getName(){
        return this.name;
    }

    //set name
    public void setName(String name){
        this.name = name;
    }

    //get brand
    public String getBrand(){
        return this.brand;
    }
    //set brand
    public void setBrand(String brand){
        this.brand = brand;
    }

    //get price
    public String getPrice(){
        return this.price;
    }

    //set price
    public void setPrice(String price){
        this.price = price;
    }
}