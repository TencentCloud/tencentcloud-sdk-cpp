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

#include <tencentcloud/databuddy/v20260715/model/Volume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Volume::Volume() :
    m_nameHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_storageLocationHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_auditHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_metaOwnerHasBeenSet(false),
    m_assetGuidHasBeenSet(false),
    m_permissionDetailHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Volume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("StorageLocation") && !value["StorageLocation"].IsNull())
    {
        if (!value["StorageLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.StorageLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageLocation = string(value["StorageLocation"].GetString());
        m_storageLocationHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Volume.Properties` is not array type"));

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

    if (value.HasMember("Audit") && !value["Audit"].IsNull())
    {
        if (!value["Audit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MetaOwner") && !value["MetaOwner"].IsNull())
    {
        if (!value["MetaOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.MetaOwner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaOwner.Deserialize(value["MetaOwner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaOwnerHasBeenSet = true;
    }

    if (value.HasMember("AssetGuid") && !value["AssetGuid"].IsNull())
    {
        if (!value["AssetGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.AssetGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetGuid = string(value["AssetGuid"].GetString());
        m_assetGuidHasBeenSet = true;
    }

    if (value.HasMember("PermissionDetail") && !value["PermissionDetail"].IsNull())
    {
        if (!value["PermissionDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.PermissionDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_permissionDetail.Deserialize(value["PermissionDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_permissionDetailHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Volume.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void Volume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_storageLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageLocation.c_str(), allocator).Move(), allocator);
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

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_metaOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaOwner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetGuid.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_permissionDetail.ToJsonObject(value[key.c_str()], allocator);
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

}


string Volume::GetName() const
{
    return m_name;
}

void Volume::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Volume::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Volume::GetCatalogName() const
{
    return m_catalogName;
}

void Volume::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool Volume::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string Volume::GetSchemaName() const
{
    return m_schemaName;
}

void Volume::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool Volume::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string Volume::GetComment() const
{
    return m_comment;
}

void Volume::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Volume::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string Volume::GetStorageLocation() const
{
    return m_storageLocation;
}

void Volume::SetStorageLocation(const string& _storageLocation)
{
    m_storageLocation = _storageLocation;
    m_storageLocationHasBeenSet = true;
}

bool Volume::StorageLocationHasBeenSet() const
{
    return m_storageLocationHasBeenSet;
}

vector<KVPair> Volume::GetProperties() const
{
    return m_properties;
}

void Volume::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool Volume::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

Audit Volume::GetAudit() const
{
    return m_audit;
}

void Volume::SetAudit(const Audit& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool Volume::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

string Volume::GetType() const
{
    return m_type;
}

void Volume::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Volume::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

MetaOwner Volume::GetMetaOwner() const
{
    return m_metaOwner;
}

void Volume::SetMetaOwner(const MetaOwner& _metaOwner)
{
    m_metaOwner = _metaOwner;
    m_metaOwnerHasBeenSet = true;
}

bool Volume::MetaOwnerHasBeenSet() const
{
    return m_metaOwnerHasBeenSet;
}

string Volume::GetAssetGuid() const
{
    return m_assetGuid;
}

void Volume::SetAssetGuid(const string& _assetGuid)
{
    m_assetGuid = _assetGuid;
    m_assetGuidHasBeenSet = true;
}

bool Volume::AssetGuidHasBeenSet() const
{
    return m_assetGuidHasBeenSet;
}

PermissionDetail Volume::GetPermissionDetail() const
{
    return m_permissionDetail;
}

void Volume::SetPermissionDetail(const PermissionDetail& _permissionDetail)
{
    m_permissionDetail = _permissionDetail;
    m_permissionDetailHasBeenSet = true;
}

bool Volume::PermissionDetailHasBeenSet() const
{
    return m_permissionDetailHasBeenSet;
}

vector<CommonTagInfo> Volume::GetTags() const
{
    return m_tags;
}

void Volume::SetTags(const vector<CommonTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Volume::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

