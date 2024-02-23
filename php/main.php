<?php
require ('Shirt.php');

$User1 = new Shirt('1', 'Baju', 'Jiniso', '50000', '30', 'Toyobo', 'P', 'Biru', 'Panjang');
echo $User1->getIdProduct();
echo $User1->getName();
echo $User1->getBrand();
echo $User1->getPrice();
echo $User1->getSize();
echo $User1->getMaterial();
echo $User1->getGender();
echo $User1->getColor();
echo $User1->getSleeve_type();
echo '<hr>';

$User1->setName('Baju');
echo $User1->getName();

$User2 = new Shirt('2', 'Kaos', 'Uniqlo', '30000', '35', 'Katun', 'L', 'Hitam', 'Pendek');
echo '<hr>';

?>