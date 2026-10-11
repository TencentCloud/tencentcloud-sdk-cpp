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

#include <tencentcloud/databuddy/v20260715/model/Catalog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Catalog::Catalog() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_metaOwnerHasBeenSet(false),
    m_auditHasBeenSet(false),
    m_assetGuidHasBeenSet(false),
    m_currentWorkspacePermissionLevelHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_permissionDetailHasBeenSet(false),
    m_isExternalHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_catalogSourceHasBeenSet(false),
    m_connectionCatalogNameHasBeenSet(false)
{
}

CoreInternalOutcome Catalog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Catalog.Properties` is not array type"));

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

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("MetaOwner") && !value["MetaOwner"].IsNull())
    {
        if (!value["MetaOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.MetaOwner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaOwner.Deserialize(value["MetaOwner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaOwnerHasBeenSet = true;
    }

    if (value.HasMember("Audit") && !value["Audit"].IsNull())
    {
        if (!value["Audit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }

    if (value.HasMember("AssetGuid") && !value["AssetGuid"].IsNull())
    {
        if (!value["AssetGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.AssetGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetGuid = string(value["AssetGuid"].GetString());
        m_assetGuidHasBeenSet = true;
    }

    if (value.HasMember("CurrentWorkspacePermissionLevel") && !value["CurrentWorkspacePermissionLevel"].IsNull())
    {
        if (!value["CurrentWorkspacePermissionLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.CurrentWorkspacePermissionLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentWorkspacePermissionLevel = value["CurrentWorkspacePermissionLevel"].GetInt64();
        m_currentWorkspacePermissionLevelHasBeenSet = true;
    }

    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("PermissionDetail") && !value["PermissionDetail"].IsNull())
    {
        if (!value["PermissionDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.PermissionDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_permissionDetail.Deserialize(value["PermissionDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_permissionDetailHasBeenSet = true;
    }

    if (value.HasMember("IsExternal") && !value["IsExternal"].IsNull())
    {
        if (!value["IsExternal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.IsExternal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExternal = value["IsExternal"].GetBool();
        m_isExternalHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Catalog.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonTagInfo item;
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

    if (value.HasMember("CatalogSource") && !value["CatalogSource"].IsNull())
    {
        if (!value["CatalogSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.CatalogSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogSource = string(value["CatalogSource"].GetString());
        m_catalogSourceHasBeenSet = true;
    }

    if (value.HasMember("ConnectionCatalogName") && !value["ConnectionCatalogName"].IsNull())
    {
        if (!value["ConnectionCatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog.ConnectionCatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionCatalogName = string(value["ConnectionCatalogName"].GetString());
        m_connectionCatalogNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Catalog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_metaOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaOwner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetGuid.c_str(), allocator).Move(), allocator);
    }

    if (m_currentWorkspacePermissionLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentWorkspacePermissionLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentWorkspacePermissionLevel, allocator);
    }

    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_permissionDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isExternalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExternal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExternal, allocator);
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

    if (m_catalogSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogSource.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionCatalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionCatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionCatalogName.c_str(), allocator).Move(), allocator);
    }

}


string Catalog::GetId() const
{
    return m_id;
}

void Catalog::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Catalog::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Catalog::GetName() const
{
    return m_name;
}

void Catalog::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Catalog::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Catalog::GetType() const
{
    return m_type;
}

void Catalog::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Catalog::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Catalog::GetComment() const
{
    return m_comment;
}

void Catalog::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Catalog::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string Catalog::GetStatus() const
{
    return m_status;
}

void Catalog::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Catalog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<KVPair> Catalog::GetProperties() const
{
    return m_properties;
}

void Catalog::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool Catalog::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string Catalog::GetOperator() const
{
    return m_operator;
}

void Catalog::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool Catalog::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

MetaOwner Catalog::GetMetaOwner() const
{
    return m_metaOwner;
}

void Catalog::SetMetaOwner(const MetaOwner& _metaOwner)
{
    m_metaOwner = _metaOwner;
    m_metaOwnerHasBeenSet = true;
}

bool Catalog::MetaOwnerHasBeenSet() const
{
    return m_metaOwnerHasBeenSet;
}

Audit Catalog::GetAudit() const
{
    return m_audit;
}

void Catalog::SetAudit(const Audit& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool Catalog::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

string Catalog::GetAssetGuid() const
{
    return m_assetGuid;
}

void Catalog::SetAssetGuid(const string& _assetGuid)
{
    m_assetGuid = _assetGuid;
    m_assetGuidHasBeenSet = true;
}

bool Catalog::AssetGuidHasBeenSet() const
{
    return m_assetGuidHasBeenSet;
}

int64_t Catalog::GetCurrentWorkspacePermissionLevel() const
{
    return m_currentWorkspacePermissionLevel;
}

void Catalog::SetCurrentWorkspacePermissionLevel(const int64_t& _currentWorkspacePermissionLevel)
{
    m_currentWorkspacePermissionLevel = _currentWorkspacePermissionLevel;
    m_currentWorkspacePermissionLevelHasBeenSet = true;
}

bool Catalog::CurrentWorkspacePermissionLevelHasBeenSet() const
{
    return m_currentWorkspacePermissionLevelHasBeenSet;
}

string Catalog::GetIdentifier() const
{
    return m_identifier;
}

void Catalog::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool Catalog::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

PermissionDetail Catalog::GetPermissionDetail() const
{
    return m_permissionDetail;
}

void Catalog::SetPermissionDetail(const PermissionDetail& _permissionDetail)
{
    m_permissionDetail = _permissionDetail;
    m_permissionDetailHasBeenSet = true;
}

bool Catalog::PermissionDetailHasBeenSet() const
{
    return m_permissionDetailHasBeenSet;
}

bool Catalog::GetIsExternal() const
{
    return m_isExternal;
}

void Catalog::SetIsExternal(const bool& _isExternal)
{
    m_isExternal = _isExternal;
    m_isExternalHasBeenSet = true;
}

bool Catalog::IsExternalHasBeenSet() const
{
    return m_isExternalHasBeenSet;
}

vector<CommonTagInfo> Catalog::GetTags() const
{
    return m_tags;
}

void Catalog::SetTags(const vector<CommonTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Catalog::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string Catalog::GetCatalogSource() const
{
    return m_catalogSource;
}

void Catalog::SetCatalogSource(const string& _catalogSource)
{
    m_catalogSource = _catalogSource;
    m_catalogSourceHasBeenSet = true;
}

bool Catalog::CatalogSourceHasBeenSet() const
{
    return m_catalogSourceHasBeenSet;
}

string Catalog::GetConnectionCatalogName() const
{
    return m_connectionCatalogName;
}

void Catalog::SetConnectionCatalogName(const string& _connectionCatalogName)
{
    m_connectionCatalogName = _connectionCatalogName;
    m_connectionCatalogNameHasBeenSet = true;
}

bool Catalog::ConnectionCatalogNameHasBeenSet() const
{
    return m_connectionCatalogNameHasBeenSet;
}

