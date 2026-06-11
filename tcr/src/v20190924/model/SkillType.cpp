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

#include <tencentcloud/tcr/v20190924/model/SkillType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

SkillType::SkillType() :
    m_skillNameHasBeenSet(false),
    m_skillVersionHasBeenSet(false)
{
}

CoreInternalOutcome SkillType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SkillName") && !value["SkillName"].IsNull())
    {
        if (!value["SkillName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillType.SkillName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillName = string(value["SkillName"].GetString());
        m_skillNameHasBeenSet = true;
    }

    if (value.HasMember("SkillVersion") && !value["SkillVersion"].IsNull())
    {
        if (!value["SkillVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillType.SkillVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillVersion = string(value["SkillVersion"].GetString());
        m_skillVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_skillNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillVersion.c_str(), allocator).Move(), allocator);
    }

}


string SkillType::GetSkillName() const
{
    return m_skillName;
}

void SkillType::SetSkillName(const string& _skillName)
{
    m_skillName = _skillName;
    m_skillNameHasBeenSet = true;
}

bool SkillType::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

string SkillType::GetSkillVersion() const
{
    return m_skillVersion;
}

void SkillType::SetSkillVersion(const string& _skillVersion)
{
    m_skillVersion = _skillVersion;
    m_skillVersionHasBeenSet = true;
}

bool SkillType::SkillVersionHasBeenSet() const
{
    return m_skillVersionHasBeenSet;
}

