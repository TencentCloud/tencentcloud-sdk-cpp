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

#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DescribeDedicatedClustersRequest::DescribeDedicatedClustersRequest() :
    m_dedicatedClusterIdsHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_siteIdsHasBeenSet(false),
    m_lifecycleStatusesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeDedicatedClustersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dedicatedClusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dedicatedClusterIds.begin(); itr != m_dedicatedClusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_siteIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_siteIds.begin(); itr != m_siteIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lifecycleStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleStatuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lifecycleStatuses.begin(); itr != m_lifecycleStatuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDedicatedClustersRequest::GetDedicatedClusterIds() const
{
    return m_dedicatedClusterIds;
}

void DescribeDedicatedClustersRequest::SetDedicatedClusterIds(const vector<string>& _dedicatedClusterIds)
{
    m_dedicatedClusterIds = _dedicatedClusterIds;
    m_dedicatedClusterIdsHasBeenSet = true;
}

bool DescribeDedicatedClustersRequest::DedicatedClusterIdsHasBeenSet() const
{
    return m_dedicatedClusterIdsHasBeenSet;
}

vector<string> DescribeDedicatedClustersRequest::GetZones() const
{
    return m_zones;
}

void DescribeDedicatedClustersRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool DescribeDedicatedClustersRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

vector<string> DescribeDedicatedClustersRequest::GetSiteIds() const
{
    return m_siteIds;
}

void DescribeDedicatedClustersRequest::SetSiteIds(const vector<string>& _siteIds)
{
    m_siteIds = _siteIds;
    m_siteIdsHasBeenSet = true;
}

bool DescribeDedicatedClustersRequest::SiteIdsHasBeenSet() const
{
    return m_siteIdsHasBeenSet;
}

vector<string> DescribeDedicatedClustersRequest::GetLifecycleStatuses() const
{
    return m_lifecycleStatuses;
}

void DescribeDedicatedClustersRequest::SetLifecycleStatuses(const vector<string>& _lifecycleStatuses)
{
    m_lifecycleStatuses = _lifecycleStatuses;
    m_lifecycleStatusesHasBeenSet = true;
}

bool DescribeDedicatedClustersRequest::LifecycleStatusesHasBeenSet() const
{
    return m_lifecycleStatusesHasBeenSet;
}

string DescribeDedicatedClustersRequest::GetName() const
{
    return m_name;
}

void DescribeDedicatedClustersRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDedicatedClustersRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeDedicatedClustersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDedicatedClustersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDedicatedClustersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDedicatedClustersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDedicatedClustersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDedicatedClustersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


