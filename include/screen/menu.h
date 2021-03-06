#pragma once

#include <string>
#include <vector>

#include "gfx.h"

typedef struct {
	std::string prefix;
	std::string data;
	std::string suffix;
} menuDetail;

typedef struct {
	std::string name;
	std::vector<menuDetail> details;
	bool status;
} menuItem;

class MENU {
public:
	void loadAssets();
	void setTabSelected(unsigned int tabId);
	unsigned int getTabSelected();
	void setMenuSelected(unsigned int menuId);
	unsigned int getMenuSelected();
	unsigned int getMenuSize();
	void toggleSelected();
	void addMenuItem(unsigned int tab, menuItem itm);
	void resetMenu();
	void drawMenu();
	void destroyAssets();
private:
	unsigned int tabSelected;
	unsigned int menuSelected;
	std::vector<menuItem> kip;
	std::vector<menuItem> bct;
	std::vector<menuItem> layeredFS;
	std::vector<menuItem> options;
	//FONTS
	font* mainFont;
	//TEXTURES
	texture* menuBackground;
	texture* menuBar;
	texture* menuBarSelected;
	texture* menuCheckmark;
	texture* menuQuestionmark;
	texture* menuScrollUp;
	texture* menuScrollDown;
	texture* tabKips;
	texture* tabKipsSelected;
	texture* tabBCT;
	texture* tabBCTSelected;
	texture* tabLayeredFS;
	texture* tabLayeredFSSelected;
	texture* tabOptions;
	texture* tabOptionsSelected;
	texture* detailEnabled;
	texture* detailDisabled;
	texture* detailLoaded;
	texture* detailUnloaded;
};