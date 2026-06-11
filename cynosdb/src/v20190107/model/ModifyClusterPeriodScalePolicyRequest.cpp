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

#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterPeriodScalePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyClusterPeriodScalePolicyRequest::ModifyClusterPeriodScalePolicyRequest() :
    m_clusterIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_scaleStartTimeHasBeenSet(false),
    m_scaleEndTimeHasBeenSet(false),
    m_policyStartTimeHasBeenSet(false),
    m_policyEndTimeHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_periodConfigHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false)
{
}

string ModifyClusterPeriodScalePolicyRequest::ToJsonString() const
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

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterPeriodScalePolicyRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterPeriodScalePolicyRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyClusterPeriodScalePolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifyClusterPeriodScalePolicyRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ModifyClusterPeriodScalePolicyRequest::GetScaleStartTime() const
{
    return m_scaleStartTime;
}

void ModifyClusterPeriodScalePolicyRequest::SetScaleStartTime(const string& _scaleStartTime)
{
    m_scaleStartTime = _scaleStartTime;
    m_scaleStartTimeHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::ScaleStartTimeHasBeenSet() const
{
    return m_scaleStartTimeHasBeenSet;
}

string ModifyClusterPeriodScalePolicyRequest::GetScaleEndTime() const
{
    return m_scaleEndTime;
}

void ModifyClusterPeriodScalePolicyRequest::SetScaleEndTime(const string& _scaleEndTime)
{
    m_scaleEndTime = _scaleEndTime;
    m_scaleEndTimeHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::ScaleEndTimeHasBeenSet() const
{
    return m_scaleEndTimeHasBeenSet;
}

string ModifyClusterPeriodScalePolicyRequest::GetPolicyStartTime() const
{
    return m_policyStartTime;
}

void ModifyClusterPeriodScalePolicyRequest::SetPolicyStartTime(const string& _policyStartTime)
{
    m_policyStartTime = _policyStartTime;
    m_policyStartTimeHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::PolicyStartTimeHasBeenSet() const
{
    return m_policyStartTimeHasBeenSet;
}

string ModifyClusterPeriodScalePolicyRequest::GetPolicyEndTime() const
{
    return m_policyEndTime;
}

void ModifyClusterPeriodScalePolicyRequest::SetPolicyEndTime(const string& _policyEndTime)
{
    m_policyEndTime = _policyEndTime;
    m_policyEndTimeHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::PolicyEndTimeHasBeenSet() const
{
    return m_policyEndTimeHasBeenSet;
}

string ModifyClusterPeriodScalePolicyRequest::GetPeriodType() const
{
    return m_periodType;
}

void ModifyClusterPeriodScalePolicyRequest::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

vector<int64_t> ModifyClusterPeriodScalePolicyRequest::GetPeriodConfig() const
{
    return m_periodConfig;
}

void ModifyClusterPeriodScalePolicyRequest::SetPeriodConfig(const vector<int64_t>& _periodConfig)
{
    m_periodConfig = _periodConfig;
    m_periodConfigHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::PeriodConfigHasBeenSet() const
{
    return m_periodConfigHasBeenSet;
}

double ModifyClusterPeriodScalePolicyRequest::GetMinCpu() const
{
    return m_minCpu;
}

void ModifyClusterPeriodScalePolicyRequest::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double ModifyClusterPeriodScalePolicyRequest::GetMaxCpu() const
{
    return m_maxCpu;
}

void ModifyClusterPeriodScalePolicyRequest::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool ModifyClusterPeriodScalePolicyRequest::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}


