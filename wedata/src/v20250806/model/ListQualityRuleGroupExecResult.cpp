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

#include <tencentcloud/wedata/v20250806/model/ListQualityRuleGroupExecResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListQualityRuleGroupExecResult::ListQualityRuleGroupExecResult() :
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
    m_ruleGroupExistHasBeenSet(false),
    m_bizCatalogNameHasBeenSet(false),
    m_bizCatalogIdHasBeenSet(false),
    m_failMsgHasBeenSet(false)
{
}

CoreInternalOutcome ListQualityRuleGroupExecResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleGroupExecId") && !value["RuleGroupExecId"].IsNull())
    {
        if (!value["RuleGroupExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.RuleGroupExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupExecId = value["RuleGroupExecId"].GetUint64();
        m_ruleGroupExecIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.TriggerType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetUint64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.ExecTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = string(value["ExecTime"].GetString());
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AlarmRuleCount") && !value["AlarmRuleCount"].IsNull())
    {
        if (!value["AlarmRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.AlarmRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRuleCount = value["AlarmRuleCount"].GetUint64();
        m_alarmRuleCountHasBeenSet = true;
    }

    if (value.HasMember("TotalRuleCount") && !value["TotalRuleCount"].IsNull())
    {
        if (!value["TotalRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.TotalRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRuleCount = value["TotalRuleCount"].GetUint64();
        m_totalRuleCountHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerName") && !value["TableOwnerName"].IsNull())
    {
        if (!value["TableOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.TableOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerName = string(value["TableOwnerName"].GetString());
        m_tableOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.Permission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permission = value["Permission"].GetBool();
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("ExecDetail") && !value["ExecDetail"].IsNull())
    {
        if (!value["ExecDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.ExecDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execDetail = string(value["ExecDetail"].GetString());
        m_execDetailHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleExecResultVOList") && !value["RuleExecResultVOList"].IsNull())
    {
        if (!value["RuleExecResultVOList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.RuleExecResultVOList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleExecResultVOList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityRuleExecResult item;
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
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupTableId") && !value["RuleGroupTableId"].IsNull())
    {
        if (!value["RuleGroupTableId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.RuleGroupTableId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupTableId = value["RuleGroupTableId"].GetInt64();
        m_ruleGroupTableIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterDeployType") && !value["ClusterDeployType"].IsNull())
    {
        if (!value["ClusterDeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.ClusterDeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDeployType = string(value["ClusterDeployType"].GetString());
        m_clusterDeployTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DsEnvType") && !value["DsEnvType"].IsNull())
    {
        if (!value["DsEnvType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.DsEnvType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dsEnvType = value["DsEnvType"].GetInt64();
        m_dsEnvTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupName") && !value["RuleGroupName"].IsNull())
    {
        if (!value["RuleGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.RuleGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupName = string(value["RuleGroupName"].GetString());
        m_ruleGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupExist") && !value["RuleGroupExist"].IsNull())
    {
        if (!value["RuleGroupExist"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.RuleGroupExist` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupExist = value["RuleGroupExist"].GetInt64();
        m_ruleGroupExistHasBeenSet = true;
    }

    if (value.HasMember("BizCatalogName") && !value["BizCatalogName"].IsNull())
    {
        if (!value["BizCatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.BizCatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizCatalogName = string(value["BizCatalogName"].GetString());
        m_bizCatalogNameHasBeenSet = true;
    }

    if (value.HasMember("BizCatalogId") && !value["BizCatalogId"].IsNull())
    {
        if (!value["BizCatalogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.BizCatalogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizCatalogId = string(value["BizCatalogId"].GetString());
        m_bizCatalogIdHasBeenSet = true;
    }

    if (value.HasMember("FailMsg") && !value["FailMsg"].IsNull())
    {
        if (!value["FailMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQualityRuleGroupExecResult.FailMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMsg = string(value["FailMsg"].GetString());
        m_failMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListQualityRuleGroupExecResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_ruleGroupTableId, allocator);
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
        value.AddMember(iKey, m_dsEnvType, allocator);
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
        value.AddMember(iKey, m_ruleGroupExist, allocator);
    }

    if (m_bizCatalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizCatalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_bizCatalogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCatalogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizCatalogId.c_str(), allocator).Move(), allocator);
    }

    if (m_failMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMsg.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ListQualityRuleGroupExecResult::GetRuleGroupExecId() const
{
    return m_ruleGroupExecId;
}

void ListQualityRuleGroupExecResult::SetRuleGroupExecId(const uint64_t& _ruleGroupExecId)
{
    m_ruleGroupExecId = _ruleGroupExecId;
    m_ruleGroupExecIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::RuleGroupExecIdHasBeenSet() const
{
    return m_ruleGroupExecIdHasBeenSet;
}

uint64_t ListQualityRuleGroupExecResult::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void ListQualityRuleGroupExecResult::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

uint64_t ListQualityRuleGroupExecResult::GetTriggerType() const
{
    return m_triggerType;
}

void ListQualityRuleGroupExecResult::SetTriggerType(const uint64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetExecTime() const
{
    return m_execTime;
}

void ListQualityRuleGroupExecResult::SetExecTime(const string& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

uint64_t ListQualityRuleGroupExecResult::GetStatus() const
{
    return m_status;
}

void ListQualityRuleGroupExecResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ListQualityRuleGroupExecResult::GetAlarmRuleCount() const
{
    return m_alarmRuleCount;
}

void ListQualityRuleGroupExecResult::SetAlarmRuleCount(const uint64_t& _alarmRuleCount)
{
    m_alarmRuleCount = _alarmRuleCount;
    m_alarmRuleCountHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::AlarmRuleCountHasBeenSet() const
{
    return m_alarmRuleCountHasBeenSet;
}

uint64_t ListQualityRuleGroupExecResult::GetTotalRuleCount() const
{
    return m_totalRuleCount;
}

void ListQualityRuleGroupExecResult::SetTotalRuleCount(const uint64_t& _totalRuleCount)
{
    m_totalRuleCount = _totalRuleCount;
    m_totalRuleCountHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::TotalRuleCountHasBeenSet() const
{
    return m_totalRuleCountHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetTableOwnerName() const
{
    return m_tableOwnerName;
}

void ListQualityRuleGroupExecResult::SetTableOwnerName(const string& _tableOwnerName)
{
    m_tableOwnerName = _tableOwnerName;
    m_tableOwnerNameHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::TableOwnerNameHasBeenSet() const
{
    return m_tableOwnerNameHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetTableName() const
{
    return m_tableName;
}

void ListQualityRuleGroupExecResult::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetTableId() const
{
    return m_tableId;
}

void ListQualityRuleGroupExecResult::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetDatabaseId() const
{
    return m_databaseId;
}

void ListQualityRuleGroupExecResult::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetDatasourceId() const
{
    return m_datasourceId;
}

void ListQualityRuleGroupExecResult::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

bool ListQualityRuleGroupExecResult::GetPermission() const
{
    return m_permission;
}

void ListQualityRuleGroupExecResult::SetPermission(const bool& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetExecDetail() const
{
    return m_execDetail;
}

void ListQualityRuleGroupExecResult::SetExecDetail(const string& _execDetail)
{
    m_execDetail = _execDetail;
    m_execDetailHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::ExecDetailHasBeenSet() const
{
    return m_execDetailHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetEngineType() const
{
    return m_engineType;
}

void ListQualityRuleGroupExecResult::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

vector<QualityRuleExecResult> ListQualityRuleGroupExecResult::GetRuleExecResultVOList() const
{
    return m_ruleExecResultVOList;
}

void ListQualityRuleGroupExecResult::SetRuleExecResultVOList(const vector<QualityRuleExecResult>& _ruleExecResultVOList)
{
    m_ruleExecResultVOList = _ruleExecResultVOList;
    m_ruleExecResultVOListHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::RuleExecResultVOListHasBeenSet() const
{
    return m_ruleExecResultVOListHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetDatabaseName() const
{
    return m_databaseName;
}

void ListQualityRuleGroupExecResult::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

int64_t ListQualityRuleGroupExecResult::GetRuleGroupTableId() const
{
    return m_ruleGroupTableId;
}

void ListQualityRuleGroupExecResult::SetRuleGroupTableId(const int64_t& _ruleGroupTableId)
{
    m_ruleGroupTableId = _ruleGroupTableId;
    m_ruleGroupTableIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::RuleGroupTableIdHasBeenSet() const
{
    return m_ruleGroupTableIdHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetClusterDeployType() const
{
    return m_clusterDeployType;
}

void ListQualityRuleGroupExecResult::SetClusterDeployType(const string& _clusterDeployType)
{
    m_clusterDeployType = _clusterDeployType;
    m_clusterDeployTypeHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::ClusterDeployTypeHasBeenSet() const
{
    return m_clusterDeployTypeHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetInstanceId() const
{
    return m_instanceId;
}

void ListQualityRuleGroupExecResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ListQualityRuleGroupExecResult::GetDsEnvType() const
{
    return m_dsEnvType;
}

void ListQualityRuleGroupExecResult::SetDsEnvType(const int64_t& _dsEnvType)
{
    m_dsEnvType = _dsEnvType;
    m_dsEnvTypeHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::DsEnvTypeHasBeenSet() const
{
    return m_dsEnvTypeHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetProjectId() const
{
    return m_projectId;
}

void ListQualityRuleGroupExecResult::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetProjectName() const
{
    return m_projectName;
}

void ListQualityRuleGroupExecResult::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void ListQualityRuleGroupExecResult::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetStartTime() const
{
    return m_startTime;
}

void ListQualityRuleGroupExecResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetFinishTime() const
{
    return m_finishTime;
}

void ListQualityRuleGroupExecResult::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetRuleGroupName() const
{
    return m_ruleGroupName;
}

void ListQualityRuleGroupExecResult::SetRuleGroupName(const string& _ruleGroupName)
{
    m_ruleGroupName = _ruleGroupName;
    m_ruleGroupNameHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::RuleGroupNameHasBeenSet() const
{
    return m_ruleGroupNameHasBeenSet;
}

int64_t ListQualityRuleGroupExecResult::GetRuleGroupExist() const
{
    return m_ruleGroupExist;
}

void ListQualityRuleGroupExecResult::SetRuleGroupExist(const int64_t& _ruleGroupExist)
{
    m_ruleGroupExist = _ruleGroupExist;
    m_ruleGroupExistHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::RuleGroupExistHasBeenSet() const
{
    return m_ruleGroupExistHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetBizCatalogName() const
{
    return m_bizCatalogName;
}

void ListQualityRuleGroupExecResult::SetBizCatalogName(const string& _bizCatalogName)
{
    m_bizCatalogName = _bizCatalogName;
    m_bizCatalogNameHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::BizCatalogNameHasBeenSet() const
{
    return m_bizCatalogNameHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetBizCatalogId() const
{
    return m_bizCatalogId;
}

void ListQualityRuleGroupExecResult::SetBizCatalogId(const string& _bizCatalogId)
{
    m_bizCatalogId = _bizCatalogId;
    m_bizCatalogIdHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::BizCatalogIdHasBeenSet() const
{
    return m_bizCatalogIdHasBeenSet;
}

string ListQualityRuleGroupExecResult::GetFailMsg() const
{
    return m_failMsg;
}

void ListQualityRuleGroupExecResult::SetFailMsg(const string& _failMsg)
{
    m_failMsg = _failMsg;
    m_failMsgHasBeenSet = true;
}

bool ListQualityRuleGroupExecResult::FailMsgHasBeenSet() const
{
    return m_failMsgHasBeenSet;
}

