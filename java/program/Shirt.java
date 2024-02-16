class Shirt extends Clothing{
    //private atributes.
    private String color;
    private String sleeve_type;

    /* Constructors */

    public Shirt(){
        this.color = "";
        this.sleeve_type = "-";
    }

    public Shirt(String color, String sleeve_type){
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    /* Getter and Setter. */

    //get color
    public String getColor(){
        return this.color;
    }

    //set color
    public void setColor(String color){
        this.color = color;
    }

    //get sleeve_type
    public String getSleeve_type(){
        return this.sleeve_type;
    }

    //set sleeve_type
    public void setSleeve_type(String sleeve_type){
        this.sleeve_type = sleeve_type;
    }
}