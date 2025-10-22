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

#include <tencentcloud/tcss/v20201101/model/ImageRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageRisk::ImageRisk() :
    m_behaviorHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_descHasBeenSet(false),
    m_instructionContentHasBeenSet(false)
{
}

CoreInternalOutcome ImageRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Behavior") && !value["Behavior"].IsNull())
    {
        if (!value["Behavior"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRisk.Behavior` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_behavior = value["Behavior"].GetUint64();
        m_behaviorHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRisk.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRisk.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("InstructionContent") && !value["InstructionContent"].IsNull())
    {
        if (!value["InstructionContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRisk.InstructionContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instructionContent = string(value["InstructionContent"].GetString());
        m_instructionContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_behaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Behavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_behavior, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_instructionContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstructionContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instructionContent.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageRisk::GetBehavior() const
{
    return m_behavior;
}

void ImageRisk::SetBehavior(const uint64_t& _behavior)
{
    m_behavior = _behavior;
    m_behaviorHasBeenSet = true;
}

bool ImageRisk::BehaviorHasBeenSet() const
{
    return m_behaviorHasBeenSet;
}

uint64_t ImageRisk::GetType() const
{
    return m_type;
}

void ImageRisk::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageRisk::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ImageRisk::GetLevel() const
{
    return m_level;
}

void ImageRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ImageRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string ImageRisk::GetDesc() const
{
    return m_desc;
}

void ImageRisk::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ImageRisk::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string ImageRisk::GetInstructionContent() const
{
    return m_instructionContent;
}

void ImageRisk::SetInstructionContent(const string& _instructionContent)
{
    m_instructionContent = _instructionContent;
    m_instructionContentHasBeenSet = true;
}

bool ImageRisk::InstructionContentHasBeenSet() const
{
    return m_instructionContentHasBeenSet;
}

