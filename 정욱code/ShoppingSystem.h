#pragma once

class UIinit;
class CtrlMemberManagement;
class MemberInfoDatabase;
class UIProfile;

class ShoppingSystem {
public:
	UIinit* uiInit;
	CtrlMemberManagement* ctrlMemberManagement;
	MemberInfoDatabase* memberInfoDatabase;
	UIProfile* uiProfile;
	ShoppingSystem();
};