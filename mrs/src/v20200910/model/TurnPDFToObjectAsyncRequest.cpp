/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/mrs/v20200910/model/TurnPDFToObjectAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TurnPDFToObjectAsyncRequest::TurnPDFToObjectAsyncRequest() :
    m_pdfInfoHasBeenSet(false),
    m_textBasedPdfFlagHasBeenSet(false)
{
}

string TurnPDFToObjectAsyncRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pdfInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pdfInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_textBasedPdfFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextBasedPdfFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_textBasedPdfFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


PdfInfo TurnPDFToObjectAsyncRequest::GetPdfInfo() const
{
    return m_pdfInfo;
}

void TurnPDFToObjectAsyncRequest::SetPdfInfo(const PdfInfo& _pdfInfo)
{
    m_pdfInfo = _pdfInfo;
    m_pdfInfoHasBeenSet = true;
}

bool TurnPDFToObjectAsyncRequest::PdfInfoHasBeenSet() const
{
    return m_pdfInfoHasBeenSet;
}

bool TurnPDFToObjectAsyncRequest::GetTextBasedPdfFlag() const
{
    return m_textBasedPdfFlag;
}

void TurnPDFToObjectAsyncRequest::SetTextBasedPdfFlag(const bool& _textBasedPdfFlag)
{
    m_textBasedPdfFlag = _textBasedPdfFlag;
    m_textBasedPdfFlagHasBeenSet = true;
}

bool TurnPDFToObjectAsyncRequest::TextBasedPdfFlagHasBeenSet() const
{
    return m_textBasedPdfFlagHasBeenSet;
}


