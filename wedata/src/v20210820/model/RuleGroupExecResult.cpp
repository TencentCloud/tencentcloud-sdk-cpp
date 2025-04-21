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

#include <tencentcloud/wedata/v20210820/model/RuleGroupExecResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleGroupExecResult::RuleGroupExecResult() :
    m_ruleGroupExecIdHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_alarmRuleCountHasBeenSet(false),
    m_totalRuleCountHasBeenSet(false),
    m_tableOwnerNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_execDetailHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_ruleExecResultVOListHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_ruleGroupTableIdHasBeenSet(false),
    m_clusterDeployTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_dsEnvTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_ruleGroupExistHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroupExecResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleGroupExecId") && !value["RuleGroupExecId"].IsNull())
    {
        if (!value["RuleGroupExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.RuleGroupExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupExecId = value["RuleGroupExecId"].GetUint64();
        m_ruleGroupExecIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.TriggerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetUint64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.ExecTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = string(value["ExecTime"].GetString());
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AlarmRuleCount") && !value["AlarmRuleCount"].IsNull())
    {
        if (!value["AlarmRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.AlarmRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRuleCount = value["AlarmRuleCount"].GetUint64();
        m_alarmRuleCountHasBeenSet = true;
    }

    if (value.HasMember("TotalRuleCount") && !value["TotalRuleCount"].IsNull())
    {
        if (!value["TotalRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.TotalRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRuleCount = value["TotalRuleCount"].GetUint64();
        m_totalRuleCountHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerName") && !value["TableOwnerName"].IsNull())
    {
        if (!value["TableOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.TableOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerName = string(value["TableOwnerName"].GetString());
        m_tableOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.Permission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permission = value["Permission"].GetBool();
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("ExecDetail") && !value["ExecDetail"].IsNull())
    {
        if (!value["ExecDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.ExecDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execDetail = string(value["ExecDetail"].GetString());
        m_execDetailHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleExecResultVOList") && !value["RuleExecResultVOList"].IsNull())
    {
        if (!value["RuleExecResultVOList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.RuleExecResultVOList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleExecResultVOList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleExecResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleExecResultVOList.push_back(item);
        }
        m_ruleExecResultVOListHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupTableId") && !value["RuleGroupTableId"].IsNull())
    {
        if (!value["RuleGroupTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.RuleGroupTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupTableId = string(value["RuleGroupTableId"].GetString());
        m_ruleGroupTableIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterDeployType") && !value["ClusterDeployType"].IsNull())
    {
        if (!value["ClusterDeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.ClusterDeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDeployType = string(value["ClusterDeployType"].GetString());
        m_clusterDeployTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DsEnvType") && !value["DsEnvType"].IsNull())
    {
        if (!value["DsEnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.DsEnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dsEnvType = string(value["DsEnvType"].GetString());
        m_dsEnvTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupName") && !value["RuleGroupName"].IsNull())
    {
        if (!value["RuleGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.RuleGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupName = string(value["RuleGroupName"].GetString());
        m_ruleGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupExist") && !value["RuleGroupExist"].IsNull())
    {
        if (!value["RuleGroupExist"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecResult.RuleGroupExist` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupExist = string(value["RuleGroupExist"].GetString());
        m_ruleGroupExistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroupExecResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleGroupExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupExecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupExecId, allocator);
    }

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_alarmRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmRuleCount, allocator);
    }

    if (m_totalRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRuleCount, allocator);
    }

    if (m_tableOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permission, allocator);
    }

    if (m_execDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExecResultVOListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecResultVOList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleExecResultVOList.begin(); itr != m_ruleExecResultVOList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleGroupTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDeployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDeployType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dsEnvTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DsEnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dsEnvType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleGroupExist.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleGroupExecResult::GetRuleGroupExecId() const
{
    return m_ruleGroupExecId;
}

void RuleGroupExecResult::SetRuleGroupExecId(const uint64_t& _ruleGroupExecId)
{
    m_ruleGroupExecId = _ruleGroupExecId;
    m_ruleGroupExecIdHasBeenSet = true;
}

bool RuleGroupExecResult::RuleGroupExecIdHasBeenSet() const
{
    return m_ruleGroupExecIdHasBeenSet;
}

uint64_t RuleGroupExecResult::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void RuleGroupExecResult::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool RuleGroupExecResult::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

uint64_t RuleGroupExecResult::GetTriggerType() const
{
    return m_triggerType;
}

void RuleGroupExecResult::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool RuleGroupExecResult::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string RuleGroupExecResult::GetExecTime() const
{
    return m_execTime;
}

void RuleGroupExecResult::SetExecTime(const string& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool RuleGroupExecResult::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

uint64_t RuleGroupExecResult::GetStatus() const
{
    return m_status;
}

void RuleGroupExecResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RuleGroupExecResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RuleGroupExecResult::GetAlarmRuleCount() const
{
    return m_alarmRuleCount;
}

void RuleGroupExecResult::SetAlarmRuleCount(const uint64_t& _alarmRuleCount)
{
    m_alarmRuleCount = _alarmRuleCount;
    m_alarmRuleCountHasBeenSet = true;
}

bool RuleGroupExecResult::AlarmRuleCountHasBeenSet() const
{
    return m_alarmRuleCountHasBeenSet;
}

uint64_t RuleGroupExecResult::GetTotalRuleCount() const
{
    return m_totalRuleCount;
}

void RuleGroupExecResult::SetTotalRuleCount(const uint64_t& _totalRuleCount)
{
    m_totalRuleCount = _totalRuleCount;
    m_totalRuleCountHasBeenSet = true;
}

bool RuleGroupExecResult::TotalRuleCountHasBeenSet() const
{
    return m_totalRuleCountHasBeenSet;
}

string RuleGroupExecResult::GetTableOwnerName() const
{
    return m_tableOwnerName;
}

void RuleGroupExecResult::SetTableOwnerName(const string& _tableOwnerName)
{
    m_tableOwnerName = _tableOwnerName;
    m_tableOwnerNameHasBeenSet = true;
}

bool RuleGroupExecResult::TableOwnerNameHasBeenSet() const
{
    return m_tableOwnerNameHasBeenSet;
}

string RuleGroupExecResult::GetTableName() const
{
    return m_tableName;
}

void RuleGroupExecResult::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool RuleGroupExecResult::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string RuleGroupExecResult::GetTableId() const
{
    return m_tableId;
}

void RuleGroupExecResult::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool RuleGroupExecResult::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string RuleGroupExecResult::GetDatabaseId() const
{
    return m_databaseId;
}

void RuleGroupExecResult::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool RuleGroupExecResult::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string RuleGroupExecResult::GetDatasourceId() const
{
    return m_datasourceId;
}

void RuleGroupExecResult::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool RuleGroupExecResult::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

bool RuleGroupExecResult::GetPermission() const
{
    return m_permission;
}

void RuleGroupExecResult::SetPermission(const bool& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool RuleGroupExecResult::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string RuleGroupExecResult::GetExecDetail() const
{
    return m_execDetail;
}

void RuleGroupExecResult::SetExecDetail(const string& _execDetail)
{
    m_execDetail = _execDetail;
    m_execDetailHasBeenSet = true;
}

bool RuleGroupExecResult::ExecDetailHasBeenSet() const
{
    return m_execDetailHasBeenSet;
}

string RuleGroupExecResult::GetEngineType() const
{
    return m_engineType;
}

void RuleGroupExecResult::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool RuleGroupExecResult::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

vector<RuleExecResult> RuleGroupExecResult::GetRuleExecResultVOList() const
{
    return m_ruleExecResultVOList;
}

void RuleGroupExecResult::SetRuleExecResultVOList(const vector<RuleExecResult>& _ruleExecResultVOList)
{
    m_ruleExecResultVOList = _ruleExecResultVOList;
    m_ruleExecResultVOListHasBeenSet = true;
}

bool RuleGroupExecResult::RuleExecResultVOListHasBeenSet() const
{
    return m_ruleExecResultVOListHasBeenSet;
}

string RuleGroupExecResult::GetDatabaseName() const
{
    return m_databaseName;
}

void RuleGroupExecResult::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool RuleGroupExecResult::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string RuleGroupExecResult::GetRuleGroupTableId() const
{
    return m_ruleGroupTableId;
}

void RuleGroupExecResult::SetRuleGroupTableId(const string& _ruleGroupTableId)
{
    m_ruleGroupTableId = _ruleGroupTableId;
    m_ruleGroupTableIdHasBeenSet = true;
}

bool RuleGroupExecResult::RuleGroupTableIdHasBeenSet() const
{
    return m_ruleGroupTableIdHasBeenSet;
}

string RuleGroupExecResult::GetClusterDeployType() const
{
    return m_clusterDeployType;
}

void RuleGroupExecResult::SetClusterDeployType(const string& _clusterDeployType)
{
    m_clusterDeployType = _clusterDeployType;
    m_clusterDeployTypeHasBeenSet = true;
}

bool RuleGroupExecResult::ClusterDeployTypeHasBeenSet() const
{
    return m_clusterDeployTypeHasBeenSet;
}

string RuleGroupExecResult::GetInstanceId() const
{
    return m_instanceId;
}

void RuleGroupExecResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RuleGroupExecResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RuleGroupExecResult::GetDsEnvType() const
{
    return m_dsEnvType;
}

void RuleGroupExecResult::SetDsEnvType(const string& _dsEnvType)
{
    m_dsEnvType = _dsEnvType;
    m_dsEnvTypeHasBeenSet = true;
}

bool RuleGroupExecResult::DsEnvTypeHasBeenSet() const
{
    return m_dsEnvTypeHasBeenSet;
}

string RuleGroupExecResult::GetProjectId() const
{
    return m_projectId;
}

void RuleGroupExecResult::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RuleGroupExecResult::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RuleGroupExecResult::GetProjectName() const
{
    return m_projectName;
}

void RuleGroupExecResult::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool RuleGroupExecResult::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string RuleGroupExecResult::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void RuleGroupExecResult::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool RuleGroupExecResult::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string RuleGroupExecResult::GetStartTime() const
{
    return m_startTime;
}

void RuleGroupExecResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RuleGroupExecResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RuleGroupExecResult::GetFinishTime() const
{
    return m_finishTime;
}

void RuleGroupExecResult::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool RuleGroupExecResult::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string RuleGroupExecResult::GetRuleGroupName() const
{
    return m_ruleGroupName;
}

void RuleGroupExecResult::SetRuleGroupName(const string& _ruleGroupName)
{
    m_ruleGroupName = _ruleGroupName;
    m_ruleGroupNameHasBeenSet = true;
}

bool RuleGroupExecResult::RuleGroupNameHasBeenSet() const
{
    return m_ruleGroupNameHasBeenSet;
}

string RuleGroupExecResult::GetRuleGroupExist() const
{
    return m_ruleGroupExist;
}

void RuleGroupExecResult::SetRuleGroupExist(const string& _ruleGroupExist)
{
    m_ruleGroupExist = _ruleGroupExist;
    m_ruleGroupExistHasBeenSet = true;
}

bool RuleGroupExecResult::RuleGroupExistHasBeenSet() const
{
    return m_ruleGroupExistHasBeenSet;
}

