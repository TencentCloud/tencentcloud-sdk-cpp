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

#include <tencentcloud/ocr/v20181119/model/SmartStructuralProRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SmartStructuralProRequest::SmartStructuralProRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_itemNamesHasBeenSet(false),
    m_returnFullTextHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_enableCoordHasBeenSet(false)
{
}

string SmartStructuralProRequest::ToJsonString() const
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

    if (m_enableCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCoord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCoord, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SmartStructuralProRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SmartStructuralProRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SmartStructuralProRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string SmartStructuralProRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void SmartStructuralProRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool SmartStructuralProRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

uint64_t SmartStructuralProRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void SmartStructuralProRequest::SetPdfPageNumber(const uint64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool SmartStructuralProRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

vector<string> SmartStructuralProRequest::GetItemNames() const
{
    return m_itemNames;
}

void SmartStructuralProRequest::SetItemNames(const vector<string>& _itemNames)
{
    m_itemNames = _itemNames;
    m_itemNamesHasBeenSet = true;
}

bool SmartStructuralProRequest::ItemNamesHasBeenSet() const
{
    return m_itemNamesHasBeenSet;
}

bool SmartStructuralProRequest::GetReturnFullText() const
{
    return m_returnFullText;
}

void SmartStructuralProRequest::SetReturnFullText(const bool& _returnFullText)
{
    m_returnFullText = _returnFullText;
    m_returnFullTextHasBeenSet = true;
}

bool SmartStructuralProRequest::ReturnFullTextHasBeenSet() const
{
    return m_returnFullTextHasBeenSet;
}

string SmartStructuralProRequest::GetConfigId() const
{
    return m_configId;
}

void SmartStructuralProRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool SmartStructuralProRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

bool SmartStructuralProRequest::GetEnableCoord() const
{
    return m_enableCoord;
}

void SmartStructuralProRequest::SetEnableCoord(const bool& _enableCoord)
{
    m_enableCoord = _enableCoord;
    m_enableCoordHasBeenSet = true;
}

bool SmartStructuralProRequest::EnableCoordHasBeenSet() const
{
    return m_enableCoordHasBeenSet;
}


