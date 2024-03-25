package org.example;

import java.sql.*;
import java.util.ArrayList;

public class DatabaseService {
    private static Connection connection;
    private static DatabaseService instance;
    DatabaseService() {
        try {
            connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/myshop", "root", "mysql");
            System.out.println(connection);
        }
        catch (Exception e){

        }
    }
    public static DatabaseService getInstance() {
        if (instance == null) {
            instance = new DatabaseService();
        }
        return instance;
    }
    public void insertAngajat(Angajat angajat) {
        try {
            String query = "INSERT INTO angajat (id, nume, pozitie) VALUES (?, ?, ?)";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setInt(1, angajat.getId());
            statement.setString(2, angajat.getNume());
            statement.setString(3, angajat.getPozitie());
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public Angajat readAngajat(int id) {
        try {
            String query = "SELECT * FROM angajat WHERE id = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setInt(1, id);
            ResultSet resultSet = statement.executeQuery();
            if (resultSet.next()) {
                String nume = resultSet.getString("nume");
                String pozitie = resultSet.getString("pozitie");
                return new Angajat(id, nume, pozitie);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return null;
    }
    public ArrayList<Angajat> readAngajati() {
        ArrayList<Angajat> angajati = new ArrayList<>();
        try {
            String query = "SELECT * FROM angajat ";
            PreparedStatement statement = connection.prepareStatement(query);
            ResultSet resultSet = statement.executeQuery();
            while (resultSet.next()) {
                int id=resultSet.getInt("id");
                String nume = resultSet.getString("nume");
                String pozitie = resultSet.getString("pozitie");
                Angajat angajat = new Angajat(id, nume, pozitie);
                angajati.add(angajat);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return angajati;
    }
    public void updateAngajat(Angajat angajat) {
        try {
            String query = "UPDATE angajat SET nume = ?, pozitie = ? WHERE id = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, angajat.getNume());
            statement.setString(2, angajat.getPozitie());
            statement.setInt(3, angajat.getId());
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
    public void deleteAngajat(int id) {
        try {
            String query = "DELETE FROM angajat WHERE id = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setInt(1, id);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public void insertDistribuitor(Distribuitor distribuitor) {
        try {
            String query = "INSERT INTO distribuitor (nume, adresa) VALUES (?, ?)";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, distribuitor.getNume());
            statement.setString(2, distribuitor.getAdresa());
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public Distribuitor readDistribuitor(String nume) {
        try {
            String query = "SELECT * FROM distribuitor WHERE nume = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, nume);
            ResultSet resultSet = statement.executeQuery();
            if (resultSet.next()) {
                String adresa = resultSet.getString("adresa");
                return new Distribuitor(nume, adresa);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return null;
    }

    public void updateDistribuitor(Distribuitor distribuitor) {
        try {
            String query = "UPDATE distribuitor SET adresa = ? WHERE nume = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, distribuitor.getAdresa());
            statement.setString(2, distribuitor.getNume());
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public void deleteDistribuitor(String nume) {
        try {
            String query = "DELETE FROM distribuitor WHERE nume = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, nume);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public void insertFactura(Factura factura) {
        try {
            String query = "INSERT INTO factura (numarFactura, produse, valoare, dataEmitere) VALUES (?, ?, ?, ?)";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setInt(1, factura.getNumarFactura());
            statement.setString(2, factura.getProduseString());
            statement.setDouble(3, factura.getValoare());
            statement.setString(4, factura.getDataEmitere());
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public void updateFactura(Factura factura) {
        try {
            String query = "UPDATE factura SET produse = ?, valoare = ?, dataEmitere = ? WHERE numarFactura = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, factura.getProduseString());
            statement.setDouble(2, factura.getValoare());
            statement.setString(3, factura.getDataEmitere());
            statement.setInt(4, factura.getNumarFactura());
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public void deleteFactura(int numarFactura) {
        try {
            String query = "DELETE FROM factura WHERE numarFactura = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setInt(1, numarFactura);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }


    public void insertProdus(Produs produs) {
        try {
            String query = "INSERT INTO produs (nume, cod, categorie, cantitate, pret) VALUES (?, ?, ?, ?, ?)";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, produs.getNume());
            statement.setInt(2, produs.getCod());
            statement.setString(3, produs.getCategorie());
            statement.setInt(4, produs.getCantitate());
            statement.setDouble(5, produs.getPret());
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public Produs readProdus(int cod) {
        try {
            String query = "SELECT * FROM produs WHERE cod = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setInt(1, cod);
            ResultSet resultSet = statement.executeQuery();
            if (resultSet.next()) {
                String nume = resultSet.getString("nume");
                String categorie = resultSet.getString("categorie");
                int cantitate = resultSet.getInt("cantitate");
                double pret = resultSet.getDouble("pret");
                return new Produs(nume, cod, categorie, cantitate, pret);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return null;
    }

    public void updateProdus(Produs produs) {
        try {
            String query = "UPDATE produs SET nume = ?, categorie = ?, cantitate = ?, pret = ? WHERE cod = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, produs.getNume());
            statement.setString(2, produs.getCategorie());
            statement.setInt(3, produs.getCantitate());
            statement.setDouble(4, produs.getPret());
            statement.setInt(5, produs.getCod());
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public void deleteProdus(int cod) {
        try {
            String query = "DELETE FROM produs WHERE cod = ?";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setInt(1, cod);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
    public void closeConnection() {
        try {
            if (connection != null) {
                connection.close();
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
