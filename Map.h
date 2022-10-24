#pragma once

#include <vector>

class Map
{
public:
	Map();
	virtual ~Map();

	void load();
	void unload();

	void update();

	// �`��
	void draw();

private:
	// �}�b�v�`�b�v�ҏW�p�J�[�\���̕\��
	void drawCursor();

	// �}�b�v�`�b�v�̐����擾����
	int chipNumX();
	int chipNumY();
	int chipNum();

	// �}�b�v�f�[�^�̓��o��
	void outputData();	// �}�b�v�̃f�[�^���o�͂���
	void readData();	// �}�b�v��

private:
	// �O���t�B�b�N�f�[�^�̃n���h��
	int m_handle;

	// �O���t�B�b�N�f�[�^
	int m_graphWidth;
	int m_graphHeight;

	// �}�b�v�`�b�v�ҏW�p�f�[�^
	int m_cursorNo;
	std::vector<int> m_mapData;
};