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

#include <tencentcloud/as/v20180419/model/DescribeNotificationConfigurationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

DescribeNotificationConfigurationsRequest::DescribeNotificationConfigurationsRequest() :
    m_autoScalingNotificationIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeNotificationConfigurationsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingNotificationIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingNotificationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_autoScalingNotificationIds.begin(); itr != m_autoScalingNotificationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeNotificationConfigurationsRequest::GetAutoScalingNotificationIds() const
{
    return m_autoScalingNotificationIds;
}

void DescribeNotificationConfigurationsRequest::SetAutoScalingNotificationIds(const vector<string>& _autoScalingNotificationIds)
{
    m_autoScalingNotificationIds = _autoScalingNotificationIds;
    m_autoScalingNotificationIdsHasBeenSet = true;
}

bool DescribeNotificationConfigurationsRequest::AutoScalingNotificationIdsHasBeenSet() const
{
    return m_autoScalingNotificationIdsHasBeenSet;
}

vector<Filter> DescribeNotificationConfigurationsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeNotificationConfigurationsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeNotificationConfigurationsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeNotificationConfigurationsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNotificationConfigurationsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNotificationConfigurationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeNotificationConfigurationsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNotificationConfigurationsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNotificationConfigurationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


