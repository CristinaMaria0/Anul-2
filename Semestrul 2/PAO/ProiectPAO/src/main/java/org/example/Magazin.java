package org.example;


import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class Magazin {
    private String nume;
    private String adresa;
    private String proprietar;
    private static ArrayList<Produs> listaProduse;
    public Magazin(String nume, String adresa, String proprietar){
        this.nume=nume;
        this.adresa=adresa;
        this.listaProduse=new ArrayList<>();
        this.proprietar=proprietar;
    }
    public String getNume() {
        return nume;
    }
    public String getAdresa(){return adresa;}
    public String getProprietar(){return proprietar;}

    public static ArrayList<Produs> getProduse(){ return listaProduse;}
    public void adaugaProdus(Produs produs) {
        listaProduse.add(produs);
    }

    @Override
    public String toString() {
        return "Magazin{" +
                "nume='" + nume + '\'' +
                ", adresa='" + adresa + '\'' +
                ", proprietar=" + proprietar +
                '}';
    }


}
