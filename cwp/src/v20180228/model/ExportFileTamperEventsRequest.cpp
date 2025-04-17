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

#include <tencentcloud/cwp/v20180228/model/ExportFileTamperEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ExportFileTamperEventsRequest::ExportFileTamperEventsRequest() :
    m_filtersHasBeenSet(false),
    m_filedsHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_whereHasBeenSet(false)
{
}

string ExportFileTamperEventsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_filedsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fileds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileds.begin(); itr != m_fileds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fields.c_str(), allocator).Move(), allocator);
    }

    if (m_whereHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Where";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_where.begin(); itr != m_where.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Filters> ExportFileTamperEventsRequest::GetFilters() const
{
    return m_filters;
}

void ExportFileTamperEventsRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportFileTamperEventsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> ExportFileTamperEventsRequest::GetFileds() const
{
    return m_fileds;
}

void ExportFileTamperEventsRequest::SetFileds(const vector<string>& _fileds)
{
    m_fileds = _fileds;
    m_filedsHasBeenSet = true;
}

bool ExportFileTamperEventsRequest::FiledsHasBeenSet() const
{
    return m_filedsHasBeenSet;
}

string ExportFileTamperEventsRequest::GetFields() const
{
    return m_fields;
}

void ExportFileTamperEventsRequest::SetFields(const string& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool ExportFileTamperEventsRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

vector<string> ExportFileTamperEventsRequest::GetWhere() const
{
    return m_where;
}

void ExportFileTamperEventsRequest::SetWhere(const vector<string>& _where)
{
    m_where = _where;
    m_whereHasBeenSet = true;
}

bool ExportFileTamperEventsRequest::WhereHasBeenSet() const
{
    return m_whereHasBeenSet;
}


