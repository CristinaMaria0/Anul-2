package org.example;

import java.util.ArrayList;

public class Comanda {
    private int id;
    private ArrayList<Produs> produse;
    private String adresaLivrare;
    private String dataPlasare;

    public Comanda(int id, ArrayList<Produs> produse, String adresaLivrare, String dataPlasare) {
        this.id=id;
        this.produse = produse;
        this.adresaLivrare = adresaLivrare;
        this.dataPlasare = dataPlasare;
    }
    public  int getId(){ return id; }
    public ArrayList<Produs> getProduse() {
        return produse;
    }

    public String getAdresaLivrare() {
        return adresaLivrare;
    }

    public String getDataPlasare() {
        return dataPlasare;
    }
}
