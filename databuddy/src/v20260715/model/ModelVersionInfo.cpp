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

#include <tencentcloud/databuddy/v20260715/model/ModelVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ModelVersionInfo::ModelVersionInfo() :
    m_versionHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_auditHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_assetGuidHasBeenSet(false)
{
}

CoreInternalOutcome ModelVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Uri") && !value["Uri"].IsNull())
    {
        if (!value["Uri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Uri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uri = string(value["Uri"].GetString());
        m_uriHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Aliases") && !value["Aliases"].IsNull())
    {
        if (!value["Aliases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Aliases` is not array type"));

        const rapidjson::Value &tmpValue = value["Aliases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aliases.push_back((*itr).GetString());
        }
        m_aliasesHasBeenSet = true;
    }

    if (value.HasMember("Audit") && !value["Audit"].IsNull())
    {
        if (!value["Audit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTagVote item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("AssetGuid") && !value["AssetGuid"].IsNull())
    {
        if (!value["AssetGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionInfo.AssetGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetGuid = string(value["AssetGuid"].GetString());
        m_assetGuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aliases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aliases.begin(); itr != m_aliases.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetGuid.c_str(), allocator).Move(), allocator);
    }

}


string ModelVersionInfo::GetVersion() const
{
    return m_version;
}

void ModelVersionInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ModelVersionInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ModelVersionInfo::GetUri() const
{
    return m_uri;
}

void ModelVersionInfo::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool ModelVersionInfo::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string ModelVersionInfo::GetComment() const
{
    return m_comment;
}

void ModelVersionInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModelVersionInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<KVPair> ModelVersionInfo::GetProperties() const
{
    return m_properties;
}

void ModelVersionInfo::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool ModelVersionInfo::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<string> ModelVersionInfo::GetAliases() const
{
    return m_aliases;
}

void ModelVersionInfo::SetAliases(const vector<string>& _aliases)
{
    m_aliases = _aliases;
    m_aliasesHasBeenSet = true;
}

bool ModelVersionInfo::AliasesHasBeenSet() const
{
    return m_aliasesHasBeenSet;
}

Audit ModelVersionInfo::GetAudit() const
{
    return m_audit;
}

void ModelVersionInfo::SetAudit(const Audit& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool ModelVersionInfo::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

string ModelVersionInfo::GetCatalogName() const
{
    return m_catalogName;
}

void ModelVersionInfo::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool ModelVersionInfo::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string ModelVersionInfo::GetSchemaName() const
{
    return m_schemaName;
}

void ModelVersionInfo::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool ModelVersionInfo::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string ModelVersionInfo::GetModelName() const
{
    return m_modelName;
}

void ModelVersionInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelVersionInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

vector<AssetTagVote> ModelVersionInfo::GetTags() const
{
    return m_tags;
}

void ModelVersionInfo::SetTags(const vector<AssetTagVote>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModelVersionInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ModelVersionInfo::GetAssetGuid() const
{
    return m_assetGuid;
}

void ModelVersionInfo::SetAssetGuid(const string& _assetGuid)
{
    m_assetGuid = _assetGuid;
    m_assetGuidHasBeenSet = true;
}

bool ModelVersionInfo::AssetGuidHasBeenSet() const
{
    return m_assetGuidHasBeenSet;
}

