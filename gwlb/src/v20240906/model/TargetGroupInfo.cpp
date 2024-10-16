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
    m_registeredInstancesCountHasBeenSet(false)
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

