#ifndef OPTION_H
#define OPTION_H

#include <Window.h> //BWindow 
#include "optionview.h"
#include "enum.h"

class OptionWindow : public BWindow 
{
 public:
	int LockW; //flag pour eviter les aller retour entre les 2 fenetres
	int LockH; //flag pour eviter les aller retour entre les 2 fenetres

	OptionView* Option;

	OptionWindow(); //constructeur
	virtual	bool QuitRequested(); //pour quitter
	virtual void MessageReceived(BMessage* message);
};

#endif
