// State_machine.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
#include <stdio.h>

// ״̬ö��
typedef enum {
    STATE_LOCKED,  //����״̬    0
    STATE_UNLOCKED,  //����״̬  1
    STATE_DELIVERING_ITEM,  //������Ŀ״̬   2
    STATE_OUT_OF_ITEMS  //����״̬     3
} ATMState;

// �¼�ö��
typedef enum {
    EVENT_INSERT_MONEY,  //Ͷ������¼�
    EVENT_TURN_CRANK,    //ת������
    EVENT_DISPENSE_ITEM   //��������
} ATMEvent;

// �Զ��ۻ����ṹ��
typedef struct {
    ATMState state; //״̬
    int itemCount;  //���  ��Ʒ����
} AutomaticTellerMachine;

// ��ʼ���Զ��ۻ���
void initATM(AutomaticTellerMachine* atm) {
    atm->state = STATE_LOCKED;
    atm->itemCount = 10;
}

// �����¼�
void handleEvent(AutomaticTellerMachine* atm, ATMEvent event) {
    switch (atm->state) {
    case STATE_LOCKED:
        if (event == EVENT_INSERT_MONEY) {
            atm->state = STATE_UNLOCKED;
            printf("%d\n", STATE_UNLOCKED);
            printf("Money inserted. Unlocked.\n");
        }
        break;
    case STATE_UNLOCKED:
        if (event == EVENT_TURN_CRANK) {
            if (atm->itemCount > 0) {
                atm->state = STATE_DELIVERING_ITEM;
                printf("Giving you an item.\n");
                atm->itemCount--;
            }
            else {
                atm->state = STATE_OUT_OF_ITEMS;
                printf("Out of items. Locked.\n");
            }
        }
        break;
    case STATE_DELIVERING_ITEM:
        if (event == EVENT_DISPENSE_ITEM) {
            atm->state = STATE_LOCKED;
            printf("Item dispen sed. Locked.\n");
        }
        break;
    case STATE_OUT_OF_ITEMS:
        printf("No items remaining. Please wait or insert more money.\n");
        break;
    }
}

int main() {
    AutomaticTellerMachine atm;
    initATM(&atm);

    // ģ���¼�
    handleEvent(&atm, EVENT_INSERT_MONEY);//Ͷ������¼�
    handleEvent(&atm, EVENT_TURN_CRANK);  //ת������
    handleEvent(&atm, EVENT_DISPENSE_ITEM);  //������ 

    return 0;
}