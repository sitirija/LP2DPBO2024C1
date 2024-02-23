<?php

class Product{
    private $idProduct = 0;
    private $name = "";
    private $brand = "";
    private $price = "";

    public function __construct($idProduct = 0, $name = "", $brand = "", $price = ""){
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    public function setIdProduct($idProduct){
        $this->idProduct = $idProduct;
    }

    public function getIdProduct(){
        return $this->idProduct;
    }

    public function setName($name){
        $this->name = $name;
    }

    public function getName(){
        return $this->name;
    }

    public function setbrand($brand){
        $this->brand = $brand;
    }

    public function getbrand(){
        return $this->brand;
    }

    public function setprice($price){
        $this->price = $price;
    }

    public function getprice(){
        return $this->price;
    }
}

?>