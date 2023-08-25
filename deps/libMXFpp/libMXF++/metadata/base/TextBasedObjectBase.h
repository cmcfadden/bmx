/*
 * Copyright (C) 2015, British Broadcasting Corporation
 * All Rights Reserved.
 *
 * Author: Philip de Nier
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the British Broadcasting Corporation nor the names
 *       of its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef MXFPP_TEXTBASEDOBJECT_BASE_H_
#define MXFPP_TEXTBASEDOBJECT_BASE_H_



#include <libMXF++/metadata/DMSet.h>


namespace mxfpp
{


class TextBasedObjectBase : public DMSet
{
public:
    friend class MetadataSetFactory<TextBasedObjectBase>;
    static const mxfKey setKey;

public:
    TextBasedObjectBase(HeaderMetadata *headerMetadata);
    virtual ~TextBasedObjectBase();


   // getters

   mxfUL getTextBasedMetadataPayloadSchemaID() const;
   std::string getTextMIMEMediaType() const;
   std::string getRFC5646TextLanguageCode() const;
   bool haveTextDataDescription() const;
   std::string getTextDataDescription() const;


   // setters

   void setTextBasedMetadataPayloadSchemaID(mxfUL value);
   void setTextMIMEMediaType(std::string value);
   void setRFC5646TextLanguageCode(std::string value);
   void setTextDataDescription(std::string value);


protected:
    TextBasedObjectBase(HeaderMetadata *headerMetadata, ::MXFMetadataSet *cMetadataSet);
};


};


#endif
