package org.example;


import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws ParseException {

        SimpleDateFormat dateFormat = new SimpleDateFormat("dd-MM-yyyy");
        DatabaseService Dservice = new DatabaseService();

        // Creare magazin
        Magazin magazin = new Magazin("Magazinul Meu", "Strada 1", "Popescu Cristina");


        // Adaugare produse
        Produs produs1 = new Produs("Laptop HP", 1, "Electronice", 100, 4000.0);
        Produs produs2 = new Produs("Televizor Samsung", 2, "Electronice", 120, 2500.0);

        Produs produs3 = new Produs("Fier de calcat Philips", 10, "Electrocasnice", 77, 200.0);
        Produs produs4 = new Produs("Masina de spalat LG", 11, "Electrocasnice", 51, 3000.0);

        Date dataExp = dateFormat.parse("30-04-2023");
        ProdusAlimentar produs5 = new ProdusAlimentar("Ciocolata", 21, "Dulciuri", 150, 5.99, dataExp, "Romania");


        magazin.adaugaProdus(produs1);
        magazin.adaugaProdus(produs2);
        magazin.adaugaProdus(produs3);
        magazin.adaugaProdus(produs4);
        magazin.adaugaProdus(produs5);

        ServiciuMagazin serviciu = new ServiciuMagazin();

        // Adaugare distribuitori
        Distribuitor distribuitor1 = new Distribuitor("Distribuitor 1", "Adresa 1");
        Distribuitor distribuitor2 = new Distribuitor("Distribuitor 2", "Adresa 2");

        serviciu.adaugaDistribuitor(distribuitor1);
        serviciu.adaugaDistribuitor(distribuitor2);
        serviciu.stergeDistribuitor(distribuitor1);

        // Adaugare angajati
        Angajat angajat1 = new Angajat(1, "Popescu Ion", "pozitie 1");
        Angajat angajat2 = new Angajat(2, "Ionescu Maria", "pozitie 2");

        // Creare comenzi
        ArrayList<Produs> produse_comanda1 = new ArrayList<>();
        produse_comanda1.add(produs1);
        produse_comanda1.add(produs4);
        Comanda comanda1 = new Comanda(100, produse_comanda1, "Iuliu Maniu, nr 1", "2023-04-01");

        // Creare factura
        ArrayList<Produs> produseFactura1 = new ArrayList<>();
        produseFactura1.add(produs1);
        produseFactura1.add(produs2);
        Factura factura1 = new Factura(1, produseFactura1, "2023-04-01");
        double pret = factura1.calculTotal(produseFactura1);
        factura1.setValoare(pret);

        serviciu.adaugaComanda(comanda1);
        serviciu.adaugaFactura(factura1);

        Sofer sofer1= new Sofer("Ford","0745487855",10,"Albert");
        Sofer sofer2= new Sofer("Dacia","0746245475",11,"Stefan");

        serviciu.adaugaSofer(sofer1);
        serviciu.adaugaSofer(sofer2);
        Scanner scanner = new Scanner(System.in);
        boolean continua = true;
        while (continua) {
            System.out.println("Alege o opțiune:");
            System.out.println("1. Afiseaza lista de angajati");
            System.out.println("2. Adauga un nou angajat");
            System.out.println("3. Cauta un angajat dupa ID");
            System.out.println("4. Cauta produsele cu un pret mai mic decat un numar dat");
            System.out.println("5. Calculeaza valoarea totala a stocului");
            System.out.println("6. Cautarea produselor dintr-o anumita categorie");
            System.out.println("7. Returneaza produsele care se afla in stoc");
            System.out.println("8. Cauta o comanda dupa ID");
            System.out.println("9. Sterge angajat");

            System.out.println("10. Exit");
            System.out.print("Opțiune: ");

            int optiune = scanner.nextInt();

            switch (optiune) {
                case 1:
                    // Afiseaza lista de angajati
                    AuditService.logAction("afiseaza angatati");
                    System.out.println(Dservice.readAngajati());

                    break;
                case 2:
                    // Adauga un nou angajat
                    AuditService.logAction("adauga angatat");

                    System.out.print("Introdu id-ul angajatului: ");
                    int id = scanner.nextInt();
                    System.out.print("Introdu numele angajatului: ");
                    String nume = scanner.next();
                    System.out.print("Introdu pozitia angajatului: ");
                    String pozitie = scanner.next();

                    Angajat angajatNou = new Angajat(id, nume, pozitie);
                    Dservice.insertAngajat(angajatNou);
                    System.out.println("Angajat adăugat cu succes.");
                    break;
                case 3:
                    // Cauta un angajat dupa ID
                    AuditService.logAction("cauta un angajat");

                    System.out.print("Introdu ID-ul angajatului: ");
                    int id_angajat = scanner.nextInt();

                    Angajat angajatCautat= Dservice.readAngajat(id_angajat);
                    if (angajatCautat != null) {
                          System.out.println("Angajat găsit: " + angajatCautat);
                      } else {
                          System.out.println("Nu s-a găsit niciun angajat cu ID-ul specificat.");
                      }


                    break;
                case 4:
                    AuditService.logAction("Cauta produsele cu un pret mai mic decat un numar dat");

                    System.out.print("Introdu pretul maxim: ");
                    double pretC = scanner.nextDouble();
                    System.out.println(serviciu.cautareProdusePretMaiMicDecat(pretC));
                    break;
                case 5:
                    AuditService.logAction("Calcul valoare stoc");

                    System.out.print("Valoarea totala este:");
                    System.out.println(serviciu.calculeazaValoareStoc());
                    break;
                case 6:
                    AuditService.logAction("cauta produs dupa ctegorie");

                    System.out.print("Introdu categoria cautata: ");
                    String categorieC = scanner.next();
                    System.out.println(serviciu.cautareProduseDinCategorie(categorieC));
                    break;
                case 7:
                    AuditService.logAction("afiseaza produse in stoc");

                    System.out.println("Produsele aflate in stoc sunt:");
                    System.out.println(serviciu.getProduseInStoc());
                    break;

                case 8:
                    AuditService.logAction("cauta comanda dupa id");

                    System.out.println(serviciu.cautaComandaDupaId(comanda1.getId()));
                    break;
                case 9:
                    AuditService.logAction("sterge un angajat");

                    System.out.print("Introdu ID-ul angajatului: ");
                    int id_ang = scanner.nextInt();
                    Dservice.deleteAngajat(id_ang);
                    System.out.println("sters");
                    break;
                case 10:
                    continua = false;
                    break;
                default:
                    System.out.println("Opțiune invalidă.");
                    break;
            }

            System.out.println();
        }

        scanner.close();
        Dservice.closeConnection();
    }

}
