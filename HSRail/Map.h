#pragma once
#include "Common.h"

#define VISITED 1
#define UNVISITED 0

typedef struct Map {
    String* places;     // վ��
    int** ways;         // ��·�����е�ȨֵΪ·�̵ĳ���
    int placeNum;       // �ص����
    int wayNum;         // ��·��
    int* tags;          // ���ڱ���ʱ�ı��
} Map;

int LocateVex(Map M, String places);