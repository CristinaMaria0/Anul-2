package org.example;

public class Produs {
    private String nume;
    private int cod;
    private String categorie;
    private int cantitate;
    private double pret;

    public Produs(String nume, int cod, String categorie, int cantitate, double pret) {
        this.nume = nume;
        this.cod = cod;
        this.categorie = categorie;
        this.cantitate = cantitate;
        this.pret = pret;
    }



    public String getNume() {
        return nume;
    }

    public int getCod() {
        return cod;
    }

    public String getCategorie() {
        return categorie;
    }

    public int getCantitate() {
        return cantitate;
    }

    public double getPret() {
        return pret;
    }


    @Override
    public String toString() {
        return "Produs{" +
                "nume='" + nume + '\'' +
                ", pret=" + pret +
                '}';
    }
}
