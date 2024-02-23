<?php

class Shirt{
    private $color = "";
    private $sleeve_type = "";

    public function __construct($color = "", $sleeve_type = ""){
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    public function setColor($color){
        $this->color = $color;
    }

    public function getColor(){
        return $this->color;
    }

    public function setSleeve_type($sleeve_type){
        $this->sleeve_type = $sleeve_type;
    }

    public function getSleeve_type(){
        return $this->sleeve_type;
    }
}

?>