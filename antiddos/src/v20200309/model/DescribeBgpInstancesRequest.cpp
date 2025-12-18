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

#include <tencentcloud/antiddos/v20200309/model/DescribeBgpInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeBgpInstancesRequest::DescribeBgpInstancesRequest() :
    m_filterRegionHasBeenSet(false),
    m_filterInstanceIdListHasBeenSet(false),
    m_filterTagHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeBgpInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_filterInstanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterInstanceIdList.begin(); itr != m_filterInstanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterTag.begin(); itr != m_filterTag.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBgpInstancesRequest::GetFilterRegion() const
{
    return m_filterRegion;
}

void DescribeBgpInstancesRequest::SetFilterRegion(const string& _filterRegion)
{
    m_filterRegion = _filterRegion;
    m_filterRegionHasBeenSet = true;
}

bool DescribeBgpInstancesRequest::FilterRegionHasBeenSet() const
{
    return m_filterRegionHasBeenSet;
}

vector<string> DescribeBgpInstancesRequest::GetFilterInstanceIdList() const
{
    return m_filterInstanceIdList;
}

void DescribeBgpInstancesRequest::SetFilterInstanceIdList(const vector<string>& _filterInstanceIdList)
{
    m_filterInstanceIdList = _filterInstanceIdList;
    m_filterInstanceIdListHasBeenSet = true;
}

bool DescribeBgpInstancesRequest::FilterInstanceIdListHasBeenSet() const
{
    return m_filterInstanceIdListHasBeenSet;
}

vector<TagInfo> DescribeBgpInstancesRequest::GetFilterTag() const
{
    return m_filterTag;
}

void DescribeBgpInstancesRequest::SetFilterTag(const vector<TagInfo>& _filterTag)
{
    m_filterTag = _filterTag;
    m_filterTagHasBeenSet = true;
}

bool DescribeBgpInstancesRequest::FilterTagHasBeenSet() const
{
    return m_filterTagHasBeenSet;
}

uint64_t DescribeBgpInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBgpInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBgpInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeBgpInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBgpInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBgpInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


