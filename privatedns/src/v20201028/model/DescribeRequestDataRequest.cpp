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

#include <tencentcloud/privatedns/v20201028/model/DescribeRequestDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

DescribeRequestDataRequest::DescribeRequestDataRequest() :
    m_timeRangeBeginHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_timeRangeEndHasBeenSet(false),
    m_exportHasBeenSet(false)
{
}

string DescribeRequestDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeRangeBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeRangeBegin.c_str(), allocator).Move(), allocator);
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

    if (m_timeRangeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeRangeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_exportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Export";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_export, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRequestDataRequest::GetTimeRangeBegin() const
{
    return m_timeRangeBegin;
}

void DescribeRequestDataRequest::SetTimeRangeBegin(const string& _timeRangeBegin)
{
    m_timeRangeBegin = _timeRangeBegin;
    m_timeRangeBeginHasBeenSet = true;
}

bool DescribeRequestDataRequest::TimeRangeBeginHasBeenSet() const
{
    return m_timeRangeBeginHasBeenSet;
}

vector<Filter> DescribeRequestDataRequest::GetFilters() const
{
    return m_filters;
}

void DescribeRequestDataRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRequestDataRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeRequestDataRequest::GetTimeRangeEnd() const
{
    return m_timeRangeEnd;
}

void DescribeRequestDataRequest::SetTimeRangeEnd(const string& _timeRangeEnd)
{
    m_timeRangeEnd = _timeRangeEnd;
    m_timeRangeEndHasBeenSet = true;
}

bool DescribeRequestDataRequest::TimeRangeEndHasBeenSet() const
{
    return m_timeRangeEndHasBeenSet;
}

bool DescribeRequestDataRequest::GetExport() const
{
    return m_export;
}

void DescribeRequestDataRequest::SetExport(const bool& _export)
{
    m_export = _export;
    m_exportHasBeenSet = true;
}

bool DescribeRequestDataRequest::ExportHasBeenSet() const
{
    return m_exportHasBeenSet;
}


