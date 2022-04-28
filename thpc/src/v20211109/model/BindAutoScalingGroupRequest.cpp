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

#include <tencentcloud/thpc/v20211109/model/BindAutoScalingGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20211109::Model;
using namespace std;

BindAutoScalingGroupRequest::BindAutoScalingGroupRequest() :
    m_clusterIdHasBeenSet(false),
    m_launchConfigurationIdHasBeenSet(false),
    m_autoScalingGroupIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_expansionBusyTimeHasBeenSet(false),
    m_shrinkIdleTimeHasBeenSet(false),
    m_enableAutoExpansionHasBeenSet(false),
    m_enableAutoShrinkHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string BindAutoScalingGroupRequest::ToJsonString() const
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

    if (m_launchConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_expansionBusyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpansionBusyTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expansionBusyTime, allocator);
    }

    if (m_shrinkIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShrinkIdleTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shrinkIdleTime, allocator);
    }

    if (m_enableAutoExpansionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoExpansion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoExpansion, allocator);
    }

    if (m_enableAutoShrinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoShrink";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoShrink, allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindAutoScalingGroupRequest::GetClusterId() const
{
    return m_clusterId;
}

void BindAutoScalingGroupRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string BindAutoScalingGroupRequest::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void BindAutoScalingGroupRequest::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string BindAutoScalingGroupRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void BindAutoScalingGroupRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string BindAutoScalingGroupRequest::GetQueueName() const
{
    return m_queueName;
}

void BindAutoScalingGroupRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

int64_t BindAutoScalingGroupRequest::GetExpansionBusyTime() const
{
    return m_expansionBusyTime;
}

void BindAutoScalingGroupRequest::SetExpansionBusyTime(const int64_t& _expansionBusyTime)
{
    m_expansionBusyTime = _expansionBusyTime;
    m_expansionBusyTimeHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::ExpansionBusyTimeHasBeenSet() const
{
    return m_expansionBusyTimeHasBeenSet;
}

int64_t BindAutoScalingGroupRequest::GetShrinkIdleTime() const
{
    return m_shrinkIdleTime;
}

void BindAutoScalingGroupRequest::SetShrinkIdleTime(const int64_t& _shrinkIdleTime)
{
    m_shrinkIdleTime = _shrinkIdleTime;
    m_shrinkIdleTimeHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::ShrinkIdleTimeHasBeenSet() const
{
    return m_shrinkIdleTimeHasBeenSet;
}

bool BindAutoScalingGroupRequest::GetEnableAutoExpansion() const
{
    return m_enableAutoExpansion;
}

void BindAutoScalingGroupRequest::SetEnableAutoExpansion(const bool& _enableAutoExpansion)
{
    m_enableAutoExpansion = _enableAutoExpansion;
    m_enableAutoExpansionHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::EnableAutoExpansionHasBeenSet() const
{
    return m_enableAutoExpansionHasBeenSet;
}

bool BindAutoScalingGroupRequest::GetEnableAutoShrink() const
{
    return m_enableAutoShrink;
}

void BindAutoScalingGroupRequest::SetEnableAutoShrink(const bool& _enableAutoShrink)
{
    m_enableAutoShrink = _enableAutoShrink;
    m_enableAutoShrinkHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::EnableAutoShrinkHasBeenSet() const
{
    return m_enableAutoShrinkHasBeenSet;
}

bool BindAutoScalingGroupRequest::GetDryRun() const
{
    return m_dryRun;
}

void BindAutoScalingGroupRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool BindAutoScalingGroupRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


