/////////////////////////////////////////////////////////////////////////////
// Name:        Frames.xs
// Purpose:     XS for Wx::Frame, Wx::Dialog, Wx::Panel
// Author:      Mattia Barbon
// Modified by:
// Created:     29/10/2000
// RCS-ID:      $Id: Frames.xs 2700 2009-12-13 11:25:50Z mbarbon $
// Copyright:   (c) 2000-2003, 2005-2009 Mattia Barbon
// Licence:     This program is free software; you can redistribute it and/or
//              modify it under the same terms as Perl itself
/////////////////////////////////////////////////////////////////////////////

#define PERL_NO_GET_CONTEXT

#include "cpp/wxapi.h"
#include "cpp/v_cback.h"

#undef THIS

WXPLI_BOOT_ONCE(Wx_Wnd);
#define boot_Wx_Wnd wxPli_boot_Wx_Wnd

MODULE=Wx_Wnd

INCLUDE: XS/Panel.xs

INCLUDE: perl -MExtUtils::XSpp::Cmd -e xspp -- -t typemap.xsp XS/Dialog.xs |

INCLUDE: XS/Frame.xs
INCLUDE: XS/StatusBar.xs
INCLUDE: XS/ToolBar.xs
INCLUDE: XS/Wizard.xs

INCLUDE: perl -MExtUtils::XSpp::Cmd -e xspp -- -t typemap.xsp XS/IconBundle.xsp |

INCLUDE: perl -MExtUtils::XSpp::Cmd -e xspp -- -t typemap.xsp XS/TopLevelWindow.xsp |

INCLUDE: perl -MExtUtils::XSpp::Cmd -e xspp -- -t typemap.xsp XS/PopupWindow.xsp |

INCLUDE: XS/ColourDialog.xs
INCLUDE: XS/DirDialog.xs
INCLUDE: XS/FileDialog.xs
INCLUDE: XS/TextEntryDialog.xs

INCLUDE: perl -MExtUtils::XSpp::Cmd -e xspp -- -t typemap.xsp XS/MessageDialog.xsp |

INCLUDE: XS/ProgressDialog.xs
INCLUDE: XS/SingleChoiceDialog.xs
INCLUDE: XS/MultiChoiceDialog.xs
INCLUDE: XS/FontDialog.xs
INCLUDE: XS/FindReplaceDialog.xs

INCLUDE: perl -MExtUtils::XSpp::Cmd -e xspp -- -t typemap.xsp XS/AboutDialog.xsp |

INCLUDE: perl -MExtUtils::XSpp::Cmd -e xspp -- -t typemap.xsp XS/PropertySheetDialog.xsp |

MODULE=Wx_Wnd
