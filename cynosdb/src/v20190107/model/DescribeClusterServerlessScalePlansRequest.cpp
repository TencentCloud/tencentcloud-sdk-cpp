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

#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterServerlessScalePlansRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeClusterServerlessScalePlansRequest::DescribeClusterServerlessScalePlansRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_expectedStartTimeHasBeenSet(false),
    m_expectedEndTimeHasBeenSet(false)
{
}

string DescribeClusterServerlessScalePlansRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_planId, allocator);
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

    if (m_expectedStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expectedStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expectedEndTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterServerlessScalePlansRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeClusterServerlessScalePlansRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeClusterServerlessScalePlansRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DescribeClusterServerlessScalePlansRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeClusterServerlessScalePlansRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeClusterServerlessScalePlansRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DescribeClusterServerlessScalePlansRequest::GetPolicyType() const
{
    return m_policyType;
}

void DescribeClusterServerlessScalePlansRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool DescribeClusterServerlessScalePlansRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

int64_t DescribeClusterServerlessScalePlansRequest::GetPlanId() const
{
    return m_planId;
}

void DescribeClusterServerlessScalePlansRequest::SetPlanId(const int64_t& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool DescribeClusterServerlessScalePlansRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

int64_t DescribeClusterServerlessScalePlansRequest::GetLimit() const
{
    return m_limit;
}

void DescribeClusterServerlessScalePlansRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeClusterServerlessScalePlansRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeClusterServerlessScalePlansRequest::GetOffset() const
{
    return m_offset;
}

void DescribeClusterServerlessScalePlansRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeClusterServerlessScalePlansRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeClusterServerlessScalePlansRequest::GetExpectedStartTime() const
{
    return m_expectedStartTime;
}

void DescribeClusterServerlessScalePlansRequest::SetExpectedStartTime(const string& _expectedStartTime)
{
    m_expectedStartTime = _expectedStartTime;
    m_expectedStartTimeHasBeenSet = true;
}

bool DescribeClusterServerlessScalePlansRequest::ExpectedStartTimeHasBeenSet() const
{
    return m_expectedStartTimeHasBeenSet;
}

string DescribeClusterServerlessScalePlansRequest::GetExpectedEndTime() const
{
    return m_expectedEndTime;
}

void DescribeClusterServerlessScalePlansRequest::SetExpectedEndTime(const string& _expectedEndTime)
{
    m_expectedEndTime = _expectedEndTime;
    m_expectedEndTimeHasBeenSet = true;
}

bool DescribeClusterServerlessScalePlansRequest::ExpectedEndTimeHasBeenSet() const
{
    return m_expectedEndTimeHasBeenSet;
}


