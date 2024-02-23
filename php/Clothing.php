<?php

class Clothing{
    private $size = 0;
    private $material = "";
    private $gender = "";

    public function __construct($size = 0, $material = "", $gender = ""){
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    public function setSize($size){
        $this->size = $size;
    }

    public function getSize(){
        return $this->size;
    }

    public function setMaterial($material){
        $this->material = $material;
    }

    public function getMaterial(){
        return $this->material;
    }

    public function setGender($gender){
        $this->gender = $gender;
    }

    public function getGender(){
        return $this->gender;
    }
}

?>