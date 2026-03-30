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

#include <tencentcloud/waf/v20180125/model/LLMSensitiveValueLevel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMSensitiveValueLevel::LLMSensitiveValueLevel() :
    m_labelHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

CoreInternalOutcome LLMSensitiveValueLevel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSensitiveValueLevel.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMSensitiveValueLevel.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMSensitiveValueLevel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

}


string LLMSensitiveValueLevel::GetLabel() const
{
    return m_label;
}

void LLMSensitiveValueLevel::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool LLMSensitiveValueLevel::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t LLMSensitiveValueLevel::GetLevel() const
{
    return m_level;
}

void LLMSensitiveValueLevel::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool LLMSensitiveValueLevel::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

