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

#include <tencentcloud/vdb/v20230616/model/DescribeInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vdb::V20230616::Model;
using namespace std;

DescribeInstancesRequest::DescribeInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_instanceNamesHasBeenSet(false),
    m_instanceKeysHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineNamesHasBeenSet(false),
    m_engineVersionsHasBeenSet(false),
    m_apiVersionsHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

string DescribeInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceNames.begin(); itr != m_instanceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceKeys.begin(); itr != m_instanceKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineNames.begin(); itr != m_engineNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineVersions.begin(); itr != m_engineVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apiVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiVersions.begin(); itr != m_apiVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
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

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskStatus.begin(); itr != m_taskStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetInstanceNames() const
{
    return m_instanceNames;
}

void DescribeInstancesRequest::SetInstanceNames(const vector<string>& _instanceNames)
{
    m_instanceNames = _instanceNames;
    m_instanceNamesHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceNamesHasBeenSet() const
{
    return m_instanceNamesHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetInstanceKeys() const
{
    return m_instanceKeys;
}

void DescribeInstancesRequest::SetInstanceKeys(const vector<string>& _instanceKeys)
{
    m_instanceKeys = _instanceKeys;
    m_instanceKeysHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceKeysHasBeenSet() const
{
    return m_instanceKeysHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetStatus() const
{
    return m_status;
}

void DescribeInstancesRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInstancesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetEngineNames() const
{
    return m_engineNames;
}

void DescribeInstancesRequest::SetEngineNames(const vector<string>& _engineNames)
{
    m_engineNames = _engineNames;
    m_engineNamesHasBeenSet = true;
}

bool DescribeInstancesRequest::EngineNamesHasBeenSet() const
{
    return m_engineNamesHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetEngineVersions() const
{
    return m_engineVersions;
}

void DescribeInstancesRequest::SetEngineVersions(const vector<string>& _engineVersions)
{
    m_engineVersions = _engineVersions;
    m_engineVersionsHasBeenSet = true;
}

bool DescribeInstancesRequest::EngineVersionsHasBeenSet() const
{
    return m_engineVersionsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetApiVersions() const
{
    return m_apiVersions;
}

void DescribeInstancesRequest::SetApiVersions(const vector<string>& _apiVersions)
{
    m_apiVersions = _apiVersions;
    m_apiVersionsHasBeenSet = true;
}

bool DescribeInstancesRequest::ApiVersionsHasBeenSet() const
{
    return m_apiVersionsHasBeenSet;
}

string DescribeInstancesRequest::GetCreateAt() const
{
    return m_createAt;
}

void DescribeInstancesRequest::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool DescribeInstancesRequest::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetZones() const
{
    return m_zones;
}

void DescribeInstancesRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool DescribeInstancesRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string DescribeInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeInstancesRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeInstancesRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<Tag> DescribeInstancesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void DescribeInstancesRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool DescribeInstancesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

vector<int64_t> DescribeInstancesRequest::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribeInstancesRequest::SetTaskStatus(const vector<int64_t>& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribeInstancesRequest::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}


