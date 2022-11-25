#pragma once

#include "../API_CORE/MBlock.h"

#pragma pack(push, 4)

#define MBLOCK_NODE_HASH_SIZE 1000

class AFX_EXT_CLASS MNode : public MBlock
{
public:
	MKEY Key; // TODO. MKEY �� �ݵ�� ù��° ���ڿ��� �Ѵ�.
	MVector3d vPos3d;

public:
	MNode();
	virtual ~MNode();

public:
	virtual int GetDataType() override { return 0; }
	virtual void Initialize() override final;

	virtual BOOL ChmodRead(MSegment* pSegment) override;
	virtual BOOL ChmodWrite(MSegment* pSegment) override;

};

#pragma pack(pop)