/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/ocr/v20181119/model/ExtractDocBasicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ExtractDocBasicRequest::ExtractDocBasicRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_isPdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_itemNamesHasBeenSet(false),
    m_returnFullTextHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_enableSealRecognizeHasBeenSet(false)
{
}

string ExtractDocBasicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_isPdfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPdf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPdf, allocator);
    }

    if (m_pdfPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfPageNumber, allocator);
    }

    if (m_itemNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemNames.begin(); itr != m_itemNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_returnFullTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnFullText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnFullText, allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSealRecognizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSealRecognize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSealRecognize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExtractDocBasicRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void ExtractDocBasicRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool ExtractDocBasicRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string ExtractDocBasicRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void ExtractDocBasicRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool ExtractDocBasicRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

bool ExtractDocBasicRequest::GetIsPdf() const
{
    return m_isPdf;
}

void ExtractDocBasicRequest::SetIsPdf(const bool& _isPdf)
{
    m_isPdf = _isPdf;
    m_isPdfHasBeenSet = true;
}

bool ExtractDocBasicRequest::IsPdfHasBeenSet() const
{
    return m_isPdfHasBeenSet;
}

uint64_t ExtractDocBasicRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void ExtractDocBasicRequest::SetPdfPageNumber(const uint64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool ExtractDocBasicRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

vector<string> ExtractDocBasicRequest::GetItemNames() const
{
    return m_itemNames;
}

void ExtractDocBasicRequest::SetItemNames(const vector<string>& _itemNames)
{
    m_itemNames = _itemNames;
    m_itemNamesHasBeenSet = true;
}

bool ExtractDocBasicRequest::ItemNamesHasBeenSet() const
{
    return m_itemNamesHasBeenSet;
}

bool ExtractDocBasicRequest::GetReturnFullText() const
{
    return m_returnFullText;
}

void ExtractDocBasicRequest::SetReturnFullText(const bool& _returnFullText)
{
    m_returnFullText = _returnFullText;
    m_returnFullTextHasBeenSet = true;
}

bool ExtractDocBasicRequest::ReturnFullTextHasBeenSet() const
{
    return m_returnFullTextHasBeenSet;
}

string ExtractDocBasicRequest::GetConfigId() const
{
    return m_configId;
}

void ExtractDocBasicRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ExtractDocBasicRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

bool ExtractDocBasicRequest::GetEnableSealRecognize() const
{
    return m_enableSealRecognize;
}

void ExtractDocBasicRequest::SetEnableSealRecognize(const bool& _enableSealRecognize)
{
    m_enableSealRecognize = _enableSealRecognize;
    m_enableSealRecognizeHasBeenSet = true;
}

bool ExtractDocBasicRequest::EnableSealRecognizeHasBeenSet() const
{
    return m_enableSealRecognizeHasBeenSet;
}


