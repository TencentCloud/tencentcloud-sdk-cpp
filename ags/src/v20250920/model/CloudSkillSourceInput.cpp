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

#include <tencentcloud/ags/v20250920/model/CloudSkillSourceInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CloudSkillSourceInput::CloudSkillSourceInput() :
    m_typeHasBeenSet(false),
    m_skillMdHasBeenSet(false)
{
}

CoreInternalOutcome CloudSkillSourceInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSkillSourceInput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SkillMd") && !value["SkillMd"].IsNull())
    {
        if (!value["SkillMd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSkillSourceInput.SkillMd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillMd = string(value["SkillMd"].GetString());
        m_skillMdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudSkillSourceInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_skillMdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillMd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillMd.c_str(), allocator).Move(), allocator);
    }

}


string CloudSkillSourceInput::GetType() const
{
    return m_type;
}

void CloudSkillSourceInput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloudSkillSourceInput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CloudSkillSourceInput::GetSkillMd() const
{
    return m_skillMd;
}

void CloudSkillSourceInput::SetSkillMd(const string& _skillMd)
{
    m_skillMd = _skillMd;
    m_skillMdHasBeenSet = true;
}

bool CloudSkillSourceInput::SkillMdHasBeenSet() const
{
    return m_skillMdHasBeenSet;
}

