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

#include <tencentcloud/wedata/v20210820/model/InLongAgentDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InLongAgentDetail::InLongAgentDetail() :
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_agentGroupIdHasBeenSet(false),
    m_cvmAgentStatusListHasBeenSet(false),
    m_agentTotalHasBeenSet(false),
    m_lifeDaysHasBeenSet(false)
{
}

CoreInternalOutcome InLongAgentDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("AgentType") && !value["AgentType"].IsNull())
    {
        if (!value["AgentType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.AgentType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentType = value["AgentType"].GetUint64();
        m_agentTypeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.TaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetUint64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("AgentGroupId") && !value["AgentGroupId"].IsNull())
    {
        if (!value["AgentGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.AgentGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentGroupId = string(value["AgentGroupId"].GetString());
        m_agentGroupIdHasBeenSet = true;
    }

    if (value.HasMember("CvmAgentStatusList") && !value["CvmAgentStatusList"].IsNull())
    {
        if (!value["CvmAgentStatusList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.CvmAgentStatusList` is not array type"));

        const rapidjson::Value &tmpValue = value["CvmAgentStatusList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CvmAgentStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cvmAgentStatusList.push_back(item);
        }
        m_cvmAgentStatusListHasBeenSet = true;
    }

    if (value.HasMember("AgentTotal") && !value["AgentTotal"].IsNull())
    {
        if (!value["AgentTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.AgentTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentTotal = value["AgentTotal"].GetUint64();
        m_agentTotalHasBeenSet = true;
    }

    if (value.HasMember("LifeDays") && !value["LifeDays"].IsNull())
    {
        if (!value["LifeDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentDetail.LifeDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeDays = value["LifeDays"].GetInt64();
        m_lifeDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InLongAgentDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentType, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_agentGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmAgentStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmAgentStatusList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cvmAgentStatusList.begin(); itr != m_cvmAgentStatusList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_agentTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentTotal, allocator);
    }

    if (m_lifeDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeDays, allocator);
    }

}


string InLongAgentDetail::GetAgentId() const
{
    return m_agentId;
}

void InLongAgentDetail::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool InLongAgentDetail::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string InLongAgentDetail::GetAgentName() const
{
    return m_agentName;
}

void InLongAgentDetail::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool InLongAgentDetail::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string InLongAgentDetail::GetStatus() const
{
    return m_status;
}

void InLongAgentDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InLongAgentDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InLongAgentDetail::GetStatusDesc() const
{
    return m_statusDesc;
}

void InLongAgentDetail::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool InLongAgentDetail::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

uint64_t InLongAgentDetail::GetAgentType() const
{
    return m_agentType;
}

void InLongAgentDetail::SetAgentType(const uint64_t& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool InLongAgentDetail::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

string InLongAgentDetail::GetSource() const
{
    return m_source;
}

void InLongAgentDetail::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool InLongAgentDetail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string InLongAgentDetail::GetVpcId() const
{
    return m_vpcId;
}

void InLongAgentDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InLongAgentDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InLongAgentDetail::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void InLongAgentDetail::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool InLongAgentDetail::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string InLongAgentDetail::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void InLongAgentDetail::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool InLongAgentDetail::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

uint64_t InLongAgentDetail::GetTaskCount() const
{
    return m_taskCount;
}

void InLongAgentDetail::SetTaskCount(const uint64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool InLongAgentDetail::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

string InLongAgentDetail::GetAgentGroupId() const
{
    return m_agentGroupId;
}

void InLongAgentDetail::SetAgentGroupId(const string& _agentGroupId)
{
    m_agentGroupId = _agentGroupId;
    m_agentGroupIdHasBeenSet = true;
}

bool InLongAgentDetail::AgentGroupIdHasBeenSet() const
{
    return m_agentGroupIdHasBeenSet;
}

vector<CvmAgentStatus> InLongAgentDetail::GetCvmAgentStatusList() const
{
    return m_cvmAgentStatusList;
}

void InLongAgentDetail::SetCvmAgentStatusList(const vector<CvmAgentStatus>& _cvmAgentStatusList)
{
    m_cvmAgentStatusList = _cvmAgentStatusList;
    m_cvmAgentStatusListHasBeenSet = true;
}

bool InLongAgentDetail::CvmAgentStatusListHasBeenSet() const
{
    return m_cvmAgentStatusListHasBeenSet;
}

uint64_t InLongAgentDetail::GetAgentTotal() const
{
    return m_agentTotal;
}

void InLongAgentDetail::SetAgentTotal(const uint64_t& _agentTotal)
{
    m_agentTotal = _agentTotal;
    m_agentTotalHasBeenSet = true;
}

bool InLongAgentDetail::AgentTotalHasBeenSet() const
{
    return m_agentTotalHasBeenSet;
}

int64_t InLongAgentDetail::GetLifeDays() const
{
    return m_lifeDays;
}

void InLongAgentDetail::SetLifeDays(const int64_t& _lifeDays)
{
    m_lifeDays = _lifeDays;
    m_lifeDaysHasBeenSet = true;
}

bool InLongAgentDetail::LifeDaysHasBeenSet() const
{
    return m_lifeDaysHasBeenSet;
}

