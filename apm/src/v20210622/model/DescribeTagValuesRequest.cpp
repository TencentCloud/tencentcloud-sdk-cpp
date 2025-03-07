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

#include <tencentcloud/apm/v20210622/model/DescribeTagValuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeTagValuesRequest::DescribeTagValuesRequest() :
    m_instanceIdHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orFiltersHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DescribeTagValuesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
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

    if (m_orFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orFilters.begin(); itr != m_orFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTagValuesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTagValuesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTagValuesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeTagValuesRequest::GetTagKey() const
{
    return m_tagKey;
}

void DescribeTagValuesRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool DescribeTagValuesRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

int64_t DescribeTagValuesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTagValuesRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTagValuesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTagValuesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTagValuesRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTagValuesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<Filter> DescribeTagValuesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTagValuesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTagValuesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<Filter> DescribeTagValuesRequest::GetOrFilters() const
{
    return m_orFilters;
}

void DescribeTagValuesRequest::SetOrFilters(const vector<Filter>& _orFilters)
{
    m_orFilters = _orFilters;
    m_orFiltersHasBeenSet = true;
}

bool DescribeTagValuesRequest::OrFiltersHasBeenSet() const
{
    return m_orFiltersHasBeenSet;
}

string DescribeTagValuesRequest::GetType() const
{
    return m_type;
}

void DescribeTagValuesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeTagValuesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


