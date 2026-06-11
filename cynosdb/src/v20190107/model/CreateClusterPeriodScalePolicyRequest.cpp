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

#include <tencentcloud/cynosdb/v20190107/model/CreateClusterPeriodScalePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateClusterPeriodScalePolicyRequest::CreateClusterPeriodScalePolicyRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_scaleStartTimeHasBeenSet(false),
    m_scaleEndTimeHasBeenSet(false),
    m_policyStartTimeHasBeenSet(false),
    m_policyEndTimeHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_periodConfigHasBeenSet(false)
{
}

string CreateClusterPeriodScalePolicyRequest::ToJsonString() const
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policyStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policyEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_periodConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_periodConfig.begin(); itr != m_periodConfig.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterPeriodScalePolicyRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterPeriodScalePolicyRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterPeriodScalePolicyRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateClusterPeriodScalePolicyRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateClusterPeriodScalePolicyRequest::GetScaleStartTime() const
{
    return m_scaleStartTime;
}

void CreateClusterPeriodScalePolicyRequest::SetScaleStartTime(const string& _scaleStartTime)
{
    m_scaleStartTime = _scaleStartTime;
    m_scaleStartTimeHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::ScaleStartTimeHasBeenSet() const
{
    return m_scaleStartTimeHasBeenSet;
}

string CreateClusterPeriodScalePolicyRequest::GetScaleEndTime() const
{
    return m_scaleEndTime;
}

void CreateClusterPeriodScalePolicyRequest::SetScaleEndTime(const string& _scaleEndTime)
{
    m_scaleEndTime = _scaleEndTime;
    m_scaleEndTimeHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::ScaleEndTimeHasBeenSet() const
{
    return m_scaleEndTimeHasBeenSet;
}

string CreateClusterPeriodScalePolicyRequest::GetPolicyStartTime() const
{
    return m_policyStartTime;
}

void CreateClusterPeriodScalePolicyRequest::SetPolicyStartTime(const string& _policyStartTime)
{
    m_policyStartTime = _policyStartTime;
    m_policyStartTimeHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::PolicyStartTimeHasBeenSet() const
{
    return m_policyStartTimeHasBeenSet;
}

string CreateClusterPeriodScalePolicyRequest::GetPolicyEndTime() const
{
    return m_policyEndTime;
}

void CreateClusterPeriodScalePolicyRequest::SetPolicyEndTime(const string& _policyEndTime)
{
    m_policyEndTime = _policyEndTime;
    m_policyEndTimeHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::PolicyEndTimeHasBeenSet() const
{
    return m_policyEndTimeHasBeenSet;
}

string CreateClusterPeriodScalePolicyRequest::GetPeriodType() const
{
    return m_periodType;
}

void CreateClusterPeriodScalePolicyRequest::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

double CreateClusterPeriodScalePolicyRequest::GetMinCpu() const
{
    return m_minCpu;
}

void CreateClusterPeriodScalePolicyRequest::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double CreateClusterPeriodScalePolicyRequest::GetMaxCpu() const
{
    return m_maxCpu;
}

void CreateClusterPeriodScalePolicyRequest::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

vector<int64_t> CreateClusterPeriodScalePolicyRequest::GetPeriodConfig() const
{
    return m_periodConfig;
}

void CreateClusterPeriodScalePolicyRequest::SetPeriodConfig(const vector<int64_t>& _periodConfig)
{
    m_periodConfig = _periodConfig;
    m_periodConfigHasBeenSet = true;
}

bool CreateClusterPeriodScalePolicyRequest::PeriodConfigHasBeenSet() const
{
    return m_periodConfigHasBeenSet;
}


