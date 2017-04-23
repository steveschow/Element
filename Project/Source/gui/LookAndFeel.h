
#ifndef EL_APP_LOOK_AND_FEEL_H
#define EL_APP_LOOK_AND_FEEL_H

#include "ElementApp.h"

namespace Element {

struct Colors
{
    static const Colour elemental;
    static const Colour toggleBlue;
    static const Colour toggleGreen;
    static const Colour toggleOrange;
};

class LookAndFeel : public LookAndFeel_E1
{
public:
    LookAndFeel() { }
    ~LookAndFeel() { }
    
    virtual void drawConcertinaPanelHeader (Graphics&, const Rectangle<int>& area,
                                            bool isMouseOver, bool isMouseDown,
                                            ConcertinaPanel&, Component&);
};

}



#endif  // EL_APP_LOOK_AND_FEEL_H