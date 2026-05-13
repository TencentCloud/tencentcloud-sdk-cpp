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

#include <tencentcloud/csip/v20221121/model/DspmAssetDatabaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetDatabaseInfo::DspmAssetDatabaseInfo() :
    m_assetIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_tableCountHasBeenSet(false),
    m_sensitiveTableCountHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_ruleNamesHasBeenSet(false),
    m_categoryIdsHasBeenSet(false),
    m_categoryNamesHasBeenSet(false),
    m_categoryDetailsHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetDatabaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("TableCount") && !value["TableCount"].IsNull())
    {
        if (!value["TableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.TableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableCount = value["TableCount"].GetUint64();
        m_tableCountHasBeenSet = true;
    }

    if (value.HasMember("SensitiveTableCount") && !value["SensitiveTableCount"].IsNull())
    {
        if (!value["SensitiveTableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.SensitiveTableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveTableCount = value["SensitiveTableCount"].GetUint64();
        m_sensitiveTableCountHasBeenSet = true;
    }

    if (value.HasMember("RuleIds") && !value["RuleIds"].IsNull())
    {
        if (!value["RuleIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.RuleIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.RuleNames` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.CategoryIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.CategoryNames` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryNames.push_back((*itr).GetString());
        }
        m_categoryNamesHasBeenSet = true;
    }

    if (value.HasMember("CategoryDetails") && !value["CategoryDetails"].IsNull())
    {
        if (!value["CategoryDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAssetDatabaseInfo.CategoryDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyCategoryDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDetails.push_back(item);
        }
        m_categoryDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetDatabaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableCount, allocator);
    }

    if (m_sensitiveTableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveTableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveTableCount, allocator);
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

    if (m_categoryDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDetails.begin(); itr != m_categoryDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DspmAssetDatabaseInfo::GetAssetId() const
{
    return m_assetId;
}

void DspmAssetDatabaseInfo::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmAssetDatabaseInfo::GetDbName() const
{
    return m_dbName;
}

void DspmAssetDatabaseInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

uint64_t DspmAssetDatabaseInfo::GetTableCount() const
{
    return m_tableCount;
}

void DspmAssetDatabaseInfo::SetTableCount(const uint64_t& _tableCount)
{
    m_tableCount = _tableCount;
    m_tableCountHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::TableCountHasBeenSet() const
{
    return m_tableCountHasBeenSet;
}

uint64_t DspmAssetDatabaseInfo::GetSensitiveTableCount() const
{
    return m_sensitiveTableCount;
}

void DspmAssetDatabaseInfo::SetSensitiveTableCount(const uint64_t& _sensitiveTableCount)
{
    m_sensitiveTableCount = _sensitiveTableCount;
    m_sensitiveTableCountHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::SensitiveTableCountHasBeenSet() const
{
    return m_sensitiveTableCountHasBeenSet;
}

vector<uint64_t> DspmAssetDatabaseInfo::GetRuleIds() const
{
    return m_ruleIds;
}

void DspmAssetDatabaseInfo::SetRuleIds(const vector<uint64_t>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

vector<string> DspmAssetDatabaseInfo::GetRuleNames() const
{
    return m_ruleNames;
}

void DspmAssetDatabaseInfo::SetRuleNames(const vector<string>& _ruleNames)
{
    m_ruleNames = _ruleNames;
    m_ruleNamesHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::RuleNamesHasBeenSet() const
{
    return m_ruleNamesHasBeenSet;
}

vector<uint64_t> DspmAssetDatabaseInfo::GetCategoryIds() const
{
    return m_categoryIds;
}

void DspmAssetDatabaseInfo::SetCategoryIds(const vector<uint64_t>& _categoryIds)
{
    m_categoryIds = _categoryIds;
    m_categoryIdsHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::CategoryIdsHasBeenSet() const
{
    return m_categoryIdsHasBeenSet;
}

vector<string> DspmAssetDatabaseInfo::GetCategoryNames() const
{
    return m_categoryNames;
}

void DspmAssetDatabaseInfo::SetCategoryNames(const vector<string>& _categoryNames)
{
    m_categoryNames = _categoryNames;
    m_categoryNamesHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::CategoryNamesHasBeenSet() const
{
    return m_categoryNamesHasBeenSet;
}

vector<DspmIdentifyCategoryDetail> DspmAssetDatabaseInfo::GetCategoryDetails() const
{
    return m_categoryDetails;
}

void DspmAssetDatabaseInfo::SetCategoryDetails(const vector<DspmIdentifyCategoryDetail>& _categoryDetails)
{
    m_categoryDetails = _categoryDetails;
    m_categoryDetailsHasBeenSet = true;
}

bool DspmAssetDatabaseInfo::CategoryDetailsHasBeenSet() const
{
    return m_categoryDetailsHasBeenSet;
}

