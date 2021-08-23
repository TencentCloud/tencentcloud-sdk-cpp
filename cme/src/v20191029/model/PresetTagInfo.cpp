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

#include <tencentcloud/cme/v20191029/model/PresetTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

PresetTagInfo::PresetTagInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentTagIdHasBeenSet(false)
{
}

CoreInternalOutcome PresetTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetTagInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetTagInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParentTagId") && !value["ParentTagId"].IsNull())
    {
        if (!value["ParentTagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetTagInfo.ParentTagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentTagId = string(value["ParentTagId"].GetString());
        m_parentTagIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PresetTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_parentTagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentTagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentTagId.c_str(), allocator).Move(), allocator);
    }

}


string PresetTagInfo::GetId() const
{
    return m_id;
}

void PresetTagInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PresetTagInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PresetTagInfo::GetName() const
{
    return m_name;
}

void PresetTagInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PresetTagInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PresetTagInfo::GetParentTagId() const
{
    return m_parentTagId;
}

void PresetTagInfo::SetParentTagId(const string& _parentTagId)
{
    m_parentTagId = _parentTagId;
    m_parentTagIdHasBeenSet = true;
}

bool PresetTagInfo::ParentTagIdHasBeenSet() const
{
    return m_parentTagIdHasBeenSet;
}

