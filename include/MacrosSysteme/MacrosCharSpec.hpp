#ifndef MACROSCHARSPEC_HPP
#define MACROSCHARSPEC_HPP

#include "MacrosOS.hpp"

// Définition des macros pour les caractères accentués.
#if defined (WINDOWS)
	#define eAccAigu "\x82" /*!< Cette macro définit la valeur pour le caractère 'é' pour les systèmes Posix, Mac OS et Windows. */
	#define eAccCirconflexe "\x88" /*!< Cette macro définit la valeur pour le caractère 'ê' pour les systèmes Posix, Mac OS et Windows. */
	#define eTrema "\x89" /*!< Cette macro définit la valeur pour le caractère 'ë' pour les systèmes Posix, Mac OS et Windows. */
	#define eAccGrave "\x8A" /*!< Cette macro définit la valeur pour le caractère 'è' pour les systèmes Posix, Mac OS et Windows. */
	#define eMajAccAigu "\x90" /*!< Cette macro définit la valeur pour le caractère 'É' pour les systèmes Posix, Mac OS et Windows. */
	#define aAccCirconflexe "\x83" /*!< Cette macro définit la valeur pour le caractère 'â' pour les systèmes Posix, Mac OS et Windows. */
	#define aTrema "\x84" /*!< Cette macro définit la valeur pour le caractère 'ä' pour les systèmes Posix, Mac OS et Windows. */
	#define aAccGrave "\x85" /*!< Cette macro définit la valeur pour le caractère 'à' pour les systèmes Posix, Mac OS et Windows. */
	#define aRondEnChef "\x86" /*!< Cette macro définit la valeur pour le caractère 'å' pour les systèmes Posix, Mac OS et Windows. */
	#define aMajTrema "\x8E" /*!< Cette macro définit la valeur pour le caractère 'Ä' pour les systèmes Posix, Mac OS et Windows. */
	#define aMajRondEnChef "\x8F" /*!< Cette macro définit la valeur pour le caractère 'Å' pour les systèmes Posix, Mac OS et Windows. */
	#define aAccAigu "\xA0" /*!< Cette macro définit la valeur pour le caractère 'á' pour les systèmes Posix, Mac OS et Windows. */
	#define ae "\x91" /*!< Cette macro définit la valeur pour le caractère 'æ' pour les systèmes Posix, Mac OS et Windows. */
	#define aeMaj "\x92" /*!< Cette macro définit la valeur pour le caractère 'Æ' pour les systèmes Posix, Mac OS et Windows. */
	#define cCedille "\x87" /*!< Cette macro définit la valeur pour le caractère 'ç' pour les systèmes Posix, Mac OS et Windows. */
	#define iTrema "\x8B" /*!< Cette macro définit la valeur pour le caractère 'ï' pour les systèmes Posix, Mac OS et Windows. */
	#define iAccCirconflexe "\x8C" /*!< Cette macro définit la valeur pour le caractère 'î' pour les systèmes Posix, Mac OS et Windows. */
	#define iAccGrave "\x8D" /*!< Cette macro définit la valeur pour le caractère 'ì' pour les systèmes Posix, Mac OS et Windows. */
	#define iAccAigu "\xA1" /*!< Cette macro définit la valeur pour le caractère 'í' pour les systèmes Posix, Mac OS et Windows. */
	#define oAccCirconflexe "\x93" /*!< Cette macro définit la valeur pour le caractère 'ô' pour les systèmes Posix, Mac OS et Windows. */
	#define oTrema "\x94" /*!< Cette macro définit la valeur pour le caractère 'ö' pour les systèmes Posix, Mac OS et Windows. */
	#define oAccGrave "\x95" /*!< Cette macro définit la valeur pour le caractère 'ò' pour les systèmes Posix, Mac OS et Windows. */
	#define oMajTrema "\x99" /*!< Cette macro définit la valeur pour le caractère 'Ö' pour les systèmes Posix, Mac OS et Windows. */
	#define oAccAigu "\xA2" /*!< Cette macro définit la valeur pour le caractère 'ó' pour les systèmes Posix, Mac OS et Windows. */
	#define uAccCirconflexe "\x96" /*!< Cette macro définit la valeur pour le caractère 'û' pour les systèmes Posix, Mac OS et Windows. */
	#define uAccGrave "\x97" /*!< Cette macro définit la valeur pour le caractère 'ù' pour les systèmes Posix, Mac OS et Windows. */
	#define uMajTrema "\x9A" /*!< Cette macro définit la valeur pour le caractère 'Ü' pour les systèmes Posix, Mac OS et Windows. */
	#define uAccAigu "\xA3" /*!< Cette macro définit la valeur pour le caractère 'ú' pour les systèmes Posix, Mac OS et Windows. */
	#define yTrema "\x98" /*!< Cette macro définit la valeur pour le caractère 'ÿ' pour les systèmes Posix, Mac OS et Windows. */
	#define ene "\xA4" /*!< Cette macro définit la valeur pour le caractère 'ñ' pour les systèmes Posix, Mac OS et Windows. */
	#define eneMaj "\xA5" /*!< Cette macro définit la valeur pour le caractère 'Ñ' pour les systèmes Posix, Mac OS et Windows. */
	#define rondEnChef "\xA7" /*!< Cette macro définit la valeur pour le caractère '°' pour les systèmes Posix, Mac OS et Windows. */
#elif defined (POSIX)
	#define eAccAigu "é"
	#define eAccCirconflexe "ê"
	#define eTrema "ë"
	#define eAccGrave "è"
	#define eMajAccAigu "É"
	#define aAccCirconflexe "â"
	#define aTrema "ä"
	#define aAccGrave "à"
	#define aRondEnChef "å"
	#define aMajTrema "Ä"
	#define aMajRondEnChef "Å"
	#define aAccAigu "á"
	#define ae "æ"
	#define aeMaj "Æ"
	#define cCedille "ç"
	#define iTrema "ï"
	#define iAccCirconflexe "î"
	#define iAccGrave "ì"
	#define iAccAigu "í"
	#define oAccCirconflexe "ô"
	#define oTrema "ö"
	#define oAccGrave "ò"
	#define oMajTrema "Ö"
	#define oAccAigu "ó"
	#define uAccCirconflexe "û"
	#define uAccGrave "ù"
	#define uMajTrema "Ü"
	#define uAccAigu "ú"
	#define yTrema "ÿ"
	#define ene "ñ"
	#define eneMaj "Ñ"
	#define rondEnChef "°"
#elif defined (MACOS)
	#define eAccAigu "\xC3A9"
	#define eAccCirconflexe "\xC3AA"
	#define eTrema "\xC3AB"
	#define eAccGrave "\xC3A8"
	#define eMajAccAigu "\xC389"
	#define aAccCirconflexe "\xC3A2"
	#define aTrema "\xC3A4"
	#define aAccGrave "\xC3A0"
	#define aRondEnChef "\xC3A5"
	#define aMajTrema "\xC384"
	#define aMajRondEnChef "\xC385"
	#define aAccAigu "\xC3A1"
	#define ae "\xC3A6"
	#define aeMaj "\xC386"
	#define cCedille "\xC3A7"
	#define iTrema "\xC3AF"
	#define iAccCirconflexe "\xC3AE"
	#define iAccGrave "\xC3AC"
	#define iAccAigu "\xC3AD"
	#define oAccCirconflexe "\xC3B4"
	#define oTrema "\xC3B6"
	#define oAccGrave "\xC3B2"
	#define oMajTrema "\xC396"
	#define oAccAigu "\xC3B3"
	#define uAccCirconflexe "\xC3BB"
	#define uAccGrave "\xC3B9"
	#define uMajTrema "\xC39C"
	#define uAccAigu "\xC3BA"
	#define yTrema "\xC3BF"
	#define ene "\xC3B1"
	#define eneMaj "\xC391"
	#define rondEnChef "\xC2BA"
#endif // WINDOWS POSIX MACOS

#endif // MACROSCHARSPEC_HPP