#ifndef SONAR
#define SONAR

#include "stm32f10x.h"

typedef struct 
{
	uint16_t ltime;		//echo fly time(last)
	uint16_t ctime;		//echo fly time(current)
	uint16_t beggin;	//echo beggin time
	uint16_t end;		//echo end time
	uint16_t dis;		//echo fly time convert to distance
	float    vec;		//used in VFH method
	uint8_t  echo;		//flag to record echo state(beggin\end)

	int16_t  theta;		//angle

	uint8_t  fcnt; 		//filter count
}sonar;
extern sonar s[16];

typedef struct				    //������λ���ϴ�����֡
{
	int8_t buffer[15];	   		//������λ������
	int8_t cnt;			   	    //���ݳ���
	int8_t finish;				//֡������־
	int8_t updated;
}control;
extern control RxCtl;
extern control TxCtl;

//typedef struct					//����vff�ṹ��
//{
//	uint16_t dis[13];			//��������
//	uint16_t repul[13];			//�����ĳ�����С
//
//	uint16_t resultant;			//������С
//}VFF;
//
//extern VFF vff;

#endif
