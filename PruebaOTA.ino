#include <WiFi.h>
#include "SimpleOTAUpdater.h"

// Configuración
const char* SSID = "tu_wifi";
const char* PASSWORD = "tu_password";
const char* GITHUB_USER = "LMario28";
const char* REPO_NAME = "AroITSTA";
const char* FILENAME = "PruebaOTA.bin";

void setup() {
    Serial.begin(115200);
    delay(1000);
    
    Serial.println("\n" + String(50, '='));
    Serial.println("SISTEMA INICIADO");
    Serial.println(String(50, '='));
    
    // Opción 1: Actualizar desde GitHub
    bool updated = SimpleOTAUpdater::updateFromGitHub(
        SSID, PASSWORD, 
        GITHUB_USER, REPO_NAME, 
        FILENAME
    );
    
    if (!updated) {
        Serial.println("No se pudo actualizar, continuando...");
    }
    
    // Tu código normal aquí
    Serial.println("Ejecutando firmware principal...");
    // ...
}

void loop() {
    // Tu loop normal
    delay(1000);
}
