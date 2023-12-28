#pragma once

#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/
unsigned short crc16(unsigned short crcStart,unsigned char *pBuff, unsigned int len);
void addCrc16ToEnd(unsigned char* pBuff, int offset, int bufLen);
int checkCrc16OnEnd(unsigned char* pBuff, int offset, int bufLen);
#ifdef __cplusplus
}
#endif /*__cplusplus*/
