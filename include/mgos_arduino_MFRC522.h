#ifndef CS_MOS_LIBS_ARDUINO_MFRC522_H_
#define CS_MOS_LIBS_ARDUINO_MFRC522_H_
#include "MFRC522.h"

#ifdef __cplusplus
extern "C"{
#endif
MFRC522* mgos_mfrc522_create();
//MFRC522* mgos_mfrc522_create(int rstPin);
//MFRC522* mgos_mfrc522_create(int csPin,int rstPin);
void mgos_mfrc_pcd_init(MFRC522* t);
bool mgos_mfrc_PICC_IsNewCardPresent(MFRC522* t);
#ifdef __cplusplus
}
#endif
#endif
