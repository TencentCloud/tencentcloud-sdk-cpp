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

#include <tencentcloud/es/v20180416/model/IndexMetaField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

IndexMetaField::IndexMetaField() :
    m_indexTypeHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_indexMetaJsonHasBeenSet(false),
    m_indexStatusHasBeenSet(false),
    m_indexStorageHasBeenSet(false),
    m_indexCreateTimeHasBeenSet(false),
    m_backingIndicesHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_indexPolicyFieldHasBeenSet(false),
    m_indexOptionsFieldHasBeenSet(false),
    m_indexSettingsFieldHasBeenSet(false),
    m_indexAliasesFieldHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_indexDocsHasBeenSet(false),
    m_fieldCountHasBeenSet(false),
    m_fieldLimitHasBeenSet(false),
    m_fieldUsageRatioHasBeenSet(false),
    m_occupiedShardsHasBeenSet(false),
    m_indexOpenStatusHasBeenSet(false),
    m_fieldLimitHardCapHasBeenSet(false),
    m_fieldLimitMinHasBeenSet(false),
    m_fieldAutoAdjustRemainingHasBeenSet(false)
{
}

CoreInternalOutcome IndexMetaField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexType") && !value["IndexType"].IsNull())
    {
        if (!value["IndexType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexType = string(value["IndexType"].GetString());
        m_indexTypeHasBeenSet = true;
    }

    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("IndexMetaJson") && !value["IndexMetaJson"].IsNull())
    {
        if (!value["IndexMetaJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexMetaJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexMetaJson = string(value["IndexMetaJson"].GetString());
        m_indexMetaJsonHasBeenSet = true;
    }

    if (value.HasMember("IndexStatus") && !value["IndexStatus"].IsNull())
    {
        if (!value["IndexStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStatus = string(value["IndexStatus"].GetString());
        m_indexStatusHasBeenSet = true;
    }

    if (value.HasMember("IndexStorage") && !value["IndexStorage"].IsNull())
    {
        if (!value["IndexStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexStorage = value["IndexStorage"].GetInt64();
        m_indexStorageHasBeenSet = true;
    }

    if (value.HasMember("IndexCreateTime") && !value["IndexCreateTime"].IsNull())
    {
        if (!value["IndexCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexCreateTime = string(value["IndexCreateTime"].GetString());
        m_indexCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("BackingIndices") && !value["BackingIndices"].IsNull())
    {
        if (!value["BackingIndices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.BackingIndices` is not array type"));

        const rapidjson::Value &tmpValue = value["BackingIndices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackingIndexMetaField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backingIndices.push_back(item);
        }
        m_backingIndicesHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("IndexPolicyField") && !value["IndexPolicyField"].IsNull())
    {
        if (!value["IndexPolicyField"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexPolicyField` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indexPolicyField.Deserialize(value["IndexPolicyField"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indexPolicyFieldHasBeenSet = true;
    }

    if (value.HasMember("IndexOptionsField") && !value["IndexOptionsField"].IsNull())
    {
        if (!value["IndexOptionsField"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexOptionsField` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indexOptionsField.Deserialize(value["IndexOptionsField"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indexOptionsFieldHasBeenSet = true;
    }

    if (value.HasMember("IndexSettingsField") && !value["IndexSettingsField"].IsNull())
    {
        if (!value["IndexSettingsField"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexSettingsField` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indexSettingsField.Deserialize(value["IndexSettingsField"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indexSettingsFieldHasBeenSet = true;
    }

    if (value.HasMember("IndexAliasesField") && !value["IndexAliasesField"].IsNull())
    {
        if (!value["IndexAliasesField"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexAliasesField` is not array type"));

        const rapidjson::Value &tmpValue = value["IndexAliasesField"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_indexAliasesField.push_back((*itr).GetString());
        }
        m_indexAliasesFieldHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("IndexDocs") && !value["IndexDocs"].IsNull())
    {
        if (!value["IndexDocs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexDocs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_indexDocs = value["IndexDocs"].GetUint64();
        m_indexDocsHasBeenSet = true;
    }

    if (value.HasMember("FieldCount") && !value["FieldCount"].IsNull())
    {
        if (!value["FieldCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.FieldCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldCount = value["FieldCount"].GetInt64();
        m_fieldCountHasBeenSet = true;
    }

    if (value.HasMember("FieldLimit") && !value["FieldLimit"].IsNull())
    {
        if (!value["FieldLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.FieldLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldLimit = value["FieldLimit"].GetInt64();
        m_fieldLimitHasBeenSet = true;
    }

    if (value.HasMember("FieldUsageRatio") && !value["FieldUsageRatio"].IsNull())
    {
        if (!value["FieldUsageRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.FieldUsageRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldUsageRatio = string(value["FieldUsageRatio"].GetString());
        m_fieldUsageRatioHasBeenSet = true;
    }

    if (value.HasMember("OccupiedShards") && !value["OccupiedShards"].IsNull())
    {
        if (!value["OccupiedShards"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.OccupiedShards` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_occupiedShards = value["OccupiedShards"].GetInt64();
        m_occupiedShardsHasBeenSet = true;
    }

    if (value.HasMember("IndexOpenStatus") && !value["IndexOpenStatus"].IsNull())
    {
        if (!value["IndexOpenStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.IndexOpenStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexOpenStatus = string(value["IndexOpenStatus"].GetString());
        m_indexOpenStatusHasBeenSet = true;
    }

    if (value.HasMember("FieldLimitHardCap") && !value["FieldLimitHardCap"].IsNull())
    {
        if (!value["FieldLimitHardCap"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.FieldLimitHardCap` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldLimitHardCap = value["FieldLimitHardCap"].GetInt64();
        m_fieldLimitHardCapHasBeenSet = true;
    }

    if (value.HasMember("FieldLimitMin") && !value["FieldLimitMin"].IsNull())
    {
        if (!value["FieldLimitMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.FieldLimitMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldLimitMin = value["FieldLimitMin"].GetInt64();
        m_fieldLimitMinHasBeenSet = true;
    }

    if (value.HasMember("FieldAutoAdjustRemaining") && !value["FieldAutoAdjustRemaining"].IsNull())
    {
        if (!value["FieldAutoAdjustRemaining"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexMetaField.FieldAutoAdjustRemaining` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldAutoAdjustRemaining = value["FieldAutoAdjustRemaining"].GetInt64();
        m_fieldAutoAdjustRemainingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndexMetaField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexType.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_indexMetaJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexMetaJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexMetaJson.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexStorage, allocator);
    }

    if (m_indexCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backingIndicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackingIndices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backingIndices.begin(); itr != m_backingIndices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_indexPolicyFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexPolicyField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indexPolicyField.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexOptionsFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexOptionsField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indexOptionsField.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexSettingsFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexSettingsField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indexSettingsField.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indexAliasesFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexAliasesField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexAliasesField.begin(); itr != m_indexAliasesField.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_indexDocsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexDocs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexDocs, allocator);
    }

    if (m_fieldCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldCount, allocator);
    }

    if (m_fieldLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldLimit, allocator);
    }

    if (m_fieldUsageRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldUsageRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldUsageRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_occupiedShardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccupiedShards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_occupiedShards, allocator);
    }

    if (m_indexOpenStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexOpenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexOpenStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldLimitHardCapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldLimitHardCap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldLimitHardCap, allocator);
    }

    if (m_fieldLimitMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldLimitMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldLimitMin, allocator);
    }

    if (m_fieldAutoAdjustRemainingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldAutoAdjustRemaining";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldAutoAdjustRemaining, allocator);
    }

}


string IndexMetaField::GetIndexType() const
{
    return m_indexType;
}

void IndexMetaField::SetIndexType(const string& _indexType)
{
    m_indexType = _indexType;
    m_indexTypeHasBeenSet = true;
}

bool IndexMetaField::IndexTypeHasBeenSet() const
{
    return m_indexTypeHasBeenSet;
}

string IndexMetaField::GetIndexName() const
{
    return m_indexName;
}

void IndexMetaField::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool IndexMetaField::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string IndexMetaField::GetIndexMetaJson() const
{
    return m_indexMetaJson;
}

void IndexMetaField::SetIndexMetaJson(const string& _indexMetaJson)
{
    m_indexMetaJson = _indexMetaJson;
    m_indexMetaJsonHasBeenSet = true;
}

bool IndexMetaField::IndexMetaJsonHasBeenSet() const
{
    return m_indexMetaJsonHasBeenSet;
}

string IndexMetaField::GetIndexStatus() const
{
    return m_indexStatus;
}

void IndexMetaField::SetIndexStatus(const string& _indexStatus)
{
    m_indexStatus = _indexStatus;
    m_indexStatusHasBeenSet = true;
}

bool IndexMetaField::IndexStatusHasBeenSet() const
{
    return m_indexStatusHasBeenSet;
}

int64_t IndexMetaField::GetIndexStorage() const
{
    return m_indexStorage;
}

void IndexMetaField::SetIndexStorage(const int64_t& _indexStorage)
{
    m_indexStorage = _indexStorage;
    m_indexStorageHasBeenSet = true;
}

bool IndexMetaField::IndexStorageHasBeenSet() const
{
    return m_indexStorageHasBeenSet;
}

string IndexMetaField::GetIndexCreateTime() const
{
    return m_indexCreateTime;
}

void IndexMetaField::SetIndexCreateTime(const string& _indexCreateTime)
{
    m_indexCreateTime = _indexCreateTime;
    m_indexCreateTimeHasBeenSet = true;
}

bool IndexMetaField::IndexCreateTimeHasBeenSet() const
{
    return m_indexCreateTimeHasBeenSet;
}

vector<BackingIndexMetaField> IndexMetaField::GetBackingIndices() const
{
    return m_backingIndices;
}

void IndexMetaField::SetBackingIndices(const vector<BackingIndexMetaField>& _backingIndices)
{
    m_backingIndices = _backingIndices;
    m_backingIndicesHasBeenSet = true;
}

bool IndexMetaField::BackingIndicesHasBeenSet() const
{
    return m_backingIndicesHasBeenSet;
}

string IndexMetaField::GetClusterId() const
{
    return m_clusterId;
}

void IndexMetaField::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool IndexMetaField::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string IndexMetaField::GetClusterName() const
{
    return m_clusterName;
}

void IndexMetaField::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool IndexMetaField::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string IndexMetaField::GetClusterVersion() const
{
    return m_clusterVersion;
}

void IndexMetaField::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool IndexMetaField::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

IndexPolicyField IndexMetaField::GetIndexPolicyField() const
{
    return m_indexPolicyField;
}

void IndexMetaField::SetIndexPolicyField(const IndexPolicyField& _indexPolicyField)
{
    m_indexPolicyField = _indexPolicyField;
    m_indexPolicyFieldHasBeenSet = true;
}

bool IndexMetaField::IndexPolicyFieldHasBeenSet() const
{
    return m_indexPolicyFieldHasBeenSet;
}

IndexOptionsField IndexMetaField::GetIndexOptionsField() const
{
    return m_indexOptionsField;
}

void IndexMetaField::SetIndexOptionsField(const IndexOptionsField& _indexOptionsField)
{
    m_indexOptionsField = _indexOptionsField;
    m_indexOptionsFieldHasBeenSet = true;
}

bool IndexMetaField::IndexOptionsFieldHasBeenSet() const
{
    return m_indexOptionsFieldHasBeenSet;
}

IndexSettingsField IndexMetaField::GetIndexSettingsField() const
{
    return m_indexSettingsField;
}

void IndexMetaField::SetIndexSettingsField(const IndexSettingsField& _indexSettingsField)
{
    m_indexSettingsField = _indexSettingsField;
    m_indexSettingsFieldHasBeenSet = true;
}

bool IndexMetaField::IndexSettingsFieldHasBeenSet() const
{
    return m_indexSettingsFieldHasBeenSet;
}

vector<string> IndexMetaField::GetIndexAliasesField() const
{
    return m_indexAliasesField;
}

void IndexMetaField::SetIndexAliasesField(const vector<string>& _indexAliasesField)
{
    m_indexAliasesField = _indexAliasesField;
    m_indexAliasesFieldHasBeenSet = true;
}

bool IndexMetaField::IndexAliasesFieldHasBeenSet() const
{
    return m_indexAliasesFieldHasBeenSet;
}

uint64_t IndexMetaField::GetAppId() const
{
    return m_appId;
}

void IndexMetaField::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool IndexMetaField::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t IndexMetaField::GetIndexDocs() const
{
    return m_indexDocs;
}

void IndexMetaField::SetIndexDocs(const uint64_t& _indexDocs)
{
    m_indexDocs = _indexDocs;
    m_indexDocsHasBeenSet = true;
}

bool IndexMetaField::IndexDocsHasBeenSet() const
{
    return m_indexDocsHasBeenSet;
}

int64_t IndexMetaField::GetFieldCount() const
{
    return m_fieldCount;
}

void IndexMetaField::SetFieldCount(const int64_t& _fieldCount)
{
    m_fieldCount = _fieldCount;
    m_fieldCountHasBeenSet = true;
}

bool IndexMetaField::FieldCountHasBeenSet() const
{
    return m_fieldCountHasBeenSet;
}

int64_t IndexMetaField::GetFieldLimit() const
{
    return m_fieldLimit;
}

void IndexMetaField::SetFieldLimit(const int64_t& _fieldLimit)
{
    m_fieldLimit = _fieldLimit;
    m_fieldLimitHasBeenSet = true;
}

bool IndexMetaField::FieldLimitHasBeenSet() const
{
    return m_fieldLimitHasBeenSet;
}

string IndexMetaField::GetFieldUsageRatio() const
{
    return m_fieldUsageRatio;
}

void IndexMetaField::SetFieldUsageRatio(const string& _fieldUsageRatio)
{
    m_fieldUsageRatio = _fieldUsageRatio;
    m_fieldUsageRatioHasBeenSet = true;
}

bool IndexMetaField::FieldUsageRatioHasBeenSet() const
{
    return m_fieldUsageRatioHasBeenSet;
}

int64_t IndexMetaField::GetOccupiedShards() const
{
    return m_occupiedShards;
}

void IndexMetaField::SetOccupiedShards(const int64_t& _occupiedShards)
{
    m_occupiedShards = _occupiedShards;
    m_occupiedShardsHasBeenSet = true;
}

bool IndexMetaField::OccupiedShardsHasBeenSet() const
{
    return m_occupiedShardsHasBeenSet;
}

string IndexMetaField::GetIndexOpenStatus() const
{
    return m_indexOpenStatus;
}

void IndexMetaField::SetIndexOpenStatus(const string& _indexOpenStatus)
{
    m_indexOpenStatus = _indexOpenStatus;
    m_indexOpenStatusHasBeenSet = true;
}

bool IndexMetaField::IndexOpenStatusHasBeenSet() const
{
    return m_indexOpenStatusHasBeenSet;
}

int64_t IndexMetaField::GetFieldLimitHardCap() const
{
    return m_fieldLimitHardCap;
}

void IndexMetaField::SetFieldLimitHardCap(const int64_t& _fieldLimitHardCap)
{
    m_fieldLimitHardCap = _fieldLimitHardCap;
    m_fieldLimitHardCapHasBeenSet = true;
}

bool IndexMetaField::FieldLimitHardCapHasBeenSet() const
{
    return m_fieldLimitHardCapHasBeenSet;
}

int64_t IndexMetaField::GetFieldLimitMin() const
{
    return m_fieldLimitMin;
}

void IndexMetaField::SetFieldLimitMin(const int64_t& _fieldLimitMin)
{
    m_fieldLimitMin = _fieldLimitMin;
    m_fieldLimitMinHasBeenSet = true;
}

bool IndexMetaField::FieldLimitMinHasBeenSet() const
{
    return m_fieldLimitMinHasBeenSet;
}

int64_t IndexMetaField::GetFieldAutoAdjustRemaining() const
{
    return m_fieldAutoAdjustRemaining;
}

void IndexMetaField::SetFieldAutoAdjustRemaining(const int64_t& _fieldAutoAdjustRemaining)
{
    m_fieldAutoAdjustRemaining = _fieldAutoAdjustRemaining;
    m_fieldAutoAdjustRemainingHasBeenSet = true;
}

bool IndexMetaField::FieldAutoAdjustRemainingHasBeenSet() const
{
    return m_fieldAutoAdjustRemainingHasBeenSet;
}

