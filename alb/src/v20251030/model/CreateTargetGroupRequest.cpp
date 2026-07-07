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

#include <tencentcloud/alb/v20251030/model/CreateTargetGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

CreateTargetGroupRequest::CreateTargetGroupRequest() :
    m_targetTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_keepaliveEnabledHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_schedulerAlgorithmHasBeenSet(false),
    m_stickySessionConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false)
{
}

string CreateTargetGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateTargetGroupRequest::GetTargetType() const
{
    return m_targetType;
}

void CreateTargetGroupRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool CreateTargetGroupRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string CreateTargetGroupRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateTargetGroupRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateTargetGroupRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

bool CreateTargetGroupRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateTargetGroupRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateTargetGroupRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

HealthCheckConfig CreateTargetGroupRequest::GetHealthCheckConfig() const
{
    return m_healthCheckConfig;
}

void CreateTargetGroupRequest::SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig)
{
    m_healthCheckConfig = _healthCheckConfig;
    m_healthCheckConfigHasBeenSet = true;
}

bool CreateTargetGroupRequest::HealthCheckConfigHasBeenSet() const
{
    return m_healthCheckConfigHasBeenSet;
}

bool CreateTargetGroupRequest::GetKeepaliveEnabled() const
{
    return m_keepaliveEnabled;
}

void CreateTargetGroupRequest::SetKeepaliveEnabled(const bool& _keepaliveEnabled)
{
    m_keepaliveEnabled = _keepaliveEnabled;
    m_keepaliveEnabledHasBeenSet = true;
}

bool CreateTargetGroupRequest::KeepaliveEnabledHasBeenSet() const
{
    return m_keepaliveEnabledHasBeenSet;
}

string CreateTargetGroupRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateTargetGroupRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateTargetGroupRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateTargetGroupRequest::GetSchedulerAlgorithm() const
{
    return m_schedulerAlgorithm;
}

void CreateTargetGroupRequest::SetSchedulerAlgorithm(const string& _schedulerAlgorithm)
{
    m_schedulerAlgorithm = _schedulerAlgorithm;
    m_schedulerAlgorithmHasBeenSet = true;
}

bool CreateTargetGroupRequest::SchedulerAlgorithmHasBeenSet() const
{
    return m_schedulerAlgorithmHasBeenSet;
}

StickySessionConfig CreateTargetGroupRequest::GetStickySessionConfig() const
{
    return m_stickySessionConfig;
}

void CreateTargetGroupRequest::SetStickySessionConfig(const StickySessionConfig& _stickySessionConfig)
{
    m_stickySessionConfig = _stickySessionConfig;
    m_stickySessionConfigHasBeenSet = true;
}

bool CreateTargetGroupRequest::StickySessionConfigHasBeenSet() const
{
    return m_stickySessionConfigHasBeenSet;
}

vector<TagInfo> CreateTargetGroupRequest::GetTags() const
{
    return m_tags;
}

void CreateTargetGroupRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateTargetGroupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateTargetGroupRequest::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void CreateTargetGroupRequest::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool CreateTargetGroupRequest::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}


