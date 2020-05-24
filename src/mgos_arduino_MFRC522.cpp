#include "mgos_arduino_MFRC522.h"

MFRC522* mgos_mfrc522_create(){
    return new MFRC522();
}

/*MFRC522* mgos_mfrc522_create(int rstPin){
    return new MFRC522(rstPin);
}

MFRC522* mgos_mfrc522_create(int csPin,int rstPin){
    return new MFRC522(csPin,rstPin);
}
*/
void mgos_mfrc_pcd_init(MFRC522* t){
    if(t==nullptr)return;
    t->PCD_Init();
}

bool mgos_mfrc_PICC_IsNewCardPresent(MFRC522* t){
    if(t==nullptr)return false;
    return t->PICC_IsNewCardPresent();
}
