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

#include <tencentcloud/cme/v20191029/model/MaterialBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

MaterialBaseInfo::MaterialBaseInfo() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_classPathHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_materialTypeHasBeenSet(false),
    m_materialUrlHasBeenSet(false),
    m_vodFileIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome MaterialBaseInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ClassPath") && !value["ClassPath"].IsNull())
    {
        if (!value["ClassPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.ClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classPath = string(value["ClassPath"].GetString());
        m_classPathHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.TagSet` is not array type"));

        const Value &tmpValue = value["TagSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagSet.push_back((*itr).GetString());
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("MaterialType") && !value["MaterialType"].IsNull())
    {
        if (!value["MaterialType"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.MaterialType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialType = string(value["MaterialType"].GetString());
        m_materialTypeHasBeenSet = true;
    }

    if (value.HasMember("MaterialUrl") && !value["MaterialUrl"].IsNull())
    {
        if (!value["MaterialUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.MaterialUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialUrl = string(value["MaterialUrl"].GetString());
        m_materialUrlHasBeenSet = true;
    }

    if (value.HasMember("VodFileId") && !value["VodFileId"].IsNull())
    {
        if (!value["VodFileId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.VodFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodFileId = string(value["VodFileId"].GetString());
        m_vodFileIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaterialBaseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialBaseInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_classPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaterialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_materialType.c_str(), allocator).Move(), allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vodFileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vodFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string MaterialBaseInfo::GetName() const
{
    return m_name;
}

void MaterialBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MaterialBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MaterialBaseInfo::GetDescription() const
{
    return m_description;
}

void MaterialBaseInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MaterialBaseInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string MaterialBaseInfo::GetClassPath() const
{
    return m_classPath;
}

void MaterialBaseInfo::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool MaterialBaseInfo::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

vector<string> MaterialBaseInfo::GetTagSet() const
{
    return m_tagSet;
}

void MaterialBaseInfo::SetTagSet(const vector<string>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool MaterialBaseInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

Entity MaterialBaseInfo::GetOwner() const
{
    return m_owner;
}

void MaterialBaseInfo::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool MaterialBaseInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string MaterialBaseInfo::GetMaterialType() const
{
    return m_materialType;
}

void MaterialBaseInfo::SetMaterialType(const string& _materialType)
{
    m_materialType = _materialType;
    m_materialTypeHasBeenSet = true;
}

bool MaterialBaseInfo::MaterialTypeHasBeenSet() const
{
    return m_materialTypeHasBeenSet;
}

string MaterialBaseInfo::GetMaterialUrl() const
{
    return m_materialUrl;
}

void MaterialBaseInfo::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool MaterialBaseInfo::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

string MaterialBaseInfo::GetVodFileId() const
{
    return m_vodFileId;
}

void MaterialBaseInfo::SetVodFileId(const string& _vodFileId)
{
    m_vodFileId = _vodFileId;
    m_vodFileIdHasBeenSet = true;
}

bool MaterialBaseInfo::VodFileIdHasBeenSet() const
{
    return m_vodFileIdHasBeenSet;
}

string MaterialBaseInfo::GetCreateTime() const
{
    return m_createTime;
}

void MaterialBaseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MaterialBaseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

