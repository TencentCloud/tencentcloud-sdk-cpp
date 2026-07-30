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

#include <tencentcloud/mps/v20190612/model/AiStoryboardConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiStoryboardConfig::AiStoryboardConfig() :
    m_switchHasBeenSet(false),
    m_processIndexHasBeenSet(false)
{
}

CoreInternalOutcome AiStoryboardConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiStoryboardConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ProcessIndex") && !value["ProcessIndex"].IsNull())
    {
        if (!value["ProcessIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiStoryboardConfig.ProcessIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processIndex = value["ProcessIndex"].GetInt64();
        m_processIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiStoryboardConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_processIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processIndex, allocator);
    }

}


string AiStoryboardConfig::GetSwitch() const
{
    return m_switch;
}

void AiStoryboardConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AiStoryboardConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t AiStoryboardConfig::GetProcessIndex() const
{
    return m_processIndex;
}

void AiStoryboardConfig::SetProcessIndex(const int64_t& _processIndex)
{
    m_processIndex = _processIndex;
    m_processIndexHasBeenSet = true;
}

bool AiStoryboardConfig::ProcessIndexHasBeenSet() const
{
    return m_processIndexHasBeenSet;
}

