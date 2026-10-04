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

#include <tencentcloud/databuddy/v20260715/model/Schema.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Schema::Schema() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_auditHasBeenSet(false),
    m_metaOwnerHasBeenSet(false),
    m_assetGuidHasBeenSet(false),
    m_permissionDetailHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Schema::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Schema.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Schema.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Schema.Properties` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `Schema.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }

    if (value.HasMember("MetaOwner") && !value["MetaOwner"].IsNull())
    {
        if (!value["MetaOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Schema.MetaOwner` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Schema.AssetGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetGuid = string(value["AssetGuid"].GetString());
        m_assetGuidHasBeenSet = true;
    }

    if (value.HasMember("PermissionDetail") && !value["PermissionDetail"].IsNull())
    {
        if (!value["PermissionDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Schema.PermissionDetail` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Schema.Tags` is not array type"));

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

void Schema::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
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


string Schema::GetName() const
{
    return m_name;
}

void Schema::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Schema::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Schema::GetComment() const
{
    return m_comment;
}

void Schema::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Schema::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<KVPair> Schema::GetProperties() const
{
    return m_properties;
}

void Schema::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool Schema::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

Audit Schema::GetAudit() const
{
    return m_audit;
}

void Schema::SetAudit(const Audit& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool Schema::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

MetaOwner Schema::GetMetaOwner() const
{
    return m_metaOwner;
}

void Schema::SetMetaOwner(const MetaOwner& _metaOwner)
{
    m_metaOwner = _metaOwner;
    m_metaOwnerHasBeenSet = true;
}

bool Schema::MetaOwnerHasBeenSet() const
{
    return m_metaOwnerHasBeenSet;
}

string Schema::GetAssetGuid() const
{
    return m_assetGuid;
}

void Schema::SetAssetGuid(const string& _assetGuid)
{
    m_assetGuid = _assetGuid;
    m_assetGuidHasBeenSet = true;
}

bool Schema::AssetGuidHasBeenSet() const
{
    return m_assetGuidHasBeenSet;
}

PermissionDetail Schema::GetPermissionDetail() const
{
    return m_permissionDetail;
}

void Schema::SetPermissionDetail(const PermissionDetail& _permissionDetail)
{
    m_permissionDetail = _permissionDetail;
    m_permissionDetailHasBeenSet = true;
}

bool Schema::PermissionDetailHasBeenSet() const
{
    return m_permissionDetailHasBeenSet;
}

vector<CommonTagInfo> Schema::GetTags() const
{
    return m_tags;
}

void Schema::SetTags(const vector<CommonTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Schema::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

