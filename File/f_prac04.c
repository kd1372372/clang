#include<stdio.h>// �\���̂̐錾
#define Sol_Num 3 //�����̐�

typedef struct {
	char   Wname[20];	//���햼
	int    bullet;		//�e��
	float  atk;			  //�U����
} Weapon;						//�\���̂�Weapon�Ƃ��Ē�`
typedef struct {
	char   name[20];	//������
	int    hp;				//����hp
	Weapon wpn;			  //����\���̕ϐ�
} Soldier;					//�\���̂�Soldier�Ƃ��Ē�`
void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	Soldier sols[Sol_Num];
	//SetInfo�֐��̌Ăяo���i�������͍\���̕ϐ��̃A�h���X,�������̓t�@�C�����j
	SetInfo(sols, "file04.txt");
	//Display�֐��̌Ăяo���i�������͍\���̕ϐ��j
	Display(sols);
}

void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	int i;
	//�t�@�C���I�[�v���A�߂�lNULL�Ȃ�G���[�\��
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < Sol_Num; i++) {
			//�t�@�C������ǂݎ�����l���\���̂̃����o�Ƃ��đ��
			//*s�̓|�C���^�ϐ��Ȃ̂Ń����o�̓A���[���Z�q�Ŏw��
			//wpn�͍\���̕ϐ��Ȃ̂Ń����o�̓h�b�g��t���Ďw��
			fscanf(fp, "%s%d%s%d%f", (s + i)->name,&(s + i)->hp,(s + i)->wpn.Wname,
				&(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("�t�@�C���̓ǂݍ��݃G���[\n");
	}
}

void Display(Soldier* s) {
	int i;
	for (i = 0; i < Sol_Num; i++) {
		//s�̓|�C���^�ϐ��Ȃ̂ŁA�A���[(->)�Ń����o���w��
		printf("%s �̗�:%d\n", (s + i)->name, (s + i)->hp);
		printf("����:%s �@�c�e��:%d �@�U����:%.2f\n",
			(s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
	}
}