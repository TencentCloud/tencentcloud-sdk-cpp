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

#include <tencentcloud/alb/v20251030/model/TargetGroupOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

TargetGroupOutput::TargetGroupOutput() :
    m_createTimeHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_keepaliveEnabledHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_relatedLoadBalancersCountHasBeenSet(false),
    m_schedulerAlgorithmHasBeenSet(false),
    m_stickySessionConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetGroupIdHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_targetGroupStatusHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckConfig") && !value["HealthCheckConfig"].IsNull())
    {
        if (!value["HealthCheckConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.HealthCheckConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheckConfig.Deserialize(value["HealthCheckConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckConfigHasBeenSet = true;
    }

    if (value.HasMember("KeepaliveEnabled") && !value["KeepaliveEnabled"].IsNull())
    {
        if (!value["KeepaliveEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.KeepaliveEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_keepaliveEnabled = value["KeepaliveEnabled"].GetBool();
        m_keepaliveEnabledHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RelatedLoadBalancersCount") && !value["RelatedLoadBalancersCount"].IsNull())
    {
        if (!value["RelatedLoadBalancersCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.RelatedLoadBalancersCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedLoadBalancersCount = value["RelatedLoadBalancersCount"].GetInt64();
        m_relatedLoadBalancersCountHasBeenSet = true;
    }

    if (value.HasMember("SchedulerAlgorithm") && !value["SchedulerAlgorithm"].IsNull())
    {
        if (!value["SchedulerAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.SchedulerAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerAlgorithm = string(value["SchedulerAlgorithm"].GetString());
        m_schedulerAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("StickySessionConfig") && !value["StickySessionConfig"].IsNull())
    {
        if (!value["StickySessionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.StickySessionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stickySessionConfig.Deserialize(value["StickySessionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stickySessionConfigHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupId") && !value["TargetGroupId"].IsNull())
    {
        if (!value["TargetGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.TargetGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupId = string(value["TargetGroupId"].GetString());
        m_targetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupName") && !value["TargetGroupName"].IsNull())
    {
        if (!value["TargetGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.TargetGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupName = string(value["TargetGroupName"].GetString());
        m_targetGroupNameHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupStatus") && !value["TargetGroupStatus"].IsNull())
    {
        if (!value["TargetGroupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.TargetGroupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupStatus = string(value["TargetGroupStatus"].GetString());
        m_targetGroupStatusHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupOutput.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_keepaliveEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepaliveEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepaliveEnabled, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedLoadBalancersCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedLoadBalancersCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedLoadBalancersCount, allocator);
    }

    if (m_schedulerAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_stickySessionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StickySessionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stickySessionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

}


string TargetGroupOutput::GetCreateTime() const
{
    return m_createTime;
}

void TargetGroupOutput::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TargetGroupOutput::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

HealthCheckConfig TargetGroupOutput::GetHealthCheckConfig() const
{
    return m_healthCheckConfig;
}

void TargetGroupOutput::SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig)
{
    m_healthCheckConfig = _healthCheckConfig;
    m_healthCheckConfigHasBeenSet = true;
}

bool TargetGroupOutput::HealthCheckConfigHasBeenSet() const
{
    return m_healthCheckConfigHasBeenSet;
}

bool TargetGroupOutput::GetKeepaliveEnabled() const
{
    return m_keepaliveEnabled;
}

void TargetGroupOutput::SetKeepaliveEnabled(const bool& _keepaliveEnabled)
{
    m_keepaliveEnabled = _keepaliveEnabled;
    m_keepaliveEnabledHasBeenSet = true;
}

bool TargetGroupOutput::KeepaliveEnabledHasBeenSet() const
{
    return m_keepaliveEnabledHasBeenSet;
}

string TargetGroupOutput::GetProtocol() const
{
    return m_protocol;
}

void TargetGroupOutput::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TargetGroupOutput::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t TargetGroupOutput::GetRelatedLoadBalancersCount() const
{
    return m_relatedLoadBalancersCount;
}

void TargetGroupOutput::SetRelatedLoadBalancersCount(const int64_t& _relatedLoadBalancersCount)
{
    m_relatedLoadBalancersCount = _relatedLoadBalancersCount;
    m_relatedLoadBalancersCountHasBeenSet = true;
}

bool TargetGroupOutput::RelatedLoadBalancersCountHasBeenSet() const
{
    return m_relatedLoadBalancersCountHasBeenSet;
}

string TargetGroupOutput::GetSchedulerAlgorithm() const
{
    return m_schedulerAlgorithm;
}

void TargetGroupOutput::SetSchedulerAlgorithm(const string& _schedulerAlgorithm)
{
    m_schedulerAlgorithm = _schedulerAlgorithm;
    m_schedulerAlgorithmHasBeenSet = true;
}

bool TargetGroupOutput::SchedulerAlgorithmHasBeenSet() const
{
    return m_schedulerAlgorithmHasBeenSet;
}

StickySessionConfig TargetGroupOutput::GetStickySessionConfig() const
{
    return m_stickySessionConfig;
}

void TargetGroupOutput::SetStickySessionConfig(const StickySessionConfig& _stickySessionConfig)
{
    m_stickySessionConfig = _stickySessionConfig;
    m_stickySessionConfigHasBeenSet = true;
}

bool TargetGroupOutput::StickySessionConfigHasBeenSet() const
{
    return m_stickySessionConfigHasBeenSet;
}

vector<TagInfo> TargetGroupOutput::GetTags() const
{
    return m_tags;
}

void TargetGroupOutput::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TargetGroupOutput::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string TargetGroupOutput::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void TargetGroupOutput::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool TargetGroupOutput::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

string TargetGroupOutput::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void TargetGroupOutput::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool TargetGroupOutput::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}

string TargetGroupOutput::GetTargetGroupStatus() const
{
    return m_targetGroupStatus;
}

void TargetGroupOutput::SetTargetGroupStatus(const string& _targetGroupStatus)
{
    m_targetGroupStatus = _targetGroupStatus;
    m_targetGroupStatusHasBeenSet = true;
}

bool TargetGroupOutput::TargetGroupStatusHasBeenSet() const
{
    return m_targetGroupStatusHasBeenSet;
}

string TargetGroupOutput::GetTargetType() const
{
    return m_targetType;
}

void TargetGroupOutput::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool TargetGroupOutput::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string TargetGroupOutput::GetVpcId() const
{
    return m_vpcId;
}

void TargetGroupOutput::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TargetGroupOutput::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

