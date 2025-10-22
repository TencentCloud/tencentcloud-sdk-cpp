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

#include <tencentcloud/ocr/v20181119/model/SubmitExtractDocAgentJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SubmitExtractDocAgentJobRequest::SubmitExtractDocAgentJobRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_itemNamesHasBeenSet(false),
    m_enableCoordHasBeenSet(false),
    m_fileStartPageNumberHasBeenSet(false),
    m_fileEndPageNumberHasBeenSet(false)
{
}

string SubmitExtractDocAgentJobRequest::ToJsonString() const
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

        int i=0;
        for (auto itr = m_itemNames.begin(); itr != m_itemNames.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enableCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCoord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCoord, allocator);
    }

    if (m_fileStartPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileStartPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileStartPageNumber, allocator);
    }

    if (m_fileEndPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileEndPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileEndPageNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitExtractDocAgentJobRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void SubmitExtractDocAgentJobRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool SubmitExtractDocAgentJobRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string SubmitExtractDocAgentJobRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SubmitExtractDocAgentJobRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SubmitExtractDocAgentJobRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t SubmitExtractDocAgentJobRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void SubmitExtractDocAgentJobRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool SubmitExtractDocAgentJobRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

vector<ItemNames> SubmitExtractDocAgentJobRequest::GetItemNames() const
{
    return m_itemNames;
}

void SubmitExtractDocAgentJobRequest::SetItemNames(const vector<ItemNames>& _itemNames)
{
    m_itemNames = _itemNames;
    m_itemNamesHasBeenSet = true;
}

bool SubmitExtractDocAgentJobRequest::ItemNamesHasBeenSet() const
{
    return m_itemNamesHasBeenSet;
}

bool SubmitExtractDocAgentJobRequest::GetEnableCoord() const
{
    return m_enableCoord;
}

void SubmitExtractDocAgentJobRequest::SetEnableCoord(const bool& _enableCoord)
{
    m_enableCoord = _enableCoord;
    m_enableCoordHasBeenSet = true;
}

bool SubmitExtractDocAgentJobRequest::EnableCoordHasBeenSet() const
{
    return m_enableCoordHasBeenSet;
}

uint64_t SubmitExtractDocAgentJobRequest::GetFileStartPageNumber() const
{
    return m_fileStartPageNumber;
}

void SubmitExtractDocAgentJobRequest::SetFileStartPageNumber(const uint64_t& _fileStartPageNumber)
{
    m_fileStartPageNumber = _fileStartPageNumber;
    m_fileStartPageNumberHasBeenSet = true;
}

bool SubmitExtractDocAgentJobRequest::FileStartPageNumberHasBeenSet() const
{
    return m_fileStartPageNumberHasBeenSet;
}

uint64_t SubmitExtractDocAgentJobRequest::GetFileEndPageNumber() const
{
    return m_fileEndPageNumber;
}

void SubmitExtractDocAgentJobRequest::SetFileEndPageNumber(const uint64_t& _fileEndPageNumber)
{
    m_fileEndPageNumber = _fileEndPageNumber;
    m_fileEndPageNumberHasBeenSet = true;
}

bool SubmitExtractDocAgentJobRequest::FileEndPageNumberHasBeenSet() const
{
    return m_fileEndPageNumberHasBeenSet;
}


