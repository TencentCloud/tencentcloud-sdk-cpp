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

#include <tencentcloud/cat/v20180409/model/DescribeNodeGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeNodeGroupsRequest::DescribeNodeGroupsRequest() :
    m_nodeTypeHasBeenSet(false),
    m_taskCategoryHasBeenSet(false),
    m_iPTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionIDHasBeenSet(false),
    m_districtIDHasBeenSet(false),
    m_netServiceIDHasBeenSet(false),
    m_nodeGroupTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_probeTypeHasBeenSet(false)
{
}

string DescribeNodeGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeType.begin(); itr != m_nodeType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_taskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskCategory, allocator);
    }

    if (m_iPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iPType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regionID, allocator);
    }

    if (m_districtIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistrictID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_districtID, allocator);
    }

    if (m_netServiceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetServiceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_netServiceID, allocator);
    }

    if (m_nodeGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeGroupType, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_probeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_probeType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeNodeGroupsRequest::GetNodeType() const
{
    return m_nodeType;
}

void DescribeNodeGroupsRequest::SetNodeType(const vector<int64_t>& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

int64_t DescribeNodeGroupsRequest::GetTaskCategory() const
{
    return m_taskCategory;
}

void DescribeNodeGroupsRequest::SetTaskCategory(const int64_t& _taskCategory)
{
    m_taskCategory = _taskCategory;
    m_taskCategoryHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::TaskCategoryHasBeenSet() const
{
    return m_taskCategoryHasBeenSet;
}

int64_t DescribeNodeGroupsRequest::GetIPType() const
{
    return m_iPType;
}

void DescribeNodeGroupsRequest::SetIPType(const int64_t& _iPType)
{
    m_iPType = _iPType;
    m_iPTypeHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::IPTypeHasBeenSet() const
{
    return m_iPTypeHasBeenSet;
}

string DescribeNodeGroupsRequest::GetName() const
{
    return m_name;
}

void DescribeNodeGroupsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeNodeGroupsRequest::GetRegionID() const
{
    return m_regionID;
}

void DescribeNodeGroupsRequest::SetRegionID(const int64_t& _regionID)
{
    m_regionID = _regionID;
    m_regionIDHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::RegionIDHasBeenSet() const
{
    return m_regionIDHasBeenSet;
}

int64_t DescribeNodeGroupsRequest::GetDistrictID() const
{
    return m_districtID;
}

void DescribeNodeGroupsRequest::SetDistrictID(const int64_t& _districtID)
{
    m_districtID = _districtID;
    m_districtIDHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::DistrictIDHasBeenSet() const
{
    return m_districtIDHasBeenSet;
}

int64_t DescribeNodeGroupsRequest::GetNetServiceID() const
{
    return m_netServiceID;
}

void DescribeNodeGroupsRequest::SetNetServiceID(const int64_t& _netServiceID)
{
    m_netServiceID = _netServiceID;
    m_netServiceIDHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::NetServiceIDHasBeenSet() const
{
    return m_netServiceIDHasBeenSet;
}

int64_t DescribeNodeGroupsRequest::GetNodeGroupType() const
{
    return m_nodeGroupType;
}

void DescribeNodeGroupsRequest::SetNodeGroupType(const int64_t& _nodeGroupType)
{
    m_nodeGroupType = _nodeGroupType;
    m_nodeGroupTypeHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::NodeGroupTypeHasBeenSet() const
{
    return m_nodeGroupTypeHasBeenSet;
}

int64_t DescribeNodeGroupsRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeNodeGroupsRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t DescribeNodeGroupsRequest::GetProbeType() const
{
    return m_probeType;
}

void DescribeNodeGroupsRequest::SetProbeType(const uint64_t& _probeType)
{
    m_probeType = _probeType;
    m_probeTypeHasBeenSet = true;
}

bool DescribeNodeGroupsRequest::ProbeTypeHasBeenSet() const
{
    return m_probeTypeHasBeenSet;
}


