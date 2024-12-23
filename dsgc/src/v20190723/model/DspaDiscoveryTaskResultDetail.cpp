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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryTaskResultDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryTaskResultDetail::DspaDiscoveryTaskResultDetail() :
    m_taskIdHasBeenSet(false),
    m_fieldResultIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_levelRiskScoreHasBeenSet(false),
    m_safeGuardHasBeenSet(false),
    m_categoryFullPathHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryTaskResultDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("FieldResultId") && !value["FieldResultId"].IsNull())
    {
        if (!value["FieldResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.FieldResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldResultId = value["FieldResultId"].GetInt64();
        m_fieldResultIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskScore") && !value["LevelRiskScore"].IsNull())
    {
        if (!value["LevelRiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.LevelRiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskScore = value["LevelRiskScore"].GetInt64();
        m_levelRiskScoreHasBeenSet = true;
    }

    if (value.HasMember("SafeGuard") && !value["SafeGuard"].IsNull())
    {
        if (!value["SafeGuard"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.SafeGuard` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.CategoryFullPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryFullPath = string(value["CategoryFullPath"].GetString());
        m_categoryFullPathHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskResultDetail.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryTaskResultDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_fieldResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldResultId, allocator);
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

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_levelRiskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRiskScore, allocator);
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

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

}


int64_t DspaDiscoveryTaskResultDetail::GetTaskId() const
{
    return m_taskId;
}

void DspaDiscoveryTaskResultDetail::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DspaDiscoveryTaskResultDetail::GetFieldResultId() const
{
    return m_fieldResultId;
}

void DspaDiscoveryTaskResultDetail::SetFieldResultId(const int64_t& _fieldResultId)
{
    m_fieldResultId = _fieldResultId;
    m_fieldResultIdHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::FieldResultIdHasBeenSet() const
{
    return m_fieldResultIdHasBeenSet;
}

string DspaDiscoveryTaskResultDetail::GetTableName() const
{
    return m_tableName;
}

void DspaDiscoveryTaskResultDetail::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DspaDiscoveryTaskResultDetail::GetFieldName() const
{
    return m_fieldName;
}

void DspaDiscoveryTaskResultDetail::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

int64_t DspaDiscoveryTaskResultDetail::GetCategoryId() const
{
    return m_categoryId;
}

void DspaDiscoveryTaskResultDetail::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string DspaDiscoveryTaskResultDetail::GetCategoryName() const
{
    return m_categoryName;
}

void DspaDiscoveryTaskResultDetail::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

int64_t DspaDiscoveryTaskResultDetail::GetLevelId() const
{
    return m_levelId;
}

void DspaDiscoveryTaskResultDetail::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

string DspaDiscoveryTaskResultDetail::GetLevelName() const
{
    return m_levelName;
}

void DspaDiscoveryTaskResultDetail::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

string DspaDiscoveryTaskResultDetail::GetRuleName() const
{
    return m_ruleName;
}

void DspaDiscoveryTaskResultDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t DspaDiscoveryTaskResultDetail::GetRuleId() const
{
    return m_ruleId;
}

void DspaDiscoveryTaskResultDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t DspaDiscoveryTaskResultDetail::GetLevelRiskScore() const
{
    return m_levelRiskScore;
}

void DspaDiscoveryTaskResultDetail::SetLevelRiskScore(const int64_t& _levelRiskScore)
{
    m_levelRiskScore = _levelRiskScore;
    m_levelRiskScoreHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::LevelRiskScoreHasBeenSet() const
{
    return m_levelRiskScoreHasBeenSet;
}

DspaSafeGuard DspaDiscoveryTaskResultDetail::GetSafeGuard() const
{
    return m_safeGuard;
}

void DspaDiscoveryTaskResultDetail::SetSafeGuard(const DspaSafeGuard& _safeGuard)
{
    m_safeGuard = _safeGuard;
    m_safeGuardHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::SafeGuardHasBeenSet() const
{
    return m_safeGuardHasBeenSet;
}

string DspaDiscoveryTaskResultDetail::GetCategoryFullPath() const
{
    return m_categoryFullPath;
}

void DspaDiscoveryTaskResultDetail::SetCategoryFullPath(const string& _categoryFullPath)
{
    m_categoryFullPath = _categoryFullPath;
    m_categoryFullPathHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::CategoryFullPathHasBeenSet() const
{
    return m_categoryFullPathHasBeenSet;
}

string DspaDiscoveryTaskResultDetail::GetSchemaName() const
{
    return m_schemaName;
}

void DspaDiscoveryTaskResultDetail::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DspaDiscoveryTaskResultDetail::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

