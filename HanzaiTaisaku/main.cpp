#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    unsigned int Cr;
    if (DxLib_Init() == -1)    // �c�w���C�u��������������
    {
        return -1;    // �G���[���N�����璼���ɏI��
    }
    Cr = GetColor(0, 0, 255);        // �F�̒l���擾

    DrawBox(0, 0, 640, 480, Cr, TRUE);    // �l�p�`��`��

    WaitKey();                // �L�[�̓��͑҂�(�wWaitKey�x���g�p)
     // ���F�̒l���擾
    Cr = GetColor(255, 255, 255);

    // ������̕`��
    DrawString(250, 240 - 32, "��", Cr);

    WaitKey();        // �L�[�̓��͑҂�(�wWaitKey�x���g�p)
    DxLib_End();        // �c�w���C�u�����g�p�̏I������

    return 0;        // �\�t�g�̏I��
}