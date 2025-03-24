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

#include <tencentcloud/gs/v20191118/model/DescribeAndroidInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

DescribeAndroidInstancesRequest::DescribeAndroidInstancesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_androidInstanceIdsHasBeenSet(false),
    m_androidInstanceRegionHasBeenSet(false),
    m_androidInstanceZoneHasBeenSet(false),
    m_androidInstanceGroupIdsHasBeenSet(false),
    m_labelSelectorHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeAndroidInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_androidInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_androidInstanceIds.begin(); itr != m_androidInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_androidInstanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceZone.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_androidInstanceGroupIds.begin(); itr != m_androidInstanceGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSelector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelSelector.begin(); itr != m_labelSelector.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAndroidInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAndroidInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAndroidInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAndroidInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAndroidInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAndroidInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeAndroidInstancesRequest::GetAndroidInstanceIds() const
{
    return m_androidInstanceIds;
}

void DescribeAndroidInstancesRequest::SetAndroidInstanceIds(const vector<string>& _androidInstanceIds)
{
    m_androidInstanceIds = _androidInstanceIds;
    m_androidInstanceIdsHasBeenSet = true;
}

bool DescribeAndroidInstancesRequest::AndroidInstanceIdsHasBeenSet() const
{
    return m_androidInstanceIdsHasBeenSet;
}

string DescribeAndroidInstancesRequest::GetAndroidInstanceRegion() const
{
    return m_androidInstanceRegion;
}

void DescribeAndroidInstancesRequest::SetAndroidInstanceRegion(const string& _androidInstanceRegion)
{
    m_androidInstanceRegion = _androidInstanceRegion;
    m_androidInstanceRegionHasBeenSet = true;
}

bool DescribeAndroidInstancesRequest::AndroidInstanceRegionHasBeenSet() const
{
    return m_androidInstanceRegionHasBeenSet;
}

string DescribeAndroidInstancesRequest::GetAndroidInstanceZone() const
{
    return m_androidInstanceZone;
}

void DescribeAndroidInstancesRequest::SetAndroidInstanceZone(const string& _androidInstanceZone)
{
    m_androidInstanceZone = _androidInstanceZone;
    m_androidInstanceZoneHasBeenSet = true;
}

bool DescribeAndroidInstancesRequest::AndroidInstanceZoneHasBeenSet() const
{
    return m_androidInstanceZoneHasBeenSet;
}

vector<string> DescribeAndroidInstancesRequest::GetAndroidInstanceGroupIds() const
{
    return m_androidInstanceGroupIds;
}

void DescribeAndroidInstancesRequest::SetAndroidInstanceGroupIds(const vector<string>& _androidInstanceGroupIds)
{
    m_androidInstanceGroupIds = _androidInstanceGroupIds;
    m_androidInstanceGroupIdsHasBeenSet = true;
}

bool DescribeAndroidInstancesRequest::AndroidInstanceGroupIdsHasBeenSet() const
{
    return m_androidInstanceGroupIdsHasBeenSet;
}

vector<LabelRequirement> DescribeAndroidInstancesRequest::GetLabelSelector() const
{
    return m_labelSelector;
}

void DescribeAndroidInstancesRequest::SetLabelSelector(const vector<LabelRequirement>& _labelSelector)
{
    m_labelSelector = _labelSelector;
    m_labelSelectorHasBeenSet = true;
}

bool DescribeAndroidInstancesRequest::LabelSelectorHasBeenSet() const
{
    return m_labelSelectorHasBeenSet;
}

vector<Filter> DescribeAndroidInstancesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAndroidInstancesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAndroidInstancesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


