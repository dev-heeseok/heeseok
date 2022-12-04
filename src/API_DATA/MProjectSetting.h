#pragma once

#include "../API_CORE/MBlock.h"

class AFX_EXT_CLASS MProjectSetting : public MBlock
{
public:
	MKEY key = 0; // KEY �� ���� ���� �����ؾ� �Ѵ�.
	MString strName;

	DECLARE_PRIMARY_KEY(MProjectSetting, key)

public:
	MProjectSetting();
	virtual ~MProjectSetting();

public:
	virtual BOOL ChmodFile(MTableSpace* pTableSpace) override;
	virtual BOOL ChmodMomory(MTableSpace* pTableSpace) override;

public:
	void Initialize();

};

