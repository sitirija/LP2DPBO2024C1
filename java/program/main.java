//import library
import java.util.Scanner;
import java.util.ArrayList;

public class main {
    public static void main(String[] args){
        System.out.println("Masukkan jumlah produk:");

        ArrayList<Shirt> list = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i = 0; i < n; i++){
            System.out.println("Masukkan untuk produk user " + (i+1) + ":");
            Shirt temp = new Shirt();

            int idProduct = sc.nextInt();
            String name = sc.next();
            String brand = sc.next();
            String price = sc.next();
            int size = sc.nextInt();
            String material = sc.next();
            char gender = sc.next().charAt(0);
            String color = sc.next();
            String sleeve_type = sc.next();

            list.add(temp);
        }

        System.out.println("~~ DATA PRODUCT CLOTHING AND SHIRT ~~");
        for(int i = 0; i < n; i++){
            System.out.println("ID: " + list.get(i).getIdProduct() + " | Nama: " + list.get(i).getName() + " | Merek: " + list.get(i).getBrand() + " | Harga: " + list.get(i).getPrice());
            System.out.println("Size: " + list.get(i).getSize() + " | Bahan: " + list.get(i).getMaterial() + " | Gender: " + list.get(i).getGender());
            System.out.println("Warna: " + list.get(i).getColor() + " | Jenis Lengan: " + list.get(i).getSleeve_type());
        }

        //close scanner. What the heck is this? well, search it on Internet.
        sc.close();
    }
}