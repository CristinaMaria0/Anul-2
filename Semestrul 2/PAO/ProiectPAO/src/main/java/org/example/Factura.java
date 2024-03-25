package org.example;

import java.util.ArrayList;

public class Factura {
    private int numarFactura;
    private ArrayList<Produs> produse;
    private double valoare;
    private String dataEmitere;

    // Constructor
    public Factura(int numarFactura, ArrayList<Produs> produse, String dataEmitere) {
        this.numarFactura = numarFactura;
        this.produse = produse;
        this.dataEmitere = dataEmitere;
    }

    // Metode de acces
    public int getNumarFactura() {
        return numarFactura;
    }

    public ArrayList<Produs> getProduse() {
        return produse;
    }
    public String getProduseString(){
        String rezultat = produse.toString();
        return  rezultat;
    }
    public double getValoare() {
        return valoare;
    }

    public String getDataEmitere() {
        return dataEmitere;
    }

    public double calculTotal(ArrayList<Produs> produse){
        double total=0;
        for(Produs produs : produse){
            total=total+produs.getPret();
        }
        return  total;
    }
    public void setValoare(double valoare){
        this.valoare=valoare;
    }
}
