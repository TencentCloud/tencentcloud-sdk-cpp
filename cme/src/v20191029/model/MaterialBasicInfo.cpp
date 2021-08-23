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

#include <tencentcloud/cme/v20191029/model/MaterialBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MaterialBasicInfo::MaterialBasicInfo() :
    m_materialIdHasBeenSet(false),
    m_materialTypeHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_classPathHasBeenSet(false),
    m_presetTagSetHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_previewUrlHasBeenSet(false),
    m_tagInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome MaterialBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("MaterialType") && !value["MaterialType"].IsNull())
    {
        if (!value["MaterialType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.MaterialType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialType = string(value["MaterialType"].GetString());
        m_materialTypeHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ClassPath") && !value["ClassPath"].IsNull())
    {
        if (!value["ClassPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.ClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classPath = string(value["ClassPath"].GetString());
        m_classPathHasBeenSet = true;
    }

    if (value.HasMember("PresetTagSet") && !value["PresetTagSet"].IsNull())
    {
        if (!value["PresetTagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.PresetTagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PresetTagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PresetTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_presetTagSet.push_back(item);
        }
        m_presetTagSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagSet.push_back((*itr).GetString());
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }

    if (value.HasMember("TagInfoSet") && !value["TagInfoSet"].IsNull())
    {
        if (!value["TagInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialBasicInfo.TagInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MaterialTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInfoSet.push_back(item);
        }
        m_tagInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_materialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_classPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

    if (m_presetTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetTagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_presetTagSet.begin(); itr != m_presetTagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_previewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_tagInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfoSet.begin(); itr != m_tagInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MaterialBasicInfo::GetMaterialId() const
{
    return m_materialId;
}

void MaterialBasicInfo::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool MaterialBasicInfo::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

string MaterialBasicInfo::GetMaterialType() const
{
    return m_materialType;
}

void MaterialBasicInfo::SetMaterialType(const string& _materialType)
{
    m_materialType = _materialType;
    m_materialTypeHasBeenSet = true;
}

bool MaterialBasicInfo::MaterialTypeHasBeenSet() const
{
    return m_materialTypeHasBeenSet;
}

Entity MaterialBasicInfo::GetOwner() const
{
    return m_owner;
}

void MaterialBasicInfo::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool MaterialBasicInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string MaterialBasicInfo::GetName() const
{
    return m_name;
}

void MaterialBasicInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MaterialBasicInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MaterialBasicInfo::GetCreateTime() const
{
    return m_createTime;
}

void MaterialBasicInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MaterialBasicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MaterialBasicInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void MaterialBasicInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MaterialBasicInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string MaterialBasicInfo::GetClassPath() const
{
    return m_classPath;
}

void MaterialBasicInfo::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool MaterialBasicInfo::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

vector<PresetTagInfo> MaterialBasicInfo::GetPresetTagSet() const
{
    return m_presetTagSet;
}

void MaterialBasicInfo::SetPresetTagSet(const vector<PresetTagInfo>& _presetTagSet)
{
    m_presetTagSet = _presetTagSet;
    m_presetTagSetHasBeenSet = true;
}

bool MaterialBasicInfo::PresetTagSetHasBeenSet() const
{
    return m_presetTagSetHasBeenSet;
}

vector<string> MaterialBasicInfo::GetTagSet() const
{
    return m_tagSet;
}

void MaterialBasicInfo::SetTagSet(const vector<string>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool MaterialBasicInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string MaterialBasicInfo::GetPreviewUrl() const
{
    return m_previewUrl;
}

void MaterialBasicInfo::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool MaterialBasicInfo::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

vector<MaterialTagInfo> MaterialBasicInfo::GetTagInfoSet() const
{
    return m_tagInfoSet;
}

void MaterialBasicInfo::SetTagInfoSet(const vector<MaterialTagInfo>& _tagInfoSet)
{
    m_tagInfoSet = _tagInfoSet;
    m_tagInfoSetHasBeenSet = true;
}

bool MaterialBasicInfo::TagInfoSetHasBeenSet() const
{
    return m_tagInfoSetHasBeenSet;
}

