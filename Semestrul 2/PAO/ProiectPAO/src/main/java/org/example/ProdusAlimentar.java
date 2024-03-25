package org.example;

import java.util.Date;

public class ProdusAlimentar extends Produs {
    private Date dataExpirare;
    private String taraOrigine;

    public ProdusAlimentar(String nume, int cod, String categorie, int cantitate, double pret,  Date dataExpirare, String taraOrigine) {
        super(nume, cod, categorie, cantitate, pret);
        this.dataExpirare = dataExpirare;
        this.taraOrigine = taraOrigine;
    }


    public Date getDataExpirare() {
        return dataExpirare;
    }

    public void setDataExpirare(Date dataExpirare) {
        this.dataExpirare = dataExpirare;
    }

    public String getTaraOrigine() {
        return taraOrigine;
    }

    public void setTaraOrigine(String taraOrigine) {
        this.taraOrigine = taraOrigine;
    }

    @Override
    public String toString() {
        return "ProdusAlimentar{" +
                "nume='" + getNume() + '\'' +
                ", pret=" + getPret() +
                ", dataExpirare=" + dataExpirare +
                ", taraOrigine='" + taraOrigine + '\'' +
                '}';
    }
}
