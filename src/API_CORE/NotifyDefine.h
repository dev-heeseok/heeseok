#pragma once

#ifndef NOTIFY_DEF
#define NOTIFY_DEF

enum class NMessage : UINT
{
	kUnknown = 0x0000,
	kUpdateDB = 0x0001,
};

enum class NAction : UINT
{
	kAdd = 0x0001,
	kDel = 0x0002,
	kMod = kAdd | kDel
};

struct tagNotification
{
	UINT uiType;
	UINT uiAction; // NAction
	WPARAM wParam;
	LPARAM lParam;

	tagNotification(UINT _uiType, UINT _uiAction, WPARAM _wParam, LPARAM _lParam)
		: uiType(_uiType), uiAction(_uiAction), wParam(_wParam), lParam(_lParam)
	{}
};

#endif // !NOTIFY_DEF
