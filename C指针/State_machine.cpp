// State_machine.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <stdio.h>

// 状态枚举
typedef enum {
    STATE_LOCKED,  //锁定状态    0
    STATE_UNLOCKED,  //解锁状态  1
    STATE_DELIVERING_ITEM,  //交付项目状态   2
    STATE_OUT_OF_ITEMS  //出货状态     3
} ATMState;

// 事件枚举
typedef enum {
    EVENT_INSERT_MONEY,  //投入货币事件
    EVENT_TURN_CRANK,    //转向曲柄
    EVENT_DISPENSE_ITEM   //分配物体
} ATMEvent;

// 自动售货机结构体
typedef struct {
    ATMState state; //状态
    int itemCount;  //金额  物品数量
} AutomaticTellerMachine;

// 初始化自动售货机
void initATM(AutomaticTellerMachine* atm) {
    atm->state = STATE_LOCKED;
    atm->itemCount = 10;
}

// 处理事件
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

    // 模拟事件
    handleEvent(&atm, EVENT_INSERT_MONEY);//投入货币事件
    handleEvent(&atm, EVENT_TURN_CRANK);  //转向曲柄
    handleEvent(&atm, EVENT_DISPENSE_ITEM);  //分配物 

    return 0;
}