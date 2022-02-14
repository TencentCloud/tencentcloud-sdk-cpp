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

#include <tencentcloud/rum/v20210622/model/DescribeTawAreasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTawAreasRequest::DescribeTawAreasRequest() :
    m_areaIdsHasBeenSet(false),
    m_areaKeysHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_areaStatusesHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeTawAreasRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_areaIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaIds.begin(); itr != m_areaIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_areaKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaKeys.begin(); itr != m_areaKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_areaStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaStatuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaStatuses.begin(); itr != m_areaStatuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


vector<int64_t> DescribeTawAreasRequest::GetAreaIds() const
{
    return m_areaIds;
}

void DescribeTawAreasRequest::SetAreaIds(const vector<int64_t>& _areaIds)
{
    m_areaIds = _areaIds;
    m_areaIdsHasBeenSet = true;
}

bool DescribeTawAreasRequest::AreaIdsHasBeenSet() const
{
    return m_areaIdsHasBeenSet;
}

vector<string> DescribeTawAreasRequest::GetAreaKeys() const
{
    return m_areaKeys;
}

void DescribeTawAreasRequest::SetAreaKeys(const vector<string>& _areaKeys)
{
    m_areaKeys = _areaKeys;
    m_areaKeysHasBeenSet = true;
}

bool DescribeTawAreasRequest::AreaKeysHasBeenSet() const
{
    return m_areaKeysHasBeenSet;
}

int64_t DescribeTawAreasRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTawAreasRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTawAreasRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<int64_t> DescribeTawAreasRequest::GetAreaStatuses() const
{
    return m_areaStatuses;
}

void DescribeTawAreasRequest::SetAreaStatuses(const vector<int64_t>& _areaStatuses)
{
    m_areaStatuses = _areaStatuses;
    m_areaStatusesHasBeenSet = true;
}

bool DescribeTawAreasRequest::AreaStatusesHasBeenSet() const
{
    return m_areaStatusesHasBeenSet;
}

int64_t DescribeTawAreasRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTawAreasRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTawAreasRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


