// =============================================
// 🔧 SPOT WELDER SSR - ANDROID COMPATIBLE
// =============================================

#include <WiFi.h>
#include <WebServer.h>

WebServer server(80);

// =============================================
// 🛠️ HARDWARE PIN CONFIGURATION
// =============================================
#define SSR_PIN         4     // Kontrol Solid State Relay
#define BUZZER_PIN      5     // Buzzer feedback audio  
#define BUTTON_PIN      2     // Tombol fisik (macro switch)
#define LED_PIN         13    // LED status

// =============================================
// ⚙️ WELDING PARAMETERS
// =============================================
int weldTime = 80;           // Waktu welding (ms)
int coolDownTime = 3000;     // Cooldown antar welding
bool systemReady = true;
bool isWelding = false;
int weldCount = 0;

// =============================================
// 🌐 WIFI CONFIGURATION
// =============================================
const char* ssid = "SpotWelder_Pro";
const char* password = "12345678";

// =============================================
// 🎵 BEEP FUNCTION - AUDIO FEEDBACK
// =============================================
void beep(int times, int duration = 100) {
  for(int i = 0; i
