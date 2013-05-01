#include "utils.h"
#include <cstdio>
#include "src\client\zeusclient\resource\parse_def.h"

bool utils::GetXmlStrAttributeA( TiXmlElement *pElement, char *pName, std::string &strData )
{
    if (pElement)
    {
        const char *pStr = pElement->Attribute(pName);
        if (pStr)
        {
            strData = std::string(pStr);
            return true;
        }
    }
    return false;
}
bool utils::GetXmlIntAttribute( TiXmlElement *pElement, char *pName, int &nData )
{
    if (pElement)
    {
        const char *pStr = pElement->Attribute(pName);
        if(pName == PICTURE_POSX||pName == PICTURE_POSY)
        {
            if (pStr)
            {
                  nData = atoi(pStr);
                  return true;
            }
            else
            {
                   nData = 0;
                   return true;
            }
        }
        else
        {
            if (pStr)
            {
                nData = atoi(pStr);
                return true;
            }
        }
    }
    return false;
}