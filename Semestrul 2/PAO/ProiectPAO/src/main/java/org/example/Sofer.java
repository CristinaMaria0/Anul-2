package org.example;

import java.util.List;
import java.util.SimpleTimeZone;

public class Sofer extends Angajat{

    private String masina;
    private List<Comanda> comenziS;
    private String nrTelefon;
    public Sofer(String masina, String nrTelefon, int id, String nume) {
        super(id, nume);
        this.setPozitie("sofer");
        this.masina=masina;
        this.nrTelefon=nrTelefon;
    }
    public List<Comanda> getComenzi(){
        return comenziS;
    }
    public void adaugaComandaSofer(Comanda comanda) {
        this.comenziS.add(comanda);
    }

    public void stergeComandaSofer(Comanda comanda) {
        this.comenziS.remove(comanda);
    }

    @Override
    public String toString() {
        return "Sofer{" +
                "masina='" + masina + '\'' +
                ", comenzi=" + comenziS +
                ", nr telefon="+nrTelefon+
                '}';
    }
}
