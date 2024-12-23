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

#include <tencentcloud/dsgc/v20190723/model/DspaRDBDataAssetDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaRDBDataAssetDetail::DspaRDBDataAssetDetail() :
    m_dataSourceIdHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_levelRiskNameHasBeenSet(false),
    m_levelRiskScoreHasBeenSet(false),
    m_trustedScoreHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_fieldResultIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_safeGuardHasBeenSet(false),
    m_categoryFullPathHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_isSensitiveDataHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

CoreInternalOutcome DspaRDBDataAssetDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskName") && !value["LevelRiskName"].IsNull())
    {
        if (!value["LevelRiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.LevelRiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskName = string(value["LevelRiskName"].GetString());
        m_levelRiskNameHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskScore") && !value["LevelRiskScore"].IsNull())
    {
        if (!value["LevelRiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.LevelRiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskScore = value["LevelRiskScore"].GetInt64();
        m_levelRiskScoreHasBeenSet = true;
    }

    if (value.HasMember("TrustedScore") && !value["TrustedScore"].IsNull())
    {
        if (!value["TrustedScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.TrustedScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trustedScore = string(value["TrustedScore"].GetString());
        m_trustedScoreHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("FieldResultId") && !value["FieldResultId"].IsNull())
    {
        if (!value["FieldResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.FieldResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldResultId = string(value["FieldResultId"].GetString());
        m_fieldResultIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("SafeGuard") && !value["SafeGuard"].IsNull())
    {
        if (!value["SafeGuard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.SafeGuard` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_safeGuard.Deserialize(value["SafeGuard"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_safeGuardHasBeenSet = true;
    }

    if (value.HasMember("CategoryFullPath") && !value["CategoryFullPath"].IsNull())
    {
        if (!value["CategoryFullPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.CategoryFullPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryFullPath = string(value["CategoryFullPath"].GetString());
        m_categoryFullPathHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.CheckStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = value["CheckStatus"].GetInt64();
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("IsSensitiveData") && !value["IsSensitiveData"].IsNull())
    {
        if (!value["IsSensitiveData"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.IsSensitiveData` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSensitiveData = value["IsSensitiveData"].GetInt64();
        m_isSensitiveDataHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaRDBDataAssetDetail.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaRDBDataAssetDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRiskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelRiskName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRiskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRiskScore, allocator);
    }

    if (m_trustedScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrustedScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trustedScore.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldResultId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_safeGuardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeGuard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_safeGuard.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_categoryFullPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryFullPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryFullPath.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyType, allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkStatus, allocator);
    }

    if (m_isSensitiveDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSensitiveData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSensitiveData, allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

}


string DspaRDBDataAssetDetail::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DspaRDBDataAssetDetail::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DspaRDBDataAssetDetail::GetDbType() const
{
    return m_dbType;
}

void DspaRDBDataAssetDetail::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string DspaRDBDataAssetDetail::GetDbName() const
{
    return m_dbName;
}

void DspaRDBDataAssetDetail::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DspaRDBDataAssetDetail::GetTableName() const
{
    return m_tableName;
}

void DspaRDBDataAssetDetail::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DspaRDBDataAssetDetail::GetFieldName() const
{
    return m_fieldName;
}

void DspaRDBDataAssetDetail::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string DspaRDBDataAssetDetail::GetRuleName() const
{
    return m_ruleName;
}

void DspaRDBDataAssetDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string DspaRDBDataAssetDetail::GetCategoryName() const
{
    return m_categoryName;
}

void DspaRDBDataAssetDetail::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

string DspaRDBDataAssetDetail::GetLevelRiskName() const
{
    return m_levelRiskName;
}

void DspaRDBDataAssetDetail::SetLevelRiskName(const string& _levelRiskName)
{
    m_levelRiskName = _levelRiskName;
    m_levelRiskNameHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::LevelRiskNameHasBeenSet() const
{
    return m_levelRiskNameHasBeenSet;
}

int64_t DspaRDBDataAssetDetail::GetLevelRiskScore() const
{
    return m_levelRiskScore;
}

void DspaRDBDataAssetDetail::SetLevelRiskScore(const int64_t& _levelRiskScore)
{
    m_levelRiskScore = _levelRiskScore;
    m_levelRiskScoreHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::LevelRiskScoreHasBeenSet() const
{
    return m_levelRiskScoreHasBeenSet;
}

string DspaRDBDataAssetDetail::GetTrustedScore() const
{
    return m_trustedScore;
}

void DspaRDBDataAssetDetail::SetTrustedScore(const string& _trustedScore)
{
    m_trustedScore = _trustedScore;
    m_trustedScoreHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::TrustedScoreHasBeenSet() const
{
    return m_trustedScoreHasBeenSet;
}

string DspaRDBDataAssetDetail::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DspaRDBDataAssetDetail::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string DspaRDBDataAssetDetail::GetFieldResultId() const
{
    return m_fieldResultId;
}

void DspaRDBDataAssetDetail::SetFieldResultId(const string& _fieldResultId)
{
    m_fieldResultId = _fieldResultId;
    m_fieldResultIdHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::FieldResultIdHasBeenSet() const
{
    return m_fieldResultIdHasBeenSet;
}

int64_t DspaRDBDataAssetDetail::GetRuleId() const
{
    return m_ruleId;
}

void DspaRDBDataAssetDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t DspaRDBDataAssetDetail::GetLevelId() const
{
    return m_levelId;
}

void DspaRDBDataAssetDetail::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

int64_t DspaRDBDataAssetDetail::GetCategoryId() const
{
    return m_categoryId;
}

void DspaRDBDataAssetDetail::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string DspaRDBDataAssetDetail::GetDataSourceName() const
{
    return m_dataSourceName;
}

void DspaRDBDataAssetDetail::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

DspaSafeGuard DspaRDBDataAssetDetail::GetSafeGuard() const
{
    return m_safeGuard;
}

void DspaRDBDataAssetDetail::SetSafeGuard(const DspaSafeGuard& _safeGuard)
{
    m_safeGuard = _safeGuard;
    m_safeGuardHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::SafeGuardHasBeenSet() const
{
    return m_safeGuardHasBeenSet;
}

string DspaRDBDataAssetDetail::GetCategoryFullPath() const
{
    return m_categoryFullPath;
}

void DspaRDBDataAssetDetail::SetCategoryFullPath(const string& _categoryFullPath)
{
    m_categoryFullPath = _categoryFullPath;
    m_categoryFullPathHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::CategoryFullPathHasBeenSet() const
{
    return m_categoryFullPathHasBeenSet;
}

int64_t DspaRDBDataAssetDetail::GetIdentifyType() const
{
    return m_identifyType;
}

void DspaRDBDataAssetDetail::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

int64_t DspaRDBDataAssetDetail::GetCheckStatus() const
{
    return m_checkStatus;
}

void DspaRDBDataAssetDetail::SetCheckStatus(const int64_t& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

int64_t DspaRDBDataAssetDetail::GetIsSensitiveData() const
{
    return m_isSensitiveData;
}

void DspaRDBDataAssetDetail::SetIsSensitiveData(const int64_t& _isSensitiveData)
{
    m_isSensitiveData = _isSensitiveData;
    m_isSensitiveDataHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::IsSensitiveDataHasBeenSet() const
{
    return m_isSensitiveDataHasBeenSet;
}

string DspaRDBDataAssetDetail::GetSchemaName() const
{
    return m_schemaName;
}

void DspaRDBDataAssetDetail::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DspaRDBDataAssetDetail::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

