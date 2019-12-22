#ifndef DEF_XMLPARSER
#define DEF_XMLPARSER

#include "../lib/TinyXML/TinyXML.hpp"
#include <string>

class XMLParser
{
	public:
		XMLParser(std::string nomProjet);
		~XMLParser();
	
	private:
		std::string m_nomProjet;
};

#endif // DEF_XMLPARSER