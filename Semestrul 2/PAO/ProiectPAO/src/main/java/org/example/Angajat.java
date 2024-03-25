package org.example;

public class Angajat {
    private int id;
    private String nume;
    private String pozitie;

    public Angajat(int id, String nume, String pozitie) {
        this.nume = nume;
        this.id=id;
        this.pozitie=pozitie;
    }
    public Angajat(int id, String nume) {
        this.nume = nume;
        this.id=id;
    }
    public String getNume() {
        return nume;
    }
    public int getId(){return  id;}
    public String getPozitie(){return pozitie;}
    public void setPozitie(String pozitie){
        this.pozitie=pozitie;
    }
    @Override
    public String toString() {
        return "Angajat{" +
                "id='" + id + '\'' +
                ", nume=" + nume +
                ", pozitie="+pozitie+
                '}';
    }
}
