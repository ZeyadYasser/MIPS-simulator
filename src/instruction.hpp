#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <cstdint>
#include <cassert>

enum INSTRFORMAT { RTYPE, ITYPE, JTYPE };

struct Instruction
{
	uint32_t instr;
	uint8_t opcode;
	uint8_t regSrc;
	uint8_t regTgt;
	uint8_t regDst;
	uint8_t shamt;
	uint8_t funct;
	uint16_t immed;
	uint32_t adrsTgt;

	INSTRFORMAT instrFormat;

	Instruction(uint32_t);
	uint32_t subword(uint8_t, uint8_t) const;
	uint32_t signExtend8bit(uint8_t) const;
	uint32_t signExtend16bit(uint16_t) const;
	//void deduceFormat();
};

#endif