#include "pch.h"
#include "ServerSocket.h"

//CServerSocket server;

CServerSocket* CServerSocket::m_instance = NULL;//��̬��Ա���������н�����������û�ж��壬����Ҫ��������涨�壬ʵ�����Ǹ���̬��Ա���������ڴ�
CServerSocket::CHelper CServerSocket::m_helper;

CServerSocket* pserver = CServerSocket::getInstance();