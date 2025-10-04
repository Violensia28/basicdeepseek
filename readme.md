# 🔧 SPOT WELDER SSR - ANDROID FLASH

Firmware spot welder dengan kontrol SSR via WiFi + Tombol Fisik

## 📲 CARA DOWNLOAD & FLASH:

### **STEP 1: DOWNLOAD FIRMWARE**
1. Buka **Actions** tab di GitHub repository
2. Klik workflow terbaru yang **SUCCESS**
3. Download **spot-welder-firmware.zip**
4. Extract dapat **firmware.bin**

### **STEP 2: FLASH KE ESP32**
1. Install app **"ESP32 Flasher"** di Android
2. Hubungkan ESP32 via USB OTG
3. **Mode Flash ESP32:**
   - Tahan tombol **BOOT**
   - Tekan **RESET** 
   - Lepas **RESET**
   - Lepas **BOOT**
4. Pilih file **firmware.bin**
5. Flash dan tunggu selesai

## 🛠️ FITUR:
- ✅ Kontrol SSR via Web (HP)
- ✅ Tombol Fisik (Macro Switch) 
- ✅ Buzzer Feedback
- ✅ LED Status Indicator
- ✅ Adjustable Weld Time
- ✅ Safety Cooldown

## 🔌 HARDWARE:
- SSR Pin: GPIO 4
- Buzzer Pin: GPIO 5  
- Button Pin: GPIO 2
- LED Pin: GPIO 13

## 📡 WIFI:
- SSID: SpotWelder_Pro
- Password: 12345678
- IP: 192.168.4.1
