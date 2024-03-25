package org.example;

import java.util.*;

public class ServiciuMagazin {
    private ArrayList<Distribuitor> listaDistribuitori;
    private ArrayList<Angajat> listaAngajati;
    private ArrayList<Comanda> listaComenzi;
    private ArrayList<Factura> listaFacturi;
    private  ArrayList<Sofer> listaSoferi;
    public ServiciuMagazin() {
        listaDistribuitori = new ArrayList<>();
        listaAngajati = new ArrayList<>();
        listaComenzi = new ArrayList<>();
        listaFacturi = new ArrayList<>();
        listaSoferi = new ArrayList<>();
    }

    public void insertSofer(Sofer sofer){
        listaSoferi.add(sofer);
    }
    public void stergeSofer(Sofer sofer){
        listaSoferi.remove(sofer);
    }
    public void adaugaDistribuitor(Distribuitor distribuitor) {

        listaDistribuitori.add(distribuitor);
    }

    public void stergeDistribuitor(Distribuitor distribuitor) {

        listaDistribuitori.remove(distribuitor);
    }

    public void adaugaAngajat(Angajat angajat) {

        listaAngajati.add(angajat);
    }
    public void adaugaSofer(Sofer sofer) {

        listaSoferi.add(sofer);
    }

    public String readAngajat(int id) {
        for (Angajat angajat : listaAngajati) {
            if (angajat.getId() == id) {
                return angajat.toString();
            }
        }
        return null;
    }
    public String getAngajati(){
        return listaAngajati.toString();
    }
    public void adaugaComanda(Comanda comanda) {

        listaComenzi.add(comanda);
    }

    public void adaugaFactura(Factura factura) {

        listaFacturi.add(factura);
    }

    //1. Cauta comanda dupa id
    public Comanda cautaComandaDupaId(int id) {
        for (Comanda comanda : listaComenzi) {
            if (comanda.getId() == id) {
                return comanda;
            }
        }
        return  null;
    }

    //2. Cauta produsele cu un pret mai mic decat un numar dat
    public ArrayList<Produs> cautareProdusePretMaiMicDecat(double pret) {
        ArrayList<Produs> produse = new ArrayList<>();
        ArrayList<Produs> produseMagazin= Magazin.getProduse();
        for (Produs produs : produseMagazin) {
            if (produs.getPret() < pret) {
                produse.add(produs);
            }
        }
        return produse;
    }

    //3. Calculeaza valoarea totala a stocului
    public double calculeazaValoareStoc() {
        double valoareStoc = 0;
        ArrayList<Produs> produseMagazin= Magazin.getProduse();
        for (Produs produs : produseMagazin) {
            valoareStoc += produs.getPret() * produs.getCantitate();
        }
        return valoareStoc;
    }

    //4. Cautarea produselor dintr-o anumita categorie
    public ArrayList<Produs> cautareProduseDinCategorie(String categorie) {
        ArrayList<Produs> produse = new ArrayList<>();
        ArrayList<Produs> produseMagazin= Magazin.getProduse();
        for (Produs produs : produseMagazin) {
            if (Objects.equals(produs.getCategorie(), categorie)) {
                produse.add(produs);
            }
        }
        return produse;
    }

    //5. Returneaza produsele care se afla in stoc
    public List<Produs> getProduseInStoc() {
        List<Produs> produseInStoc = new ArrayList<>();
        ArrayList<Produs> produseMagazin= Magazin.getProduse();

        for (Produs produs : produseMagazin) {
            if (produs.getCantitate() > 0) {
                produseInStoc.add(produs);
            }
        }
        return produseInStoc;
    }



}
