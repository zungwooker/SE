#include "ShoppingSystem.h"
#include "UIinit.h"
#include "CtrlMemberManagement.h"
#include "MemberInfoDatabase.h"
#include "UIProfile.h"


ShoppingSystem::ShoppingSystem() {
	uiInit = new UIinit();
	ctrlMemberManagement = new CtrlMemberManagement();
	memberInfoDatabase = new MemberInfoDatabase();
	uiProfile = new UIProfile();
}
