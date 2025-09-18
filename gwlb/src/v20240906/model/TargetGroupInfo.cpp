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

#include <tencentcloud/gwlb/v20240906/model/TargetGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

TargetGroupInfo::TargetGroupInfo() :
    m_targetGroupIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_associatedRuleHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_scheduleAlgorithmHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_allDeadToAliveHasBeenSet(false),
    m_associatedRuleCountHasBeenSet(false),
    m_registeredInstancesCountHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_forwardingModeHasBeenSet(false),
    m_tcpIdleConnectTimeoutHasBeenSet(false),
    m_othersIdleConnectTimeoutHasBeenSet(false),
    m_rescheduleUnbindRsHasBeenSet(false),
    m_rescheduleUnbindRsStartTimeHasBeenSet(false),
    m_rescheduleUnhealthyHasBeenSet(false),
    m_rescheduleUnhealthyStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetGroupId") && !value["TargetGroupId"].IsNull())
    {
        if (!value["TargetGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.TargetGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupId = string(value["TargetGroupId"].GetString());
        m_targetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupName") && !value["TargetGroupName"].IsNull())
    {
        if (!value["TargetGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.TargetGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupName = string(value["TargetGroupName"].GetString());
        m_targetGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("AssociatedRule") && !value["AssociatedRule"].IsNull())
    {
        if (!value["AssociatedRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.AssociatedRule` is not array type"));

        const rapidjson::Value &tmpValue = value["AssociatedRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssociationItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_associatedRule.push_back(item);
        }
        m_associatedRuleHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ScheduleAlgorithm") && !value["ScheduleAlgorithm"].IsNull())
    {
        if (!value["ScheduleAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.ScheduleAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleAlgorithm = string(value["ScheduleAlgorithm"].GetString());
        m_scheduleAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.HealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheck.Deserialize(value["HealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("AllDeadToAlive") && !value["AllDeadToAlive"].IsNull())
    {
        if (!value["AllDeadToAlive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.AllDeadToAlive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allDeadToAlive = value["AllDeadToAlive"].GetBool();
        m_allDeadToAliveHasBeenSet = true;
    }

    if (value.HasMember("AssociatedRuleCount") && !value["AssociatedRuleCount"].IsNull())
    {
        if (!value["AssociatedRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.AssociatedRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_associatedRuleCount = value["AssociatedRuleCount"].GetInt64();
        m_associatedRuleCountHasBeenSet = true;
    }

    if (value.HasMember("RegisteredInstancesCount") && !value["RegisteredInstancesCount"].IsNull())
    {
        if (!value["RegisteredInstancesCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.RegisteredInstancesCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registeredInstancesCount = value["RegisteredInstancesCount"].GetInt64();
        m_registeredInstancesCountHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("ForwardingMode") && !value["ForwardingMode"].IsNull())
    {
        if (!value["ForwardingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.ForwardingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardingMode = string(value["ForwardingMode"].GetString());
        m_forwardingModeHasBeenSet = true;
    }

    if (value.HasMember("TcpIdleConnectTimeout") && !value["TcpIdleConnectTimeout"].IsNull())
    {
        if (!value["TcpIdleConnectTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.TcpIdleConnectTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tcpIdleConnectTimeout = value["TcpIdleConnectTimeout"].GetInt64();
        m_tcpIdleConnectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("OthersIdleConnectTimeout") && !value["OthersIdleConnectTimeout"].IsNull())
    {
        if (!value["OthersIdleConnectTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.OthersIdleConnectTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_othersIdleConnectTimeout = value["OthersIdleConnectTimeout"].GetInt64();
        m_othersIdleConnectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("RescheduleUnbindRs") && !value["RescheduleUnbindRs"].IsNull())
    {
        if (!value["RescheduleUnbindRs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.RescheduleUnbindRs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rescheduleUnbindRs = value["RescheduleUnbindRs"].GetBool();
        m_rescheduleUnbindRsHasBeenSet = true;
    }

    if (value.HasMember("RescheduleUnbindRsStartTime") && !value["RescheduleUnbindRsStartTime"].IsNull())
    {
        if (!value["RescheduleUnbindRsStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.RescheduleUnbindRsStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rescheduleUnbindRsStartTime = value["RescheduleUnbindRsStartTime"].GetInt64();
        m_rescheduleUnbindRsStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RescheduleUnhealthy") && !value["RescheduleUnhealthy"].IsNull())
    {
        if (!value["RescheduleUnhealthy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.RescheduleUnhealthy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rescheduleUnhealthy = value["RescheduleUnhealthy"].GetBool();
        m_rescheduleUnhealthyHasBeenSet = true;
    }

    if (value.HasMember("RescheduleUnhealthyStartTime") && !value["RescheduleUnhealthyStartTime"].IsNull())
    {
        if (!value["RescheduleUnhealthyStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupInfo.RescheduleUnhealthyStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rescheduleUnhealthyStartTime = value["RescheduleUnhealthyStartTime"].GetInt64();
        m_rescheduleUnhealthyStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_associatedRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_associatedRule.begin(); itr != m_associatedRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allDeadToAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllDeadToAlive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allDeadToAlive, allocator);
    }

    if (m_associatedRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_associatedRuleCount, allocator);
    }

    if (m_registeredInstancesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredInstancesCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registeredInstancesCount, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_forwardingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tcpIdleConnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpIdleConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcpIdleConnectTimeout, allocator);
    }

    if (m_othersIdleConnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OthersIdleConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_othersIdleConnectTimeout, allocator);
    }

    if (m_rescheduleUnbindRsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleUnbindRs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rescheduleUnbindRs, allocator);
    }

    if (m_rescheduleUnbindRsStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleUnbindRsStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rescheduleUnbindRsStartTime, allocator);
    }

    if (m_rescheduleUnhealthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleUnhealthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rescheduleUnhealthy, allocator);
    }

    if (m_rescheduleUnhealthyStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleUnhealthyStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rescheduleUnhealthyStartTime, allocator);
    }

}


string TargetGroupInfo::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void TargetGroupInfo::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool TargetGroupInfo::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

string TargetGroupInfo::GetVpcId() const
{
    return m_vpcId;
}

void TargetGroupInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TargetGroupInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string TargetGroupInfo::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void TargetGroupInfo::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool TargetGroupInfo::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}

uint64_t TargetGroupInfo::GetPort() const
{
    return m_port;
}

void TargetGroupInfo::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TargetGroupInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string TargetGroupInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void TargetGroupInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool TargetGroupInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string TargetGroupInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void TargetGroupInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool TargetGroupInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

vector<AssociationItem> TargetGroupInfo::GetAssociatedRule() const
{
    return m_associatedRule;
}

void TargetGroupInfo::SetAssociatedRule(const vector<AssociationItem>& _associatedRule)
{
    m_associatedRule = _associatedRule;
    m_associatedRuleHasBeenSet = true;
}

bool TargetGroupInfo::AssociatedRuleHasBeenSet() const
{
    return m_associatedRuleHasBeenSet;
}

string TargetGroupInfo::GetProtocol() const
{
    return m_protocol;
}

void TargetGroupInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TargetGroupInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string TargetGroupInfo::GetScheduleAlgorithm() const
{
    return m_scheduleAlgorithm;
}

void TargetGroupInfo::SetScheduleAlgorithm(const string& _scheduleAlgorithm)
{
    m_scheduleAlgorithm = _scheduleAlgorithm;
    m_scheduleAlgorithmHasBeenSet = true;
}

bool TargetGroupInfo::ScheduleAlgorithmHasBeenSet() const
{
    return m_scheduleAlgorithmHasBeenSet;
}

TargetGroupHealthCheck TargetGroupInfo::GetHealthCheck() const
{
    return m_healthCheck;
}

void TargetGroupInfo::SetHealthCheck(const TargetGroupHealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool TargetGroupInfo::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

bool TargetGroupInfo::GetAllDeadToAlive() const
{
    return m_allDeadToAlive;
}

void TargetGroupInfo::SetAllDeadToAlive(const bool& _allDeadToAlive)
{
    m_allDeadToAlive = _allDeadToAlive;
    m_allDeadToAliveHasBeenSet = true;
}

bool TargetGroupInfo::AllDeadToAliveHasBeenSet() const
{
    return m_allDeadToAliveHasBeenSet;
}

int64_t TargetGroupInfo::GetAssociatedRuleCount() const
{
    return m_associatedRuleCount;
}

void TargetGroupInfo::SetAssociatedRuleCount(const int64_t& _associatedRuleCount)
{
    m_associatedRuleCount = _associatedRuleCount;
    m_associatedRuleCountHasBeenSet = true;
}

bool TargetGroupInfo::AssociatedRuleCountHasBeenSet() const
{
    return m_associatedRuleCountHasBeenSet;
}

int64_t TargetGroupInfo::GetRegisteredInstancesCount() const
{
    return m_registeredInstancesCount;
}

void TargetGroupInfo::SetRegisteredInstancesCount(const int64_t& _registeredInstancesCount)
{
    m_registeredInstancesCount = _registeredInstancesCount;
    m_registeredInstancesCountHasBeenSet = true;
}

bool TargetGroupInfo::RegisteredInstancesCountHasBeenSet() const
{
    return m_registeredInstancesCountHasBeenSet;
}

vector<TagInfo> TargetGroupInfo::GetTag() const
{
    return m_tag;
}

void TargetGroupInfo::SetTag(const vector<TagInfo>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool TargetGroupInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string TargetGroupInfo::GetForwardingMode() const
{
    return m_forwardingMode;
}

void TargetGroupInfo::SetForwardingMode(const string& _forwardingMode)
{
    m_forwardingMode = _forwardingMode;
    m_forwardingModeHasBeenSet = true;
}

bool TargetGroupInfo::ForwardingModeHasBeenSet() const
{
    return m_forwardingModeHasBeenSet;
}

int64_t TargetGroupInfo::GetTcpIdleConnectTimeout() const
{
    return m_tcpIdleConnectTimeout;
}

void TargetGroupInfo::SetTcpIdleConnectTimeout(const int64_t& _tcpIdleConnectTimeout)
{
    m_tcpIdleConnectTimeout = _tcpIdleConnectTimeout;
    m_tcpIdleConnectTimeoutHasBeenSet = true;
}

bool TargetGroupInfo::TcpIdleConnectTimeoutHasBeenSet() const
{
    return m_tcpIdleConnectTimeoutHasBeenSet;
}

int64_t TargetGroupInfo::GetOthersIdleConnectTimeout() const
{
    return m_othersIdleConnectTimeout;
}

void TargetGroupInfo::SetOthersIdleConnectTimeout(const int64_t& _othersIdleConnectTimeout)
{
    m_othersIdleConnectTimeout = _othersIdleConnectTimeout;
    m_othersIdleConnectTimeoutHasBeenSet = true;
}

bool TargetGroupInfo::OthersIdleConnectTimeoutHasBeenSet() const
{
    return m_othersIdleConnectTimeoutHasBeenSet;
}

bool TargetGroupInfo::GetRescheduleUnbindRs() const
{
    return m_rescheduleUnbindRs;
}

void TargetGroupInfo::SetRescheduleUnbindRs(const bool& _rescheduleUnbindRs)
{
    m_rescheduleUnbindRs = _rescheduleUnbindRs;
    m_rescheduleUnbindRsHasBeenSet = true;
}

bool TargetGroupInfo::RescheduleUnbindRsHasBeenSet() const
{
    return m_rescheduleUnbindRsHasBeenSet;
}

int64_t TargetGroupInfo::GetRescheduleUnbindRsStartTime() const
{
    return m_rescheduleUnbindRsStartTime;
}

void TargetGroupInfo::SetRescheduleUnbindRsStartTime(const int64_t& _rescheduleUnbindRsStartTime)
{
    m_rescheduleUnbindRsStartTime = _rescheduleUnbindRsStartTime;
    m_rescheduleUnbindRsStartTimeHasBeenSet = true;
}

bool TargetGroupInfo::RescheduleUnbindRsStartTimeHasBeenSet() const
{
    return m_rescheduleUnbindRsStartTimeHasBeenSet;
}

bool TargetGroupInfo::GetRescheduleUnhealthy() const
{
    return m_rescheduleUnhealthy;
}

void TargetGroupInfo::SetRescheduleUnhealthy(const bool& _rescheduleUnhealthy)
{
    m_rescheduleUnhealthy = _rescheduleUnhealthy;
    m_rescheduleUnhealthyHasBeenSet = true;
}

bool TargetGroupInfo::RescheduleUnhealthyHasBeenSet() const
{
    return m_rescheduleUnhealthyHasBeenSet;
}

int64_t TargetGroupInfo::GetRescheduleUnhealthyStartTime() const
{
    return m_rescheduleUnhealthyStartTime;
}

void TargetGroupInfo::SetRescheduleUnhealthyStartTime(const int64_t& _rescheduleUnhealthyStartTime)
{
    m_rescheduleUnhealthyStartTime = _rescheduleUnhealthyStartTime;
    m_rescheduleUnhealthyStartTimeHasBeenSet = true;
}

bool TargetGroupInfo::RescheduleUnhealthyStartTimeHasBeenSet() const
{
    return m_rescheduleUnhealthyStartTimeHasBeenSet;
}

