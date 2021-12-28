#pragma once
#include "Common.h"
#include "User.h"
#include "Rail.h"
#include "Route.h"

#define valid 1
#define invalid 0

typedef struct Order {
    int number;        // ������
    User user;         // �˳���
    Rail rail;         // ����
    Route route;         // ��ǰ������·��
    char* date;        // ��Ʊ����
    int condition;     // Ʊ��״̬����Ч����Ч��
    struct Order* next;
} Order, * OrderNode;