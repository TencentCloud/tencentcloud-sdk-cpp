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

#include <tencentcloud/wedata/v20210820/model/TableQualityDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableQualityDetail::TableQualityDetail() :
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_ownerUserIdHasBeenSet(false),
    m_ownerUserNameHasBeenSet(false),
    m_databaseScoreHasBeenSet(false),
    m_tableScoreHasBeenSet(false),
    m_lastPeriodRatioHasBeenSet(false),
    m_dsEnvTypeHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_ruleGroupTableIdHasBeenSet(false)
{
}

CoreInternalOutcome TableQualityDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserId") && !value["OwnerUserId"].IsNull())
    {
        if (!value["OwnerUserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.OwnerUserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserId = value["OwnerUserId"].GetInt64();
        m_ownerUserIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserName") && !value["OwnerUserName"].IsNull())
    {
        if (!value["OwnerUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.OwnerUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserName = string(value["OwnerUserName"].GetString());
        m_ownerUserNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseScore") && !value["DatabaseScore"].IsNull())
    {
        if (!value["DatabaseScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.DatabaseScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_databaseScore = value["DatabaseScore"].GetDouble();
        m_databaseScoreHasBeenSet = true;
    }

    if (value.HasMember("TableScore") && !value["TableScore"].IsNull())
    {
        if (!value["TableScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.TableScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tableScore = value["TableScore"].GetDouble();
        m_tableScoreHasBeenSet = true;
    }

    if (value.HasMember("LastPeriodRatio") && !value["LastPeriodRatio"].IsNull())
    {
        if (!value["LastPeriodRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.LastPeriodRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastPeriodRatio = value["LastPeriodRatio"].GetDouble();
        m_lastPeriodRatioHasBeenSet = true;
    }

    if (value.HasMember("DsEnvType") && !value["DsEnvType"].IsNull())
    {
        if (!value["DsEnvType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.DsEnvType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dsEnvType = value["DsEnvType"].GetInt64();
        m_dsEnvTypeHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupTableId") && !value["RuleGroupTableId"].IsNull())
    {
        if (!value["RuleGroupTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableQualityDetail.RuleGroupTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupTableId = string(value["RuleGroupTableId"].GetString());
        m_ruleGroupTableIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableQualityDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_ownerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUserId, allocator);
    }

    if (m_ownerUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_databaseScore, allocator);
    }

    if (m_tableScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableScore, allocator);
    }

    if (m_lastPeriodRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastPeriodRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastPeriodRatio, allocator);
    }

    if (m_dsEnvTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DsEnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dsEnvType, allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleGroupTableId.c_str(), allocator).Move(), allocator);
    }

}


string TableQualityDetail::GetDatabaseId() const
{
    return m_databaseId;
}

void TableQualityDetail::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool TableQualityDetail::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string TableQualityDetail::GetDatabaseName() const
{
    return m_databaseName;
}

void TableQualityDetail::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableQualityDetail::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableQualityDetail::GetTableId() const
{
    return m_tableId;
}

void TableQualityDetail::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TableQualityDetail::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string TableQualityDetail::GetTableName() const
{
    return m_tableName;
}

void TableQualityDetail::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableQualityDetail::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t TableQualityDetail::GetOwnerUserId() const
{
    return m_ownerUserId;
}

void TableQualityDetail::SetOwnerUserId(const int64_t& _ownerUserId)
{
    m_ownerUserId = _ownerUserId;
    m_ownerUserIdHasBeenSet = true;
}

bool TableQualityDetail::OwnerUserIdHasBeenSet() const
{
    return m_ownerUserIdHasBeenSet;
}

string TableQualityDetail::GetOwnerUserName() const
{
    return m_ownerUserName;
}

void TableQualityDetail::SetOwnerUserName(const string& _ownerUserName)
{
    m_ownerUserName = _ownerUserName;
    m_ownerUserNameHasBeenSet = true;
}

bool TableQualityDetail::OwnerUserNameHasBeenSet() const
{
    return m_ownerUserNameHasBeenSet;
}

double TableQualityDetail::GetDatabaseScore() const
{
    return m_databaseScore;
}

void TableQualityDetail::SetDatabaseScore(const double& _databaseScore)
{
    m_databaseScore = _databaseScore;
    m_databaseScoreHasBeenSet = true;
}

bool TableQualityDetail::DatabaseScoreHasBeenSet() const
{
    return m_databaseScoreHasBeenSet;
}

double TableQualityDetail::GetTableScore() const
{
    return m_tableScore;
}

void TableQualityDetail::SetTableScore(const double& _tableScore)
{
    m_tableScore = _tableScore;
    m_tableScoreHasBeenSet = true;
}

bool TableQualityDetail::TableScoreHasBeenSet() const
{
    return m_tableScoreHasBeenSet;
}

double TableQualityDetail::GetLastPeriodRatio() const
{
    return m_lastPeriodRatio;
}

void TableQualityDetail::SetLastPeriodRatio(const double& _lastPeriodRatio)
{
    m_lastPeriodRatio = _lastPeriodRatio;
    m_lastPeriodRatioHasBeenSet = true;
}

bool TableQualityDetail::LastPeriodRatioHasBeenSet() const
{
    return m_lastPeriodRatioHasBeenSet;
}

int64_t TableQualityDetail::GetDsEnvType() const
{
    return m_dsEnvType;
}

void TableQualityDetail::SetDsEnvType(const int64_t& _dsEnvType)
{
    m_dsEnvType = _dsEnvType;
    m_dsEnvTypeHasBeenSet = true;
}

bool TableQualityDetail::DsEnvTypeHasBeenSet() const
{
    return m_dsEnvTypeHasBeenSet;
}

string TableQualityDetail::GetSchemaName() const
{
    return m_schemaName;
}

void TableQualityDetail::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool TableQualityDetail::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string TableQualityDetail::GetRuleGroupTableId() const
{
    return m_ruleGroupTableId;
}

void TableQualityDetail::SetRuleGroupTableId(const string& _ruleGroupTableId)
{
    m_ruleGroupTableId = _ruleGroupTableId;
    m_ruleGroupTableIdHasBeenSet = true;
}

bool TableQualityDetail::RuleGroupTableIdHasBeenSet() const
{
    return m_ruleGroupTableIdHasBeenSet;
}

