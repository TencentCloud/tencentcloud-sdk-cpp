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

#include <tencentcloud/wedata/v20210820/model/RuleGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleGroup::RuleGroup() :
    m_ruleGroupIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableOwnerNameHasBeenSet(false),
    m_execStrategyHasBeenSet(false),
    m_subscriptionHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_tableOwnerUserIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_strategyConfigHasBeenSet(false),
    m_subscribeConfigHasBeenSet(false),
    m_dsEnvTypeHasBeenSet(false),
    m_clusterDeployTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_execDetailHasBeenSet(false),
    m_pipelineTaskCountHasBeenSet(false),
    m_enableRuleCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createUserNameHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceType") && !value["DatasourceType"].IsNull())
    {
        if (!value["DatasourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.DatasourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceType = value["DatasourceType"].GetUint64();
        m_datasourceTypeHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.MonitorType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetUint64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerName") && !value["TableOwnerName"].IsNull())
    {
        if (!value["TableOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.TableOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerName = string(value["TableOwnerName"].GetString());
        m_tableOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("ExecStrategy") && !value["ExecStrategy"].IsNull())
    {
        if (!value["ExecStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.ExecStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_execStrategy.Deserialize(value["ExecStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_execStrategyHasBeenSet = true;
    }

    if (value.HasMember("Subscription") && !value["Subscription"].IsNull())
    {
        if (!value["Subscription"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.Subscription` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subscription.Deserialize(value["Subscription"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subscriptionHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.Permission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permission = value["Permission"].GetBool();
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.RuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetUint64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.MonitorStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = value["MonitorStatus"].GetBool();
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerUserId") && !value["TableOwnerUserId"].IsNull())
    {
        if (!value["TableOwnerUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.TableOwnerUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerUserId = value["TableOwnerUserId"].GetUint64();
        m_tableOwnerUserIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StrategyConfig") && !value["StrategyConfig"].IsNull())
    {
        if (!value["StrategyConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.StrategyConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_strategyConfig = value["StrategyConfig"].GetBool();
        m_strategyConfigHasBeenSet = true;
    }

    if (value.HasMember("SubscribeConfig") && !value["SubscribeConfig"].IsNull())
    {
        if (!value["SubscribeConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.SubscribeConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeConfig = value["SubscribeConfig"].GetBool();
        m_subscribeConfigHasBeenSet = true;
    }

    if (value.HasMember("DsEnvType") && !value["DsEnvType"].IsNull())
    {
        if (!value["DsEnvType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.DsEnvType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dsEnvType = value["DsEnvType"].GetInt64();
        m_dsEnvTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterDeployType") && !value["ClusterDeployType"].IsNull())
    {
        if (!value["ClusterDeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.ClusterDeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDeployType = string(value["ClusterDeployType"].GetString());
        m_clusterDeployTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ExecDetail") && !value["ExecDetail"].IsNull())
    {
        if (!value["ExecDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.ExecDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execDetail = string(value["ExecDetail"].GetString());
        m_execDetailHasBeenSet = true;
    }

    if (value.HasMember("PipelineTaskCount") && !value["PipelineTaskCount"].IsNull())
    {
        if (!value["PipelineTaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.PipelineTaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pipelineTaskCount = value["PipelineTaskCount"].GetInt64();
        m_pipelineTaskCountHasBeenSet = true;
    }

    if (value.HasMember("EnableRuleCount") && !value["EnableRuleCount"].IsNull())
    {
        if (!value["EnableRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.EnableRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableRuleCount = value["EnableRuleCount"].GetInt64();
        m_enableRuleCountHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateUserName") && !value["CreateUserName"].IsNull())
    {
        if (!value["CreateUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroup.CreateUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserName = string(value["CreateUserName"].GetString());
        m_createUserNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceType, allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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

    if (m_tableOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_execStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_execStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subscriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subscription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscription.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permission, allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_tableOwnerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableOwnerUserId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyConfig, allocator);
    }

    if (m_subscribeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subscribeConfig, allocator);
    }

    if (m_dsEnvTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DsEnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dsEnvType, allocator);
    }

    if (m_clusterDeployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDeployType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_execDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pipelineTaskCount, allocator);
    }

    if (m_enableRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRuleCount, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleGroup::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void RuleGroup::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool RuleGroup::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string RuleGroup::GetDatasourceId() const
{
    return m_datasourceId;
}

void RuleGroup::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool RuleGroup::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string RuleGroup::GetDatasourceName() const
{
    return m_datasourceName;
}

void RuleGroup::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool RuleGroup::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

uint64_t RuleGroup::GetDatasourceType() const
{
    return m_datasourceType;
}

void RuleGroup::SetDatasourceType(const uint64_t& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool RuleGroup::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

uint64_t RuleGroup::GetMonitorType() const
{
    return m_monitorType;
}

void RuleGroup::SetMonitorType(const uint64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool RuleGroup::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string RuleGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void RuleGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RuleGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RuleGroup::GetTableName() const
{
    return m_tableName;
}

void RuleGroup::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool RuleGroup::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string RuleGroup::GetTableId() const
{
    return m_tableId;
}

void RuleGroup::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool RuleGroup::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string RuleGroup::GetTableOwnerName() const
{
    return m_tableOwnerName;
}

void RuleGroup::SetTableOwnerName(const string& _tableOwnerName)
{
    m_tableOwnerName = _tableOwnerName;
    m_tableOwnerNameHasBeenSet = true;
}

bool RuleGroup::TableOwnerNameHasBeenSet() const
{
    return m_tableOwnerNameHasBeenSet;
}

RuleGroupExecStrategy RuleGroup::GetExecStrategy() const
{
    return m_execStrategy;
}

void RuleGroup::SetExecStrategy(const RuleGroupExecStrategy& _execStrategy)
{
    m_execStrategy = _execStrategy;
    m_execStrategyHasBeenSet = true;
}

bool RuleGroup::ExecStrategyHasBeenSet() const
{
    return m_execStrategyHasBeenSet;
}

RuleGroupSubscribe RuleGroup::GetSubscription() const
{
    return m_subscription;
}

void RuleGroup::SetSubscription(const RuleGroupSubscribe& _subscription)
{
    m_subscription = _subscription;
    m_subscriptionHasBeenSet = true;
}

bool RuleGroup::SubscriptionHasBeenSet() const
{
    return m_subscriptionHasBeenSet;
}

string RuleGroup::GetDatabaseId() const
{
    return m_databaseId;
}

void RuleGroup::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool RuleGroup::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string RuleGroup::GetDatabaseName() const
{
    return m_databaseName;
}

void RuleGroup::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool RuleGroup::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string RuleGroup::GetSchemaName() const
{
    return m_schemaName;
}

void RuleGroup::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool RuleGroup::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

bool RuleGroup::GetPermission() const
{
    return m_permission;
}

void RuleGroup::SetPermission(const bool& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool RuleGroup::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

uint64_t RuleGroup::GetRuleCount() const
{
    return m_ruleCount;
}

void RuleGroup::SetRuleCount(const uint64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool RuleGroup::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

bool RuleGroup::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void RuleGroup::SetMonitorStatus(const bool& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool RuleGroup::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

uint64_t RuleGroup::GetTableOwnerUserId() const
{
    return m_tableOwnerUserId;
}

void RuleGroup::SetTableOwnerUserId(const uint64_t& _tableOwnerUserId)
{
    m_tableOwnerUserId = _tableOwnerUserId;
    m_tableOwnerUserIdHasBeenSet = true;
}

bool RuleGroup::TableOwnerUserIdHasBeenSet() const
{
    return m_tableOwnerUserIdHasBeenSet;
}

string RuleGroup::GetInstanceId() const
{
    return m_instanceId;
}

void RuleGroup::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RuleGroup::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RuleGroup::GetCreateTime() const
{
    return m_createTime;
}

void RuleGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RuleGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool RuleGroup::GetStrategyConfig() const
{
    return m_strategyConfig;
}

void RuleGroup::SetStrategyConfig(const bool& _strategyConfig)
{
    m_strategyConfig = _strategyConfig;
    m_strategyConfigHasBeenSet = true;
}

bool RuleGroup::StrategyConfigHasBeenSet() const
{
    return m_strategyConfigHasBeenSet;
}

bool RuleGroup::GetSubscribeConfig() const
{
    return m_subscribeConfig;
}

void RuleGroup::SetSubscribeConfig(const bool& _subscribeConfig)
{
    m_subscribeConfig = _subscribeConfig;
    m_subscribeConfigHasBeenSet = true;
}

bool RuleGroup::SubscribeConfigHasBeenSet() const
{
    return m_subscribeConfigHasBeenSet;
}

int64_t RuleGroup::GetDsEnvType() const
{
    return m_dsEnvType;
}

void RuleGroup::SetDsEnvType(const int64_t& _dsEnvType)
{
    m_dsEnvType = _dsEnvType;
    m_dsEnvTypeHasBeenSet = true;
}

bool RuleGroup::DsEnvTypeHasBeenSet() const
{
    return m_dsEnvTypeHasBeenSet;
}

string RuleGroup::GetClusterDeployType() const
{
    return m_clusterDeployType;
}

void RuleGroup::SetClusterDeployType(const string& _clusterDeployType)
{
    m_clusterDeployType = _clusterDeployType;
    m_clusterDeployTypeHasBeenSet = true;
}

bool RuleGroup::ClusterDeployTypeHasBeenSet() const
{
    return m_clusterDeployTypeHasBeenSet;
}

string RuleGroup::GetName() const
{
    return m_name;
}

void RuleGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RuleGroup::GetExecDetail() const
{
    return m_execDetail;
}

void RuleGroup::SetExecDetail(const string& _execDetail)
{
    m_execDetail = _execDetail;
    m_execDetailHasBeenSet = true;
}

bool RuleGroup::ExecDetailHasBeenSet() const
{
    return m_execDetailHasBeenSet;
}

int64_t RuleGroup::GetPipelineTaskCount() const
{
    return m_pipelineTaskCount;
}

void RuleGroup::SetPipelineTaskCount(const int64_t& _pipelineTaskCount)
{
    m_pipelineTaskCount = _pipelineTaskCount;
    m_pipelineTaskCountHasBeenSet = true;
}

bool RuleGroup::PipelineTaskCountHasBeenSet() const
{
    return m_pipelineTaskCountHasBeenSet;
}

int64_t RuleGroup::GetEnableRuleCount() const
{
    return m_enableRuleCount;
}

void RuleGroup::SetEnableRuleCount(const int64_t& _enableRuleCount)
{
    m_enableRuleCount = _enableRuleCount;
    m_enableRuleCountHasBeenSet = true;
}

bool RuleGroup::EnableRuleCountHasBeenSet() const
{
    return m_enableRuleCountHasBeenSet;
}

string RuleGroup::GetDescription() const
{
    return m_description;
}

void RuleGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RuleGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RuleGroup::GetCreateUserName() const
{
    return m_createUserName;
}

void RuleGroup::SetCreateUserName(const string& _createUserName)
{
    m_createUserName = _createUserName;
    m_createUserNameHasBeenSet = true;
}

bool RuleGroup::CreateUserNameHasBeenSet() const
{
    return m_createUserNameHasBeenSet;
}

