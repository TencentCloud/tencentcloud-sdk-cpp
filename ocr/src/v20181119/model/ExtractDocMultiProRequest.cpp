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

#include <tencentcloud/ocr/v20181119/model/ExtractDocMultiProRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ExtractDocMultiProRequest::ExtractDocMultiProRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_itemNamesHasBeenSet(false),
    m_itemNamesShowModeHasBeenSet(false),
    m_returnFullTextHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_enableCoordHasBeenSet(false),
    m_outputParentKeyHasBeenSet(false),
    m_configAdvancedHasBeenSet(false)
{
}

string ExtractDocMultiProRequest::ToJsonString() const
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

    if (m_itemNamesShowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemNamesShowMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_itemNamesShowMode, allocator);
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

    if (m_outputParentKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputParentKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputParentKey, allocator);
    }

    if (m_configAdvancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigAdvanced";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configAdvanced.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExtractDocMultiProRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void ExtractDocMultiProRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool ExtractDocMultiProRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string ExtractDocMultiProRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void ExtractDocMultiProRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool ExtractDocMultiProRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

uint64_t ExtractDocMultiProRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void ExtractDocMultiProRequest::SetPdfPageNumber(const uint64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool ExtractDocMultiProRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

vector<string> ExtractDocMultiProRequest::GetItemNames() const
{
    return m_itemNames;
}

void ExtractDocMultiProRequest::SetItemNames(const vector<string>& _itemNames)
{
    m_itemNames = _itemNames;
    m_itemNamesHasBeenSet = true;
}

bool ExtractDocMultiProRequest::ItemNamesHasBeenSet() const
{
    return m_itemNamesHasBeenSet;
}

bool ExtractDocMultiProRequest::GetItemNamesShowMode() const
{
    return m_itemNamesShowMode;
}

void ExtractDocMultiProRequest::SetItemNamesShowMode(const bool& _itemNamesShowMode)
{
    m_itemNamesShowMode = _itemNamesShowMode;
    m_itemNamesShowModeHasBeenSet = true;
}

bool ExtractDocMultiProRequest::ItemNamesShowModeHasBeenSet() const
{
    return m_itemNamesShowModeHasBeenSet;
}

bool ExtractDocMultiProRequest::GetReturnFullText() const
{
    return m_returnFullText;
}

void ExtractDocMultiProRequest::SetReturnFullText(const bool& _returnFullText)
{
    m_returnFullText = _returnFullText;
    m_returnFullTextHasBeenSet = true;
}

bool ExtractDocMultiProRequest::ReturnFullTextHasBeenSet() const
{
    return m_returnFullTextHasBeenSet;
}

string ExtractDocMultiProRequest::GetConfigId() const
{
    return m_configId;
}

void ExtractDocMultiProRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ExtractDocMultiProRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

bool ExtractDocMultiProRequest::GetEnableCoord() const
{
    return m_enableCoord;
}

void ExtractDocMultiProRequest::SetEnableCoord(const bool& _enableCoord)
{
    m_enableCoord = _enableCoord;
    m_enableCoordHasBeenSet = true;
}

bool ExtractDocMultiProRequest::EnableCoordHasBeenSet() const
{
    return m_enableCoordHasBeenSet;
}

bool ExtractDocMultiProRequest::GetOutputParentKey() const
{
    return m_outputParentKey;
}

void ExtractDocMultiProRequest::SetOutputParentKey(const bool& _outputParentKey)
{
    m_outputParentKey = _outputParentKey;
    m_outputParentKeyHasBeenSet = true;
}

bool ExtractDocMultiProRequest::OutputParentKeyHasBeenSet() const
{
    return m_outputParentKeyHasBeenSet;
}

ConfigAdvanced ExtractDocMultiProRequest::GetConfigAdvanced() const
{
    return m_configAdvanced;
}

void ExtractDocMultiProRequest::SetConfigAdvanced(const ConfigAdvanced& _configAdvanced)
{
    m_configAdvanced = _configAdvanced;
    m_configAdvancedHasBeenSet = true;
}

bool ExtractDocMultiProRequest::ConfigAdvancedHasBeenSet() const
{
    return m_configAdvancedHasBeenSet;
}


