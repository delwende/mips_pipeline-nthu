#include <stdbool.h>

#ifndef OPERATION_H_INCLUDED
#define OPERATION_H_INCLUDED

void XOR_funt(int* result,int* input1,int* input2);
void NOR_funt(int* result,int* input1,int* input2);
void NAND_funt(int* result,int* input1,int* input2);
void SLT_funt(int* result,int* input1,int* input2);
void SLL_funt(int* result,int* sh,int* input2);
void SRL_funt(int* result,int* sh,int* input2);
void SRA_funt(int* result,int* sh,int* input2);

void AND_funt(int* result,int* input1,int* input2);
void OR_funt(int* result,int* input1,int* input2);

void JR_funt(int* PC,int* input1);
void LUI_funt(int* result, int* input2);
void NOT_funt(int* input);
void pc_ADD(int* result,int* input1,int* input2, bool* error_buffer);
void ADDU_funt(int* result,int* input1,int* input2);
void SUB_funt(int* result,int* input1,int* input2, bool* error_buffer);

typedef struct instruc{
	int inst[32];
	int opcode[6];
	int rs[5];
	int rt[5];
	int rd[5];
	int shamt[5];
	int imme[16];
	int exImme[32];
	int funct[6];
	int L[26];

	int read_Reg1[32];
	int read_Reg2[32];
	int read_Mem[32];
	int register_AluResult[32];
	int alu_Control;

        int dst_Of_Instruction;
	int is_Jumping;
        int is_Branching;
        int is_MemRead;
        int is_MemToReg;
        int ALUOP;
        int is_MemWrite;
        int is_AluSrcImme;
        int is_RegWrite;
	int is_SystemCall;

	int ra[32];
	int is_Jal;
}instruc;

// R-Typ



#endif
