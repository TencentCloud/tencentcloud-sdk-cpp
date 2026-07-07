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

#include <tencentcloud/alb/v20251030/model/ModifyTargetGroupAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ModifyTargetGroupAttributesRequest::ModifyTargetGroupAttributesRequest() :
    m_dryRunHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_keepaliveEnabledHasBeenSet(false),
    m_schedulerAlgorithmHasBeenSet(false),
    m_stickySessionConfigHasBeenSet(false),
    m_targetGroupIdHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false)
{
}

string ModifyTargetGroupAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_healthCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_keepaliveEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepaliveEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepaliveEnabled, allocator);
    }

    if (m_schedulerAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulerAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_stickySessionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StickySessionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stickySessionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyTargetGroupAttributesRequest::GetDryRun() const
{
    return m_dryRun;
}

void ModifyTargetGroupAttributesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ModifyTargetGroupAttributesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

HealthCheckConfig ModifyTargetGroupAttributesRequest::GetHealthCheckConfig() const
{
    return m_healthCheckConfig;
}

void ModifyTargetGroupAttributesRequest::SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig)
{
    m_healthCheckConfig = _healthCheckConfig;
    m_healthCheckConfigHasBeenSet = true;
}

bool ModifyTargetGroupAttributesRequest::HealthCheckConfigHasBeenSet() const
{
    return m_healthCheckConfigHasBeenSet;
}

bool ModifyTargetGroupAttributesRequest::GetKeepaliveEnabled() const
{
    return m_keepaliveEnabled;
}

void ModifyTargetGroupAttributesRequest::SetKeepaliveEnabled(const bool& _keepaliveEnabled)
{
    m_keepaliveEnabled = _keepaliveEnabled;
    m_keepaliveEnabledHasBeenSet = true;
}

bool ModifyTargetGroupAttributesRequest::KeepaliveEnabledHasBeenSet() const
{
    return m_keepaliveEnabledHasBeenSet;
}

string ModifyTargetGroupAttributesRequest::GetSchedulerAlgorithm() const
{
    return m_schedulerAlgorithm;
}

void ModifyTargetGroupAttributesRequest::SetSchedulerAlgorithm(const string& _schedulerAlgorithm)
{
    m_schedulerAlgorithm = _schedulerAlgorithm;
    m_schedulerAlgorithmHasBeenSet = true;
}

bool ModifyTargetGroupAttributesRequest::SchedulerAlgorithmHasBeenSet() const
{
    return m_schedulerAlgorithmHasBeenSet;
}

StickySessionConfig ModifyTargetGroupAttributesRequest::GetStickySessionConfig() const
{
    return m_stickySessionConfig;
}

void ModifyTargetGroupAttributesRequest::SetStickySessionConfig(const StickySessionConfig& _stickySessionConfig)
{
    m_stickySessionConfig = _stickySessionConfig;
    m_stickySessionConfigHasBeenSet = true;
}

bool ModifyTargetGroupAttributesRequest::StickySessionConfigHasBeenSet() const
{
    return m_stickySessionConfigHasBeenSet;
}

string ModifyTargetGroupAttributesRequest::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void ModifyTargetGroupAttributesRequest::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool ModifyTargetGroupAttributesRequest::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

string ModifyTargetGroupAttributesRequest::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void ModifyTargetGroupAttributesRequest::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool ModifyTargetGroupAttributesRequest::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}


