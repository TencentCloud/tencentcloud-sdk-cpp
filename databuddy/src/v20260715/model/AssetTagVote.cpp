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

#include <tencentcloud/databuddy/v20260715/model/AssetTagVote.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

AssetTagVote::AssetTagVote() :
    m_idHasBeenSet(false),
    m_propertyTypeHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_labelIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_labelValueIdHasBeenSet(false),
    m_labelValueHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_modifierHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_deletedHasBeenSet(false)
{
}

CoreInternalOutcome AssetTagVote::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PropertyType") && !value["PropertyType"].IsNull())
    {
        if (!value["PropertyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.PropertyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyType = string(value["PropertyType"].GetString());
        m_propertyTypeHasBeenSet = true;
    }

    if (value.HasMember("PropertyId") && !value["PropertyId"].IsNull())
    {
        if (!value["PropertyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.PropertyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyId = string(value["PropertyId"].GetString());
        m_propertyIdHasBeenSet = true;
    }

    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("LabelValueId") && !value["LabelValueId"].IsNull())
    {
        if (!value["LabelValueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.LabelValueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValueId = string(value["LabelValueId"].GetString());
        m_labelValueIdHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("Modifier") && !value["Modifier"].IsNull())
    {
        if (!value["Modifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.Modifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifier = string(value["Modifier"].GetString());
        m_modifierHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.OwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = string(value["OwnerAccount"].GetString());
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagVote.Deleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetBool();
        m_deletedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetTagVote::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyType.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValueId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValue.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_modifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifier.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

}


string AssetTagVote::GetId() const
{
    return m_id;
}

void AssetTagVote::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetTagVote::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetTagVote::GetPropertyType() const
{
    return m_propertyType;
}

void AssetTagVote::SetPropertyType(const string& _propertyType)
{
    m_propertyType = _propertyType;
    m_propertyTypeHasBeenSet = true;
}

bool AssetTagVote::PropertyTypeHasBeenSet() const
{
    return m_propertyTypeHasBeenSet;
}

string AssetTagVote::GetPropertyId() const
{
    return m_propertyId;
}

void AssetTagVote::SetPropertyId(const string& _propertyId)
{
    m_propertyId = _propertyId;
    m_propertyIdHasBeenSet = true;
}

bool AssetTagVote::PropertyIdHasBeenSet() const
{
    return m_propertyIdHasBeenSet;
}

string AssetTagVote::GetLabelId() const
{
    return m_labelId;
}

void AssetTagVote::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool AssetTagVote::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string AssetTagVote::GetLabelName() const
{
    return m_labelName;
}

void AssetTagVote::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool AssetTagVote::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

string AssetTagVote::GetLabelValueId() const
{
    return m_labelValueId;
}

void AssetTagVote::SetLabelValueId(const string& _labelValueId)
{
    m_labelValueId = _labelValueId;
    m_labelValueIdHasBeenSet = true;
}

bool AssetTagVote::LabelValueIdHasBeenSet() const
{
    return m_labelValueIdHasBeenSet;
}

string AssetTagVote::GetLabelValue() const
{
    return m_labelValue;
}

void AssetTagVote::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool AssetTagVote::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

string AssetTagVote::GetCreator() const
{
    return m_creator;
}

void AssetTagVote::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool AssetTagVote::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string AssetTagVote::GetModifier() const
{
    return m_modifier;
}

void AssetTagVote::SetModifier(const string& _modifier)
{
    m_modifier = _modifier;
    m_modifierHasBeenSet = true;
}

bool AssetTagVote::ModifierHasBeenSet() const
{
    return m_modifierHasBeenSet;
}

string AssetTagVote::GetCreateTime() const
{
    return m_createTime;
}

void AssetTagVote::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AssetTagVote::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AssetTagVote::GetModifiedTime() const
{
    return m_modifiedTime;
}

void AssetTagVote::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool AssetTagVote::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string AssetTagVote::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void AssetTagVote::SetOwnerAccount(const string& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool AssetTagVote::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

int64_t AssetTagVote::GetType() const
{
    return m_type;
}

void AssetTagVote::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AssetTagVote::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool AssetTagVote::GetDeleted() const
{
    return m_deleted;
}

void AssetTagVote::SetDeleted(const bool& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool AssetTagVote::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

