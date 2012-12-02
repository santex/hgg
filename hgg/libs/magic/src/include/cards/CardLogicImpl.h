#ifndef _CARDLOGICIMPL_H_
#define _CARDLOGICIMPL_H_

#include "CardLogic.h"


class CardLogicImpl : public CardLogic {
public:
  CardLogicImpl(CardPHY& phy);
  virtual ~CardLogicImpl();

	/// \brief the core loop doing all the work
	virtual void loop();


	enum eCLIState {
		CLIS_Init,
		CLIS_Error,
		CLIS_Idle
	};

	eCLIState getState() const;
	const char* getStateString() const;

private:
	void setState(eCLIState s);
	eCLIState _state;
};


#endif //_CARDLOGICIMPL_H_