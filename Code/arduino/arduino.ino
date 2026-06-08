#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;

void setup () {
    Serial.begin(9600);
    SPI.begin();
    mfrc522.PCD_Init();
}

void loop() {
    if (!mfrc522.PICC_IsNewCardPresent() || !mfrc522.PICC_ReadCardSerial()) return;

    for (byte page = 4; page < 40; page++) {
        byte buffer[18];
        byte size = sizeof(buffer);

        if (mfrc522.MIFARE_Read(page, buffer, &size) == MFRC522::STATUS_OK) {
      for (byte i = 0; i < 4; i++) {
        Serial.write(buffer[i]);
      }
    }
}
Serial.write('\n');
mfrc522.PICC_HaltA();
}