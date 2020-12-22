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

#include <tencentcloud/monitor/v20180724/model/AlarmHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

AlarmHistory::AlarmHistory() :
    m_alarmIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_alarmObjectHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_firstOccurTimeHasBeenSet(false),
    m_lastOccurTimeHasBeenSet(false),
    m_alarmStatusHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_instanceGroupHasBeenSet(false),
    m_receiverUidsHasBeenSet(false),
    m_receiverGroupsHasBeenSet(false),
    m_noticeWaysHasBeenSet(false),
    m_originIdHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_policyExistsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmHistory::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.MonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = string(value["MonitorType"].GetString());
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("AlarmObject") && !value["AlarmObject"].IsNull())
    {
        if (!value["AlarmObject"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.AlarmObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmObject = string(value["AlarmObject"].GetString());
        m_alarmObjectHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("FirstOccurTime") && !value["FirstOccurTime"].IsNull())
    {
        if (!value["FirstOccurTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.FirstOccurTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstOccurTime = value["FirstOccurTime"].GetInt64();
        m_firstOccurTimeHasBeenSet = true;
    }

    if (value.HasMember("LastOccurTime") && !value["LastOccurTime"].IsNull())
    {
        if (!value["LastOccurTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.LastOccurTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastOccurTime = value["LastOccurTime"].GetInt64();
        m_lastOccurTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmStatus") && !value["AlarmStatus"].IsNull())
    {
        if (!value["AlarmStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.AlarmStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmStatus = string(value["AlarmStatus"].GetString());
        m_alarmStatusHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("VPC") && !value["VPC"].IsNull())
    {
        if (!value["VPC"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.VPC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPC = string(value["VPC"].GetString());
        m_vPCHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceGroup") && !value["InstanceGroup"].IsNull())
    {
        if (!value["InstanceGroup"].IsArray())
            return CoreInternalOutcome(Error("response `AlarmHistory.InstanceGroup` is not array type"));

        const Value &tmpValue = value["InstanceGroup"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceGroups item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceGroup.push_back(item);
        }
        m_instanceGroupHasBeenSet = true;
    }

    if (value.HasMember("ReceiverUids") && !value["ReceiverUids"].IsNull())
    {
        if (!value["ReceiverUids"].IsArray())
            return CoreInternalOutcome(Error("response `AlarmHistory.ReceiverUids` is not array type"));

        const Value &tmpValue = value["ReceiverUids"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverUids.push_back((*itr).GetInt64());
        }
        m_receiverUidsHasBeenSet = true;
    }

    if (value.HasMember("ReceiverGroups") && !value["ReceiverGroups"].IsNull())
    {
        if (!value["ReceiverGroups"].IsArray())
            return CoreInternalOutcome(Error("response `AlarmHistory.ReceiverGroups` is not array type"));

        const Value &tmpValue = value["ReceiverGroups"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverGroups.push_back((*itr).GetInt64());
        }
        m_receiverGroupsHasBeenSet = true;
    }

    if (value.HasMember("NoticeWays") && !value["NoticeWays"].IsNull())
    {
        if (!value["NoticeWays"].IsArray())
            return CoreInternalOutcome(Error("response `AlarmHistory.NoticeWays` is not array type"));

        const Value &tmpValue = value["NoticeWays"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noticeWays.push_back((*itr).GetString());
        }
        m_noticeWaysHasBeenSet = true;
    }

    if (value.HasMember("OriginId") && !value["OriginId"].IsNull())
    {
        if (!value["OriginId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.OriginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originId = string(value["OriginId"].GetString());
        m_originIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.AlarmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = string(value["AlarmType"].GetString());
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PolicyExists") && !value["PolicyExists"].IsNull())
    {
        if (!value["PolicyExists"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AlarmHistory.PolicyExists` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyExists = value["PolicyExists"].GetInt64();
        m_policyExistsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmHistory::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_alarmIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmObjectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_alarmObject.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_firstOccurTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirstOccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstOccurTime, allocator);
    }

    if (m_lastOccurTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LastOccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastOccurTime, allocator);
    }

    if (m_alarmStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_alarmStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VPC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vPC.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceGroup.begin(); itr != m_instanceGroup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_receiverUidsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReceiverUids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_receiverUids.begin(); itr != m_receiverUids.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_receiverGroupsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReceiverGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_receiverGroups.begin(); itr != m_receiverGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_noticeWaysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NoticeWays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_noticeWays.begin(); itr != m_noticeWays.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_originId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_policyExistsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyExists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyExists, allocator);
    }

}


string AlarmHistory::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmHistory::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmHistory::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmHistory::GetMonitorType() const
{
    return m_monitorType;
}

void AlarmHistory::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool AlarmHistory::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string AlarmHistory::GetNamespace() const
{
    return m_namespace;
}

void AlarmHistory::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool AlarmHistory::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string AlarmHistory::GetAlarmObject() const
{
    return m_alarmObject;
}

void AlarmHistory::SetAlarmObject(const string& _alarmObject)
{
    m_alarmObject = _alarmObject;
    m_alarmObjectHasBeenSet = true;
}

bool AlarmHistory::AlarmObjectHasBeenSet() const
{
    return m_alarmObjectHasBeenSet;
}

string AlarmHistory::GetContent() const
{
    return m_content;
}

void AlarmHistory::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AlarmHistory::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t AlarmHistory::GetFirstOccurTime() const
{
    return m_firstOccurTime;
}

void AlarmHistory::SetFirstOccurTime(const int64_t& _firstOccurTime)
{
    m_firstOccurTime = _firstOccurTime;
    m_firstOccurTimeHasBeenSet = true;
}

bool AlarmHistory::FirstOccurTimeHasBeenSet() const
{
    return m_firstOccurTimeHasBeenSet;
}

int64_t AlarmHistory::GetLastOccurTime() const
{
    return m_lastOccurTime;
}

void AlarmHistory::SetLastOccurTime(const int64_t& _lastOccurTime)
{
    m_lastOccurTime = _lastOccurTime;
    m_lastOccurTimeHasBeenSet = true;
}

bool AlarmHistory::LastOccurTimeHasBeenSet() const
{
    return m_lastOccurTimeHasBeenSet;
}

string AlarmHistory::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void AlarmHistory::SetAlarmStatus(const string& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool AlarmHistory::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}

string AlarmHistory::GetPolicyId() const
{
    return m_policyId;
}

void AlarmHistory::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AlarmHistory::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string AlarmHistory::GetPolicyName() const
{
    return m_policyName;
}

void AlarmHistory::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AlarmHistory::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AlarmHistory::GetVPC() const
{
    return m_vPC;
}

void AlarmHistory::SetVPC(const string& _vPC)
{
    m_vPC = _vPC;
    m_vPCHasBeenSet = true;
}

bool AlarmHistory::VPCHasBeenSet() const
{
    return m_vPCHasBeenSet;
}

int64_t AlarmHistory::GetProjectId() const
{
    return m_projectId;
}

void AlarmHistory::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AlarmHistory::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AlarmHistory::GetProjectName() const
{
    return m_projectName;
}

void AlarmHistory::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AlarmHistory::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

vector<InstanceGroups> AlarmHistory::GetInstanceGroup() const
{
    return m_instanceGroup;
}

void AlarmHistory::SetInstanceGroup(const vector<InstanceGroups>& _instanceGroup)
{
    m_instanceGroup = _instanceGroup;
    m_instanceGroupHasBeenSet = true;
}

bool AlarmHistory::InstanceGroupHasBeenSet() const
{
    return m_instanceGroupHasBeenSet;
}

vector<int64_t> AlarmHistory::GetReceiverUids() const
{
    return m_receiverUids;
}

void AlarmHistory::SetReceiverUids(const vector<int64_t>& _receiverUids)
{
    m_receiverUids = _receiverUids;
    m_receiverUidsHasBeenSet = true;
}

bool AlarmHistory::ReceiverUidsHasBeenSet() const
{
    return m_receiverUidsHasBeenSet;
}

vector<int64_t> AlarmHistory::GetReceiverGroups() const
{
    return m_receiverGroups;
}

void AlarmHistory::SetReceiverGroups(const vector<int64_t>& _receiverGroups)
{
    m_receiverGroups = _receiverGroups;
    m_receiverGroupsHasBeenSet = true;
}

bool AlarmHistory::ReceiverGroupsHasBeenSet() const
{
    return m_receiverGroupsHasBeenSet;
}

vector<string> AlarmHistory::GetNoticeWays() const
{
    return m_noticeWays;
}

void AlarmHistory::SetNoticeWays(const vector<string>& _noticeWays)
{
    m_noticeWays = _noticeWays;
    m_noticeWaysHasBeenSet = true;
}

bool AlarmHistory::NoticeWaysHasBeenSet() const
{
    return m_noticeWaysHasBeenSet;
}

string AlarmHistory::GetOriginId() const
{
    return m_originId;
}

void AlarmHistory::SetOriginId(const string& _originId)
{
    m_originId = _originId;
    m_originIdHasBeenSet = true;
}

bool AlarmHistory::OriginIdHasBeenSet() const
{
    return m_originIdHasBeenSet;
}

string AlarmHistory::GetAlarmType() const
{
    return m_alarmType;
}

void AlarmHistory::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool AlarmHistory::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

int64_t AlarmHistory::GetEventId() const
{
    return m_eventId;
}

void AlarmHistory::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AlarmHistory::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string AlarmHistory::GetRegion() const
{
    return m_region;
}

void AlarmHistory::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AlarmHistory::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t AlarmHistory::GetPolicyExists() const
{
    return m_policyExists;
}

void AlarmHistory::SetPolicyExists(const int64_t& _policyExists)
{
    m_policyExists = _policyExists;
    m_policyExistsHasBeenSet = true;
}

bool AlarmHistory::PolicyExistsHasBeenSet() const
{
    return m_policyExistsHasBeenSet;
}

