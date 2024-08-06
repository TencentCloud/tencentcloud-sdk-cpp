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

#include <tencentcloud/wedata/v20210820/model/RuleExecResultDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleExecResultDetail::RuleExecResultDetail() :
    m_datasourceIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_ruleExecResultHasBeenSet(false),
    m_tableOwnerUserIdHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false),
    m_clusterDeployTypeHasBeenSet(false)
{
}

CoreInternalOutcome RuleExecResultDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.DatasourceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = value["DatasourceId"].GetUint64();
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("RuleExecResult") && !value["RuleExecResult"].IsNull())
    {
        if (!value["RuleExecResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.RuleExecResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ruleExecResult.Deserialize(value["RuleExecResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ruleExecResultHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerUserId") && !value["TableOwnerUserId"].IsNull())
    {
        if (!value["TableOwnerUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.TableOwnerUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerUserId = value["TableOwnerUserId"].GetUint64();
        m_tableOwnerUserIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceType") && !value["DatasourceType"].IsNull())
    {
        if (!value["DatasourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.DatasourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceType = value["DatasourceType"].GetUint64();
        m_datasourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterDeployType") && !value["ClusterDeployType"].IsNull())
    {
        if (!value["ClusterDeployType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResultDetail.ClusterDeployType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDeployType = string(value["ClusterDeployType"].GetString());
        m_clusterDeployTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExecResultDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExecResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleExecResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tableOwnerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableOwnerUserId, allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceType, allocator);
    }

    if (m_clusterDeployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDeployType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDeployType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleExecResultDetail::GetDatasourceId() const
{
    return m_datasourceId;
}

void RuleExecResultDetail::SetDatasourceId(const uint64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool RuleExecResultDetail::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string RuleExecResultDetail::GetDatasourceName() const
{
    return m_datasourceName;
}

void RuleExecResultDetail::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool RuleExecResultDetail::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string RuleExecResultDetail::GetDatabaseId() const
{
    return m_databaseId;
}

void RuleExecResultDetail::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool RuleExecResultDetail::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string RuleExecResultDetail::GetDatabaseName() const
{
    return m_databaseName;
}

void RuleExecResultDetail::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool RuleExecResultDetail::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string RuleExecResultDetail::GetInstanceId() const
{
    return m_instanceId;
}

void RuleExecResultDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RuleExecResultDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RuleExecResultDetail::GetTableId() const
{
    return m_tableId;
}

void RuleExecResultDetail::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool RuleExecResultDetail::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string RuleExecResultDetail::GetTableName() const
{
    return m_tableName;
}

void RuleExecResultDetail::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool RuleExecResultDetail::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

RuleExecResult RuleExecResultDetail::GetRuleExecResult() const
{
    return m_ruleExecResult;
}

void RuleExecResultDetail::SetRuleExecResult(const RuleExecResult& _ruleExecResult)
{
    m_ruleExecResult = _ruleExecResult;
    m_ruleExecResultHasBeenSet = true;
}

bool RuleExecResultDetail::RuleExecResultHasBeenSet() const
{
    return m_ruleExecResultHasBeenSet;
}

uint64_t RuleExecResultDetail::GetTableOwnerUserId() const
{
    return m_tableOwnerUserId;
}

void RuleExecResultDetail::SetTableOwnerUserId(const uint64_t& _tableOwnerUserId)
{
    m_tableOwnerUserId = _tableOwnerUserId;
    m_tableOwnerUserIdHasBeenSet = true;
}

bool RuleExecResultDetail::TableOwnerUserIdHasBeenSet() const
{
    return m_tableOwnerUserIdHasBeenSet;
}

uint64_t RuleExecResultDetail::GetDatasourceType() const
{
    return m_datasourceType;
}

void RuleExecResultDetail::SetDatasourceType(const uint64_t& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool RuleExecResultDetail::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

string RuleExecResultDetail::GetClusterDeployType() const
{
    return m_clusterDeployType;
}

void RuleExecResultDetail::SetClusterDeployType(const string& _clusterDeployType)
{
    m_clusterDeployType = _clusterDeployType;
    m_clusterDeployTypeHasBeenSet = true;
}

bool RuleExecResultDetail::ClusterDeployTypeHasBeenSet() const
{
    return m_clusterDeployTypeHasBeenSet;
}

