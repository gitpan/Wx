/////////////////////////////////////////////////////////////////////////////
// Name:        ext/stc/cpp/st_constants.cpp
// Purpose:     constants for Wx::STC
// Author:      Marcus Friedlaender and Mattia Barbon
// Created:     23/05/2002
// RCS-ID:      $Id: st_constants.cpp,v 1.15 2004/06/20 08:20:30 mbarbon Exp $
// Copyright:   (c) 2002-2004 Marcus Friedlaender and Mattia Barbon
// Licence:     This program is free software; you can redistribute it and/or
//              modify it under the same terms as Perl itself
/////////////////////////////////////////////////////////////////////////////

#include "cpp/constants.h"

double stc_constant( const char* name, int arg )
{
    // !package: Wx
    // !parser: sub { $_[0] =~ m<^\s*r\w*\(\s*(\w+)\s*\);\s*(?://(.*))?$> }
    // !tag: stc
#define r( n ) \
    if( strEQ( name, #n ) ) \
        return n;

    WX_PL_CONSTANT_INIT();
    if( strlen( name ) >= 7 )
        fl = name[6];
    else
        fl = 0;

    switch( fl )
    {
    case 'A':
        r( wxSTC_AVE_DEFAULT );
        r( wxSTC_AVE_COMMENT );
        r( wxSTC_AVE_NUMBER );
        r( wxSTC_AVE_WORD );
        r( wxSTC_AVE_STRING );
        r( wxSTC_AVE_ENUM );
        r( wxSTC_AVE_STRINGEOL );
        r( wxSTC_AVE_IDENTIFIER );
        r( wxSTC_AVE_OPERATOR );
        r( wxSTC_ADA_DEFAULT );
        r( wxSTC_ADA_NUMBER );
        r( wxSTC_ADA_WORD );
        r( wxSTC_ADA_STRING );
        r( wxSTC_ADA_CHARACTER );
        r( wxSTC_ADA_IDENTIFIER );
        r( wxSTC_ADA_STRINGEOL );
        r( wxSTC_ASM_DEFAULT );
        r( wxSTC_ASM_COMMENT );
        r( wxSTC_ASM_NUMBER );
        r( wxSTC_ASM_STRING );
        r( wxSTC_ASM_OPERATOR );
        r( wxSTC_ASM_IDENTIFIER );
        r( wxSTC_ASM_CPUINSTRUCTION );
        r( wxSTC_ASM_MATHINSTRUCTION );
        r( wxSTC_ASM_REGISTER );
        r( wxSTC_ASM_DIRECTIVE );
        r( wxSTC_ASM_DIRECTIVEOPERAND );
#if WXPERL_W_VERSION_GE( 2, 5, 2 )
        r( wxSTC_ASM_COMMENTBLOCK );
        r( wxSTC_ASM_CHARACTER );
        r( wxSTC_ASM_STRINGEOL );
        r( wxSTC_ASM_EXTINSTRUCTION );
#endif
        break;
    case 'B':
        r( wxSTC_B_DEFAULT );
        r( wxSTC_B_COMMENT );
        r( wxSTC_B_NUMBER );
        r( wxSTC_B_KEYWORD );
        r( wxSTC_B_STRING );
        r( wxSTC_B_PREPROCESSOR );
        r( wxSTC_B_OPERATOR );
        r( wxSTC_B_IDENTIFIER );
        r( wxSTC_B_DATE );
        r( wxSTC_BAT_DEFAULT );
        r( wxSTC_BAT_COMMENT );
        r( wxSTC_BAT_WORD );
        r( wxSTC_BAT_LABEL );
        r( wxSTC_BAT_HIDE );
        r( wxSTC_BAT_COMMAND );
        r( wxSTC_BAT_IDENTIFIER );
        r( wxSTC_BAT_OPERATOR );
        r( wxSTC_BAAN_DEFAULT );
        r( wxSTC_BAAN_COMMENT );
        r( wxSTC_BAAN_COMMENTDOC );
        r( wxSTC_BAAN_NUMBER );
        r( wxSTC_BAAN_WORD );
        r( wxSTC_BAAN_STRING );
        r( wxSTC_BAAN_PREPROCESSOR );
        r( wxSTC_BAAN_OPERATOR );
        r( wxSTC_BAAN_IDENTIFIER );
        r( wxSTC_BAAN_STRINGEOL );
        r( wxSTC_BAAN_WORD2 );
        break;
    case 'C':
        r( wxSTC_CHARSET_ANSI );
        r( wxSTC_CHARSET_DEFAULT );
        r( wxSTC_CHARSET_BALTIC );
        r( wxSTC_CHARSET_CHINESEBIG5 );
        r( wxSTC_CHARSET_EASTEUROPE );
        r( wxSTC_CHARSET_GB2312 );
        r( wxSTC_CHARSET_GREEK );
        r( wxSTC_CHARSET_HANGUL );
        r( wxSTC_CHARSET_MAC );
        r( wxSTC_CHARSET_OEM );
        r( wxSTC_CHARSET_RUSSIAN );
        r( wxSTC_CHARSET_SHIFTJIS );
        r( wxSTC_CHARSET_SYMBOL );
        r( wxSTC_CHARSET_TURKISH );
        r( wxSTC_CHARSET_JOHAB );
        r( wxSTC_CHARSET_HEBREW );
        r( wxSTC_CHARSET_ARABIC );
        r( wxSTC_CHARSET_VIETNAMESE );
        r( wxSTC_CHARSET_THAI );
        r( wxSTC_CASE_MIXED );
        r( wxSTC_CASE_UPPER );
        r( wxSTC_CASE_LOWER );
        r( wxSTC_CACHE_NONE );
        r( wxSTC_CACHE_CARET );
        r( wxSTC_CACHE_PAGE );
        r( wxSTC_CACHE_DOCUMENT );
        r( wxSTC_CURSORNORMAL );
        r( wxSTC_CURSORWAIT );
        r( wxSTC_CARET_SLOP );
        r( wxSTC_CARET_STRICT );
        r( wxSTC_CARET_JUMPS );
        r( wxSTC_CARET_EVEN );
        r( wxSTC_C_DEFAULT );
        r( wxSTC_C_COMMENT );
        r( wxSTC_C_COMMENTLINE );
        r( wxSTC_C_COMMENTDOC );
        r( wxSTC_C_NUMBER );
        r( wxSTC_C_WORD );
        r( wxSTC_C_STRING );
        r( wxSTC_C_CHARACTER );
        r( wxSTC_C_UUID );
        r( wxSTC_C_PREPROCESSOR );
        r( wxSTC_C_OPERATOR );
        r( wxSTC_C_IDENTIFIER );
        r( wxSTC_C_STRINGEOL );
        r( wxSTC_C_VERBATIM );
        r( wxSTC_C_REGEX );
        r( wxSTC_C_COMMENTLINEDOC );
        r( wxSTC_C_WORD2 );
        r( wxSTC_C_COMMENTDOCKEYWORD );
        r( wxSTC_C_COMMENTDOCKEYWORDERROR );
        r( wxSTC_CONF_DEFAULT );
        r( wxSTC_CONF_COMMENT );
        r( wxSTC_CONF_NUMBER );
        r( wxSTC_CONF_IDENTIFIER );
        r( wxSTC_CONF_EXTENSION );
        r( wxSTC_CONF_PARAMETER );
        r( wxSTC_CONF_STRING );
        r( wxSTC_CONF_OPERATOR );
        r( wxSTC_CONF_IP );
        r( wxSTC_CONF_DIRECTIVE );
        r( wxSTC_CMD_REDO );
        r( wxSTC_CMD_SELECTALL );
        r( wxSTC_CMD_UNDO );
        r( wxSTC_CMD_CUT );
        r( wxSTC_CMD_COPY );
        r( wxSTC_CMD_PASTE );
        r( wxSTC_CMD_LINEDOWN );
        r( wxSTC_CMD_LINEDOWNEXTEND );
        r( wxSTC_CMD_LINEUP );
        r( wxSTC_CMD_LINEUPEXTEND );
#if WXPERL_W_VERSION_GE( 2, 5, 1 )
        r( wxSTC_CMD_LINECOPY );
#endif
        r( wxSTC_CMD_CHARLEFT );
        r( wxSTC_CMD_CHARLEFTEXTEND );
        r( wxSTC_CMD_CHARRIGHT );
        r( wxSTC_CMD_CHARRIGHTEXTEND );
        r( wxSTC_CMD_WORDLEFT );
        r( wxSTC_CMD_WORDLEFTEXTEND );
        r( wxSTC_CMD_WORDRIGHT );
        r( wxSTC_CMD_WORDRIGHTEXTEND );
        r( wxSTC_CMD_HOME );
        r( wxSTC_CMD_HOMEEXTEND );
        r( wxSTC_CMD_LINEEND );
        r( wxSTC_CMD_LINEENDEXTEND );
        r( wxSTC_CMD_DOCUMENTSTART );
        r( wxSTC_CMD_DOCUMENTSTARTEXTEND );
        r( wxSTC_CMD_DOCUMENTEND );
        r( wxSTC_CMD_DOCUMENTENDEXTEND );
        r( wxSTC_CMD_PAGEUP );
        r( wxSTC_CMD_PAGEUPEXTEND );
        r( wxSTC_CMD_PAGEDOWN );
        r( wxSTC_CMD_PAGEDOWNEXTEND );
        r( wxSTC_CMD_EDITTOGGLEOVERTYPE );
        r( wxSTC_CMD_CANCEL );
        r( wxSTC_CMD_DELETEBACK );
        r( wxSTC_CMD_TAB );
        r( wxSTC_CMD_BACKTAB );
        r( wxSTC_CMD_NEWLINE );
        r( wxSTC_CMD_FORMFEED );
        r( wxSTC_CMD_VCHOME );
        r( wxSTC_CMD_VCHOMEEXTEND );
        r( wxSTC_CMD_ZOOMIN );
        r( wxSTC_CMD_ZOOMOUT );
        r( wxSTC_CMD_DELWORDLEFT );
        r( wxSTC_CMD_DELWORDRIGHT );
        r( wxSTC_CMD_LINECUT );
        r( wxSTC_CMD_LINEDELETE );
        r( wxSTC_CMD_LINETRANSPOSE );
        r( wxSTC_CMD_LOWERCASE );
        r( wxSTC_CMD_UPPERCASE );
        r( wxSTC_CMD_LINESCROLLDOWN );
        r( wxSTC_CMD_LINESCROLLUP );
        r( wxSTC_CMD_DELETEBACKNOTLINE );
        r( wxSTC_CMD_HOMEDISPLAY );
        r( wxSTC_CMD_HOMEDISPLAYEXTEND );
        r( wxSTC_CMD_LINEENDDISPLAY );
        r( wxSTC_CMD_LINEENDDISPLAYEXTEND );
        r( wxSTC_CMD_CLEAR );
        r( wxSTC_CMD_WORDPARTLEFT );
        r( wxSTC_CMD_WORDPARTLEFTEXTEND );
        r( wxSTC_CMD_WORDPARTRIGHT );
        r( wxSTC_CMD_WORDPARTRIGHTEXTEND );
        r( wxSTC_CMD_DELLINELEFT );
        r( wxSTC_CMD_DELLINERIGHT );
        r( wxSTC_CSS_DEFAULT );
        r( wxSTC_CSS_TAG );
        r( wxSTC_CSS_CLASS );
        r( wxSTC_CSS_PSEUDOCLASS );
        r( wxSTC_CSS_UNKNOWN_PSEUDOCLASS );
        r( wxSTC_CSS_OPERATOR );
        r( wxSTC_CSS_IDENTIFIER );
        r( wxSTC_CSS_UNKNOWN_IDENTIFIER );
        r( wxSTC_CSS_VALUE );
        r( wxSTC_CSS_COMMENT );
        r( wxSTC_CSS_ID );
        r( wxSTC_CSS_IMPORTANT );
        r( wxSTC_CSS_DIRECTIVE );
        r( wxSTC_CSS_DOUBLESTRING );
        r( wxSTC_CSS_SINGLESTRING );
        break;
    case 'D':
        r( wxSTC_DIFF_DEFAULT );
        r( wxSTC_DIFF_COMMENT );
        r( wxSTC_DIFF_COMMAND );
        r( wxSTC_DIFF_HEADER );
        r( wxSTC_DIFF_POSITION );
        r( wxSTC_DIFF_DELETED );
        r( wxSTC_DIFF_ADDED );
        break;
    case 'E':
        r( wxSTC_EOL_CR );
        r( wxSTC_EOL_LF );
        r( wxSTC_EOL_CRLF );
        r( wxSTC_EDGE_NONE );
        r( wxSTC_EDGE_LINE );
        r( wxSTC_EDGE_BACKGROUND );
        r( wxSTC_ERR_DEFAULT );
        r( wxSTC_ERR_PYTHON );
        r( wxSTC_ERR_GCC );
        r( wxSTC_ERR_MS );
        r( wxSTC_ERR_CMD );
        r( wxSTC_ERR_BORLAND );
        r( wxSTC_ERR_PERL );
        r( wxSTC_ERR_NET );
        r( wxSTC_ERR_LUA );
        r( wxSTC_ERR_CTAG );
        r( wxSTC_ERR_DIFF_CHANGED );
        r( wxSTC_ERR_DIFF_ADDITION );
        r( wxSTC_ERR_DIFF_DELETION );
        r( wxSTC_ERR_DIFF_MESSAGE );
        r( wxSTC_EIFFEL_DEFAULT );
        r( wxSTC_EIFFEL_COMMENTLINE );
        r( wxSTC_EIFFEL_NUMBER );
        r( wxSTC_EIFFEL_WORD );
        r( wxSTC_EIFFEL_STRING );
        r( wxSTC_EIFFEL_CHARACTER );
        r( wxSTC_EIFFEL_OPERATOR );
        r( wxSTC_EIFFEL_IDENTIFIER );
        r( wxSTC_EIFFEL_STRINGEOL );
        break;
    case 'F':
        r( wxSTC_FIND_WHOLEWORD );
        r( wxSTC_FIND_MATCHCASE );
        r( wxSTC_FIND_WORDSTART );
        r( wxSTC_FIND_REGEXP );
        r( wxSTC_FOLDLEVELBASE  );
        r( wxSTC_FOLDLEVELWHITEFLAG );
        r( wxSTC_FOLDLEVELHEADERFLAG );
        r( wxSTC_FOLDLEVELNUMBERMASK );
        break;
    case 'H':
        r( wxSTC_H_DEFAULT );
        r( wxSTC_H_TAG );
        r( wxSTC_H_TAGUNKNOWN );
        r( wxSTC_H_ATTRIBUTE );
        r( wxSTC_H_ATTRIBUTEUNKNOWN );
        r( wxSTC_H_NUMBER );
        r( wxSTC_H_DOUBLESTRING );
        r( wxSTC_H_SINGLESTRING );
        r( wxSTC_H_OTHER );
        r( wxSTC_H_COMMENT );
        r( wxSTC_H_ENTITY );
        r( wxSTC_H_TAGEND );
        r( wxSTC_H_XMLSTART );
        r( wxSTC_H_XMLEND );
        r( wxSTC_H_SCRIPT );
        r( wxSTC_H_ASP );
        r( wxSTC_H_ASPAT );
        r( wxSTC_H_CDATA );
        r( wxSTC_H_QUESTION );
        r( wxSTC_H_VALUE );
        r( wxSTC_H_XCCOMMENT );
        r( wxSTC_H_SGML_DEFAULT );
        r( wxSTC_H_SGML_COMMAND );
        r( wxSTC_H_SGML_1ST_PARAM );
        r( wxSTC_H_SGML_DOUBLESTRING );
        r( wxSTC_H_SGML_SIMPLESTRING );
        r( wxSTC_H_SGML_ERROR );
        r( wxSTC_H_SGML_SPECIAL );
        r( wxSTC_H_SGML_ENTITY );
        r( wxSTC_H_SGML_COMMENT );
        r( wxSTC_H_SGML_1ST_PARAM_COMMENT );
        r( wxSTC_H_SGML_BLOCK_DEFAULT );
        r( wxSTC_HJ_START );
        r( wxSTC_HJ_DEFAULT );
        r( wxSTC_HJ_COMMENT );
        r( wxSTC_HJ_COMMENTLINE );
        r( wxSTC_HJ_COMMENTDOC );
        r( wxSTC_HJ_NUMBER );
        r( wxSTC_HJ_WORD );
        r( wxSTC_HJ_KEYWORD );
        r( wxSTC_HJ_DOUBLESTRING );
        r( wxSTC_HJ_SINGLESTRING );
        r( wxSTC_HJ_SYMBOLS );
        r( wxSTC_HJ_STRINGEOL );
        r( wxSTC_HJ_REGEX );
        r( wxSTC_HJA_START );
        r( wxSTC_HJA_DEFAULT );
        r( wxSTC_HJA_COMMENT );
        r( wxSTC_HJA_COMMENTLINE );
        r( wxSTC_HJA_COMMENTDOC );
        r( wxSTC_HJA_NUMBER );
        r( wxSTC_HJA_WORD );
        r( wxSTC_HJA_KEYWORD );
        r( wxSTC_HJA_DOUBLESTRING );
        r( wxSTC_HJA_SINGLESTRING );
        r( wxSTC_HJA_SYMBOLS );
        r( wxSTC_HJA_STRINGEOL );
        r( wxSTC_HJA_REGEX );
        r( wxSTC_HB_START );
        r( wxSTC_HB_DEFAULT );
        r( wxSTC_HB_COMMENTLINE );
        r( wxSTC_HB_NUMBER );
        r( wxSTC_HB_WORD );
        r( wxSTC_HB_STRING );
        r( wxSTC_HB_IDENTIFIER );
        r( wxSTC_HB_STRINGEOL );
        r( wxSTC_HBA_START );
        r( wxSTC_HBA_DEFAULT );
        r( wxSTC_HBA_COMMENTLINE );
        r( wxSTC_HBA_NUMBER );
        r( wxSTC_HBA_WORD );
        r( wxSTC_HBA_STRING );
        r( wxSTC_HBA_IDENTIFIER );
        r( wxSTC_HBA_STRINGEOL );
        r( wxSTC_HP_START );
        r( wxSTC_HP_DEFAULT );
        r( wxSTC_HP_COMMENTLINE );
        r( wxSTC_HP_NUMBER );
        r( wxSTC_HP_STRING );
        r( wxSTC_HP_CHARACTER );
        r( wxSTC_HP_WORD );
        r( wxSTC_HP_TRIPLE );
        r( wxSTC_HP_TRIPLEDOUBLE );
        r( wxSTC_HP_CLASSNAME );
        r( wxSTC_HP_DEFNAME );
        r( wxSTC_HP_OPERATOR );
        r( wxSTC_HP_IDENTIFIER );
        r( wxSTC_HPA_START );
        r( wxSTC_HPA_DEFAULT );
        r( wxSTC_HPA_COMMENTLINE );
        r( wxSTC_HPA_NUMBER );
        r( wxSTC_HPA_STRING );
        r( wxSTC_HPA_CHARACTER );
        r( wxSTC_HPA_WORD );
        r( wxSTC_HPA_TRIPLE );
        r( wxSTC_HPA_TRIPLEDOUBLE );
        r( wxSTC_HPA_CLASSNAME );
        r( wxSTC_HPA_DEFNAME );
        r( wxSTC_HPA_OPERATOR );
        r( wxSTC_HPA_IDENTIFIER );
        r( wxSTC_HPHP_DEFAULT );
        r( wxSTC_HPHP_HSTRING );
        r( wxSTC_HPHP_SIMPLESTRING );
        r( wxSTC_HPHP_WORD );
        r( wxSTC_HPHP_NUMBER );
        r( wxSTC_HPHP_VARIABLE );
        r( wxSTC_HPHP_COMMENT );
        r( wxSTC_HPHP_COMMENTLINE );
        r( wxSTC_HPHP_HSTRING_VARIABLE );
        r( wxSTC_HPHP_OPERATOR );
        break;
    case 'I':
        r( wxSTC_INDIC_MAX );
        r( wxSTC_INDIC_PLAIN );
        r( wxSTC_INDIC_SQUIGGLE );
        r( wxSTC_INDIC_TT );
        r( wxSTC_INDIC_DIAGONAL );
        r( wxSTC_INDIC_STRIKE );
        r( wxSTC_INDIC0_MASK );
        r( wxSTC_INDIC1_MASK );
        r( wxSTC_INDIC2_MASK );
        r( wxSTC_INDICS_MASK );
        break;
    case 'K':
        r( wxSTC_KEY_DOWN );
        r( wxSTC_KEY_UP );
        r( wxSTC_KEY_LEFT );
        r( wxSTC_KEY_RIGHT );
        r( wxSTC_KEY_HOME );
        r( wxSTC_KEY_END );
        r( wxSTC_KEY_PRIOR );
        r( wxSTC_KEY_NEXT );
        r( wxSTC_KEY_DELETE );
        r( wxSTC_KEY_INSERT );
        r( wxSTC_KEY_ESCAPE );
        r( wxSTC_KEY_BACK );
        r( wxSTC_KEY_TAB );
        r( wxSTC_KEY_RETURN );
        r( wxSTC_KEY_ADD );
        r( wxSTC_KEY_SUBTRACT );
        r( wxSTC_KEY_DIVIDE );
        break;
    case 'L':
        r( wxSTC_LEX_ASM );
        r( wxSTC_LEX_CSS );
        r( wxSTC_LEX_PERL );
        r( wxSTC_LEX_XML );
        r( wxSTC_LEX_HTML );
        r( wxSTC_LEX_CONTAINER );
        r( wxSTC_LEX_NULL );
        r( wxSTC_LEX_PYTHON );
        r( wxSTC_LEX_CPP );
        r( wxSTC_LEX_SQL );
        r( wxSTC_LEX_VB );
        r( wxSTC_LEX_PROPERTIES );
        r( wxSTC_LEX_ERRORLIST );
        r( wxSTC_LEX_MAKEFILE );
        r( wxSTC_LEX_BATCH );
        r( wxSTC_LEX_XCODE );
        r( wxSTC_LEX_LATEX );
        r( wxSTC_LEX_LUA );
        r( wxSTC_LEX_DIFF );
        r( wxSTC_LEX_CONF );
        r( wxSTC_LEX_PASCAL );
        r( wxSTC_LEX_AVE );
        r( wxSTC_LEX_ADA );
        r( wxSTC_LEX_LISP );
        r( wxSTC_LEX_RUBY );
        r( wxSTC_LEX_EIFFEL );
        r( wxSTC_LEX_EIFFELKW );
        r( wxSTC_LEX_TCL );
        r( wxSTC_LEX_NNCRONTAB );
        r( wxSTC_LEX_BULLANT );
        r( wxSTC_LEX_VBSCRIPT );
        r( wxSTC_LEX_ASP );
        r( wxSTC_LEX_PHP );
        r( wxSTC_LEX_BAAN );
        r( wxSTC_LEX_MATLAB );
        r( wxSTC_LEX_SCRIPTOL );
        r( wxSTC_LEX_AUTOMATIC );
        r( wxSTC_LASTSTEPINUNDOREDO );
        r( wxSTC_L_DEFAULT );
        r( wxSTC_L_COMMAND );
        r( wxSTC_L_TAG );
        r( wxSTC_L_MATH );
        r( wxSTC_L_COMMENT );
        r( wxSTC_LUA_DEFAULT );
        r( wxSTC_LUA_COMMENT );
        r( wxSTC_LUA_COMMENTLINE );
        r( wxSTC_LUA_COMMENTDOC );
        r( wxSTC_LUA_NUMBER );
        r( wxSTC_LUA_WORD );
        r( wxSTC_LUA_STRING );
        r( wxSTC_LUA_CHARACTER );
        r( wxSTC_LUA_LITERALSTRING );
        r( wxSTC_LUA_PREPROCESSOR );
        r( wxSTC_LUA_OPERATOR );
        r( wxSTC_LUA_IDENTIFIER );
        r( wxSTC_LUA_STRINGEOL );
        r( wxSTC_LUA_WORD2 );
        r( wxSTC_LUA_WORD3 );
        r( wxSTC_LUA_WORD4 );
        r( wxSTC_LUA_WORD5 );
        r( wxSTC_LUA_WORD6 );
        r( wxSTC_LISP_DEFAULT );
        r( wxSTC_LISP_COMMENT );
        r( wxSTC_LISP_NUMBER );
        r( wxSTC_LISP_KEYWORD );
        r( wxSTC_LISP_STRING );
        r( wxSTC_LISP_STRINGEOL );
        r( wxSTC_LISP_IDENTIFIER );
        r( wxSTC_LISP_OPERATOR );
        break;
    case 'M':
        r( wxSTC_MARKER_MAX );
        r( wxSTC_MARK_CIRCLE );
        r( wxSTC_MARK_ROUNDRECT );
        r( wxSTC_MARK_ARROW );
        r( wxSTC_MARK_SMALLRECT );
        r( wxSTC_MARK_SHORTARROW );
        r( wxSTC_MARK_EMPTY );
        r( wxSTC_MARK_ARROWDOWN );
        r( wxSTC_MARK_MINUS );
        r( wxSTC_MARK_PLUS );
        r( wxSTC_MARK_VLINE );
        r( wxSTC_MARK_LCORNER );
        r( wxSTC_MARK_TCORNER );
        r( wxSTC_MARK_BOXPLUS );
        r( wxSTC_MARK_BOXPLUSCONNECTED );
        r( wxSTC_MARK_BOXMINUS );
        r( wxSTC_MARK_BOXMINUSCONNECTED );
        r( wxSTC_MARK_LCORNERCURVE );
        r( wxSTC_MARK_TCORNERCURVE );
        r( wxSTC_MARK_CIRCLEPLUS );
        r( wxSTC_MARK_CIRCLEPLUSCONNECTED );
        r( wxSTC_MARK_CIRCLEMINUS );
        r( wxSTC_MARK_CIRCLEMINUSCONNECTED );
        r( wxSTC_MARK_BACKGROUND );
        r( wxSTC_MARK_DOTDOTDOT );
        r( wxSTC_MARK_ARROWS );
        r( wxSTC_MARK_CHARACTER );
        r( wxSTC_MARKNUM_FOLDEREND );
        r( wxSTC_MARKNUM_FOLDEROPENMID );
        r( wxSTC_MARKNUM_FOLDERMIDTAIL );
        r( wxSTC_MARKNUM_FOLDERTAIL );
        r( wxSTC_MARKNUM_FOLDERSUB );
        r( wxSTC_MARKNUM_FOLDER );
        r( wxSTC_MARKNUM_FOLDEROPEN );
        r( wxSTC_MASK_FOLDERS );
        r( wxSTC_MARGIN_SYMBOL );
        r( wxSTC_MARGIN_NUMBER );
        r( wxSTC_MOD_INSERTTEXT );
        r( wxSTC_MOD_DELETETEXT );
        r( wxSTC_MOD_CHANGESTYLE );
        r( wxSTC_MOD_CHANGEFOLD );
        r( wxSTC_MOD_CHANGEMARKER );
        r( wxSTC_MOD_BEFOREINSERT );
        r( wxSTC_MOD_BEFOREDELETE );
        r( wxSTC_MODEVENTMASKALL );
        r( wxSTC_MAKE_DEFAULT );
        r( wxSTC_MAKE_COMMENT );
        r( wxSTC_MAKE_PREPROCESSOR );
        r( wxSTC_MAKE_IDENTIFIER );
        r( wxSTC_MAKE_OPERATOR );
        r( wxSTC_MAKE_TARGET );
        r( wxSTC_MAKE_IDEOL );
        r( wxSTC_MATLAB_DEFAULT );
        r( wxSTC_MATLAB_COMMENT );
        r( wxSTC_MATLAB_COMMAND );
        r( wxSTC_MATLAB_NUMBER );
        r( wxSTC_MATLAB_KEYWORD );
        r( wxSTC_MATLAB_STRING );
        r( wxSTC_MATLAB_OPERATOR );
        r( wxSTC_MATLAB_IDENTIFIER );
        break;
    case 'N':
        r( wxSTC_NNCRONTAB_DEFAULT );
        r( wxSTC_NNCRONTAB_COMMENT );
        r( wxSTC_NNCRONTAB_TASK );
        r( wxSTC_NNCRONTAB_SECTION );
        r( wxSTC_NNCRONTAB_KEYWORD );
        r( wxSTC_NNCRONTAB_MODIFIER );
        r( wxSTC_NNCRONTAB_ASTERISK );
        r( wxSTC_NNCRONTAB_NUMBER );
        r( wxSTC_NNCRONTAB_STRING );
        r( wxSTC_NNCRONTAB_ENVIRONMENT );
        r( wxSTC_NNCRONTAB_IDENTIFIER );
        break;
    case 'P':
        r( wxSTC_PRINT_NORMAL );
        r( wxSTC_PRINT_INVERTLIGHT );
        r( wxSTC_PRINT_BLACKONWHITE );
        r( wxSTC_PRINT_COLOURONWHITE );
        r( wxSTC_PRINT_COLOURONWHITEDEFAULTBG );
        r( wxSTC_PERFORMED_USER );
        r( wxSTC_PERFORMED_UNDO );
        r( wxSTC_PERFORMED_REDO );
        r( wxSTC_P_DEFAULT );
        r( wxSTC_P_COMMENTLINE );
        r( wxSTC_P_NUMBER );
        r( wxSTC_P_STRING );
        r( wxSTC_P_CHARACTER );
        r( wxSTC_P_WORD );
        r( wxSTC_P_TRIPLE );
        r( wxSTC_P_TRIPLEDOUBLE );
        r( wxSTC_P_CLASSNAME );
        r( wxSTC_P_DEFNAME );
        r( wxSTC_P_OPERATOR );
        r( wxSTC_P_IDENTIFIER );
        r( wxSTC_P_COMMENTBLOCK );
        r( wxSTC_P_STRINGEOL );
        r( wxSTC_PL_DEFAULT );
        r( wxSTC_PL_ERROR );
        r( wxSTC_PL_COMMENTLINE );
        r( wxSTC_PL_POD );
        r( wxSTC_PL_NUMBER );
        r( wxSTC_PL_WORD );
        r( wxSTC_PL_STRING );
        r( wxSTC_PL_CHARACTER );
        r( wxSTC_PL_PUNCTUATION );
        r( wxSTC_PL_PREPROCESSOR );
        r( wxSTC_PL_OPERATOR );
        r( wxSTC_PL_IDENTIFIER );
        r( wxSTC_PL_SCALAR );
        r( wxSTC_PL_ARRAY );
        r( wxSTC_PL_HASH );
        r( wxSTC_PL_SYMBOLTABLE );
        r( wxSTC_PL_REGEX );
        r( wxSTC_PL_REGSUBST );
        r( wxSTC_PL_LONGQUOTE );
        r( wxSTC_PL_BACKTICKS );
        r( wxSTC_PL_DATASECTION );
        r( wxSTC_PL_HERE_DELIM );
        r( wxSTC_PL_HERE_Q );
        r( wxSTC_PL_HERE_QQ );
        r( wxSTC_PL_HERE_QX );
        r( wxSTC_PL_STRING_Q );
        r( wxSTC_PL_STRING_QQ );
        r( wxSTC_PL_STRING_QX );
        r( wxSTC_PL_STRING_QR );
        r( wxSTC_PL_STRING_QW );
        r( wxSTC_PROPS_DEFAULT );
        r( wxSTC_PROPS_COMMENT );
        r( wxSTC_PROPS_SECTION );
        r( wxSTC_PROPS_ASSIGNMENT );
        r( wxSTC_PROPS_DEFVAL );
        break;
    case 'S':
        r( wxSTC_STYLE_DEFAULT );
        r( wxSTC_STYLE_LINENUMBER );
        r( wxSTC_STYLE_BRACELIGHT );
        r( wxSTC_STYLE_BRACEBAD );
        r( wxSTC_STYLE_CONTROLCHAR );
        r( wxSTC_STYLE_INDENTGUIDE );
        r( wxSTC_STYLE_LASTPREDEFINED );
        r( wxSTC_STYLE_MAX );
        r( wxSTC_SCMOD_SHIFT );
        r( wxSTC_SCMOD_CTRL );
        r( wxSTC_SCMOD_ALT );
        r( wxSTC_SCRIPTOL_DEFAULT );
        r( wxSTC_SCRIPTOL_COMMENTLINE );
        r( wxSTC_SCRIPTOL_NUMBER );
        r( wxSTC_SCRIPTOL_STRING );
        r( wxSTC_SCRIPTOL_CHARACTER );
        r( wxSTC_SCRIPTOL_PREPROCESSOR );
        r( wxSTC_SCRIPTOL_OPERATOR );
        r( wxSTC_SCRIPTOL_IDENTIFIER );
        r( wxSTC_SCRIPTOL_STRINGEOL );

        r( wxEVT_STC_CHANGE );
        r( wxEVT_STC_STYLENEEDED );
        r( wxEVT_STC_CHARADDED );
        r( wxEVT_STC_SAVEPOINTREACHED );
        r( wxEVT_STC_SAVEPOINTLEFT );
        r( wxEVT_STC_ROMODIFYATTEMPT );
        r( wxEVT_STC_KEY );
        r( wxEVT_STC_DOUBLECLICK );
        r( wxEVT_STC_UPDATEUI );
        r( wxEVT_STC_MODIFIED );
        r( wxEVT_STC_MACRORECORD );
        r( wxEVT_STC_MARGINCLICK );
        r( wxEVT_STC_NEEDSHOWN );
#if !WXPERL_W_VERSION_GE( 2, 5, 2 )
        r( wxEVT_STC_POSCHANGED );
#endif
        r( wxEVT_STC_PAINTED );
        r( wxEVT_STC_USERLISTSELECTION );
        r( wxEVT_STC_URIDROPPED );
        r( wxEVT_STC_DWELLSTART );
        r( wxEVT_STC_DWELLEND );
        r( wxEVT_STC_START_DRAG );
        r( wxEVT_STC_DRAG_OVER );
        r( wxEVT_STC_DO_DROP );
        r( wxEVT_STC_ZOOM );
        r( wxEVT_STC_HOTSPOT_CLICK );
        r( wxEVT_STC_HOTSPOT_DCLICK );
        r( wxEVT_STC_CALLTIP_CLICK );
        break;
    case 'T':
        r( wxSTC_TIME_FOREVER );
        break;
    case 'V':
        r( wxSTC_VISIBLE_SLOP );
        r( wxSTC_VISIBLE_STRICT );
        break;
    case 'W':
        r( wxSTC_WRAP_NONE );
        r( wxSTC_WRAP_WORD );

        r( wxSTC_WS_INVISIBLE );
        r( wxSTC_WS_VISIBLEALWAYS );
        r( wxSTC_WS_VISIBLEAFTERINDENT );
        break;
    }
#undef r

    WX_PL_CONSTANT_CLEANUP();
}

wxPlConstants stc_module( &stc_constant );
