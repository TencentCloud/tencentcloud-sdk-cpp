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

#include <tencentcloud/csip/v20221121/model/DspmAssetFieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetFieldInfo::DspmAssetFieldInfo() :
    m_assetIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_ruleNamesHasBeenSet(false),
    m_categoryIdsHasBeenSet(false),
    m_categoryNamesHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetFieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("RuleIds") && !value["RuleIds"].IsNull())
    {
        if (!value["RuleIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.RuleIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleIds.push_back((*itr).GetUint64());
        }
        m_ruleIdsHasBeenSet = true;
    }

    if (value.HasMember("RuleNames") && !value["RuleNames"].IsNull())
    {
        if (!value["RuleNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.RuleNames` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleNames.push_back((*itr).GetString());
        }
        m_ruleNamesHasBeenSet = true;
    }

    if (value.HasMember("CategoryIds") && !value["CategoryIds"].IsNull())
    {
        if (!value["CategoryIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.CategoryIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryIds.push_back((*itr).GetUint64());
        }
        m_categoryIdsHasBeenSet = true;
    }

    if (value.HasMember("CategoryNames") && !value["CategoryNames"].IsNull())
    {
        if (!value["CategoryNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetFieldInfo.CategoryNames` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryNames.push_back((*itr).GetString());
        }
        m_categoryNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetFieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
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

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_ruleNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleNames.begin(); itr != m_ruleNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIds.begin(); itr != m_categoryIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_categoryNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryNames.begin(); itr != m_categoryNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DspmAssetFieldInfo::GetAssetId() const
{
    return m_assetId;
}

void DspmAssetFieldInfo::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmAssetFieldInfo::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmAssetFieldInfo::GetDbName() const
{
    return m_dbName;
}

void DspmAssetFieldInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DspmAssetFieldInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DspmAssetFieldInfo::GetSchemaName() const
{
    return m_schemaName;
}

void DspmAssetFieldInfo::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DspmAssetFieldInfo::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DspmAssetFieldInfo::GetTableName() const
{
    return m_tableName;
}

void DspmAssetFieldInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DspmAssetFieldInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DspmAssetFieldInfo::GetFieldName() const
{
    return m_fieldName;
}

void DspmAssetFieldInfo::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool DspmAssetFieldInfo::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

vector<uint64_t> DspmAssetFieldInfo::GetRuleIds() const
{
    return m_ruleIds;
}

void DspmAssetFieldInfo::SetRuleIds(const vector<uint64_t>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool DspmAssetFieldInfo::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

vector<string> DspmAssetFieldInfo::GetRuleNames() const
{
    return m_ruleNames;
}

void DspmAssetFieldInfo::SetRuleNames(const vector<string>& _ruleNames)
{
    m_ruleNames = _ruleNames;
    m_ruleNamesHasBeenSet = true;
}

bool DspmAssetFieldInfo::RuleNamesHasBeenSet() const
{
    return m_ruleNamesHasBeenSet;
}

vector<uint64_t> DspmAssetFieldInfo::GetCategoryIds() const
{
    return m_categoryIds;
}

void DspmAssetFieldInfo::SetCategoryIds(const vector<uint64_t>& _categoryIds)
{
    m_categoryIds = _categoryIds;
    m_categoryIdsHasBeenSet = true;
}

bool DspmAssetFieldInfo::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}

vector<string> DspmAssetFieldInfo::GetCategoryNames() const
{
    return m_categoryNames;
}

void DspmAssetFieldInfo::SetCategoryNames(const vector<string>& _categoryNames)
{
    m_categoryNames = _categoryNames;
    m_categoryNamesHasBeenSet = true;
}

bool DspmAssetFieldInfo::CategoryNamesHasBeenSet() const
{
    return m_categoryNamesHasBeenSet;
}

