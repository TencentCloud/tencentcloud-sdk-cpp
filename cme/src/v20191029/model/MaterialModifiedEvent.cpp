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

#include <tencentcloud/cme/v20191029/model/MaterialModifiedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MaterialModifiedEvent::MaterialModifiedEvent() :
    m_materialIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_presetTagIdSetHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome MaterialModifiedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialModifiedEvent.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialModifiedEvent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PresetTagIdSet") && !value["PresetTagIdSet"].IsNull())
    {
        if (!value["PresetTagIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialModifiedEvent.PresetTagIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PresetTagIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_presetTagIdSet.push_back((*itr).GetString());
        }
        m_presetTagIdSetHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaterialModifiedEvent.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagSet.push_back((*itr).GetString());
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialModifiedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_presetTagIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetTagIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_presetTagIdSet.begin(); itr != m_presetTagIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

}


string MaterialModifiedEvent::GetMaterialId() const
{
    return m_materialId;
}

void MaterialModifiedEvent::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool MaterialModifiedEvent::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

string MaterialModifiedEvent::GetName() const
{
    return m_name;
}

void MaterialModifiedEvent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MaterialModifiedEvent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> MaterialModifiedEvent::GetPresetTagIdSet() const
{
    return m_presetTagIdSet;
}

void MaterialModifiedEvent::SetPresetTagIdSet(const vector<string>& _presetTagIdSet)
{
    m_presetTagIdSet = _presetTagIdSet;
    m_presetTagIdSetHasBeenSet = true;
}

bool MaterialModifiedEvent::PresetTagIdSetHasBeenSet() const
{
    return m_presetTagIdSetHasBeenSet;
}

vector<string> MaterialModifiedEvent::GetTagSet() const
{
    return m_tagSet;
}

void MaterialModifiedEvent::SetTagSet(const vector<string>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool MaterialModifiedEvent::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

