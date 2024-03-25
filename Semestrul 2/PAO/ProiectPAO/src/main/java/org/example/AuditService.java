package org.example;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.text.SimpleDateFormat;
import java.util.Date;

public class AuditService {
    private static final String FILE_PATH = "audit.csv";

    public static synchronized void logAction(String actionName) {
        String timestamp = getCurrentTimestamp();

        try (PrintWriter writer = new PrintWriter(new FileWriter(FILE_PATH, true))) {
            String logEntry = actionName + "," + timestamp;
            writer.println(logEntry);
        } catch (Exception e) {

        }
    }

    private static String getCurrentTimestamp() {
        SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        Date currentDate = new Date();
        return dateFormat.format(currentDate);
    }
}

