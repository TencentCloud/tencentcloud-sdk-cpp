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

#include <tencentcloud/ocr/v20181119/model/RecognizeAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeAgentRequest::RecognizeAgentRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_selectModelHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_schemaItemsHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_enableCoordHasBeenSet(false)
{
}

string RecognizeAgentRequest::ToJsonString() const
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

    if (m_selectModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selectModel, allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryType, allocator);
    }

    if (m_schemaItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schemaItems.begin(); itr != m_schemaItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_query.begin(); itr != m_query.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string RecognizeAgentRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeAgentRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeAgentRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string RecognizeAgentRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeAgentRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeAgentRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

int64_t RecognizeAgentRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void RecognizeAgentRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool RecognizeAgentRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

int64_t RecognizeAgentRequest::GetSelectModel() const
{
    return m_selectModel;
}

void RecognizeAgentRequest::SetSelectModel(const int64_t& _selectModel)
{
    m_selectModel = _selectModel;
    m_selectModelHasBeenSet = true;
}

bool RecognizeAgentRequest::SelectModelHasBeenSet() const
{
    return m_selectModelHasBeenSet;
}

int64_t RecognizeAgentRequest::GetQueryType() const
{
    return m_queryType;
}

void RecognizeAgentRequest::SetQueryType(const int64_t& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool RecognizeAgentRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

vector<SchemaList> RecognizeAgentRequest::GetSchemaItems() const
{
    return m_schemaItems;
}

void RecognizeAgentRequest::SetSchemaItems(const vector<SchemaList>& _schemaItems)
{
    m_schemaItems = _schemaItems;
    m_schemaItemsHasBeenSet = true;
}

bool RecognizeAgentRequest::SchemaItemsHasBeenSet() const
{
    return m_schemaItemsHasBeenSet;
}

vector<string> RecognizeAgentRequest::GetQuery() const
{
    return m_query;
}

void RecognizeAgentRequest::SetQuery(const vector<string>& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool RecognizeAgentRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

bool RecognizeAgentRequest::GetEnableCoord() const
{
    return m_enableCoord;
}

void RecognizeAgentRequest::SetEnableCoord(const bool& _enableCoord)
{
    m_enableCoord = _enableCoord;
    m_enableCoordHasBeenSet = true;
}

bool RecognizeAgentRequest::EnableCoordHasBeenSet() const
{
    return m_enableCoordHasBeenSet;
}


