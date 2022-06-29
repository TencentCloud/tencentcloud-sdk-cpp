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

#include <tencentcloud/ciam/v20220331/model/CreateFileExportUserJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

CreateFileExportUserJobRequest::CreateFileExportUserJobRequest() :
    m_userStoreIdHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_exportPropertyMapsHasBeenSet(false)
{
}

string CreateFileExportUserJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_exportPropertyMapsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportPropertyMaps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exportPropertyMaps.begin(); itr != m_exportPropertyMaps.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileExportUserJobRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void CreateFileExportUserJobRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool CreateFileExportUserJobRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

string CreateFileExportUserJobRequest::GetFormat() const
{
    return m_format;
}

void CreateFileExportUserJobRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CreateFileExportUserJobRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

vector<Filter> CreateFileExportUserJobRequest::GetFilters() const
{
    return m_filters;
}

void CreateFileExportUserJobRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateFileExportUserJobRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<ExportPropertyMap> CreateFileExportUserJobRequest::GetExportPropertyMaps() const
{
    return m_exportPropertyMaps;
}

void CreateFileExportUserJobRequest::SetExportPropertyMaps(const vector<ExportPropertyMap>& _exportPropertyMaps)
{
    m_exportPropertyMaps = _exportPropertyMaps;
    m_exportPropertyMapsHasBeenSet = true;
}

bool CreateFileExportUserJobRequest::ExportPropertyMapsHasBeenSet() const
{
    return m_exportPropertyMapsHasBeenSet;
}


