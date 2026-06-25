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

#include <tencentcloud/ocr/v20181119/model/ExtractDocAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ExtractDocAgentRequest::ExtractDocAgentRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_itemNamesHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_enableCoordHasBeenSet(false),
    m_enableAuditHasBeenSet(false)
{
}

string ExtractDocAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_itemNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_itemNames.begin(); itr != m_itemNames.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_pdfPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfPageNumber, allocator);
    }

    if (m_enableCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCoord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCoord, allocator);
    }

    if (m_enableAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAudit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAudit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExtractDocAgentRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void ExtractDocAgentRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool ExtractDocAgentRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string ExtractDocAgentRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void ExtractDocAgentRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool ExtractDocAgentRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

vector<ItemNames> ExtractDocAgentRequest::GetItemNames() const
{
    return m_itemNames;
}

void ExtractDocAgentRequest::SetItemNames(const vector<ItemNames>& _itemNames)
{
    m_itemNames = _itemNames;
    m_itemNamesHasBeenSet = true;
}

bool ExtractDocAgentRequest::ItemNamesHasBeenSet() const
{
    return m_itemNamesHasBeenSet;
}

int64_t ExtractDocAgentRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void ExtractDocAgentRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool ExtractDocAgentRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

bool ExtractDocAgentRequest::GetEnableCoord() const
{
    return m_enableCoord;
}

void ExtractDocAgentRequest::SetEnableCoord(const bool& _enableCoord)
{
    m_enableCoord = _enableCoord;
    m_enableCoordHasBeenSet = true;
}

bool ExtractDocAgentRequest::EnableCoordHasBeenSet() const
{
    return m_enableCoordHasBeenSet;
}

bool ExtractDocAgentRequest::GetEnableAudit() const
{
    return m_enableAudit;
}

void ExtractDocAgentRequest::SetEnableAudit(const bool& _enableAudit)
{
    m_enableAudit = _enableAudit;
    m_enableAuditHasBeenSet = true;
}

bool ExtractDocAgentRequest::EnableAuditHasBeenSet() const
{
    return m_enableAuditHasBeenSet;
}


