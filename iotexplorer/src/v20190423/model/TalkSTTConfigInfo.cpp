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

#include <tencentcloud/iotexplorer/v20190423/model/TalkSTTConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkSTTConfigInfo::TalkSTTConfigInfo() :
    m_sTTTypeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

CoreInternalOutcome TalkSTTConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("STTType") && !value["STTType"].IsNull())
    {
        if (!value["STTType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkSTTConfigInfo.STTType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sTTType = string(value["STTType"].GetString());
        m_sTTTypeHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkSTTConfigInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkSTTConfigInfo.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkSTTConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sTTTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STTType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sTTType.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

}


string TalkSTTConfigInfo::GetSTTType() const
{
    return m_sTTType;
}

void TalkSTTConfigInfo::SetSTTType(const string& _sTTType)
{
    m_sTTType = _sTTType;
    m_sTTTypeHasBeenSet = true;
}

bool TalkSTTConfigInfo::STTTypeHasBeenSet() const
{
    return m_sTTTypeHasBeenSet;
}

bool TalkSTTConfigInfo::GetEnabled() const
{
    return m_enabled;
}

void TalkSTTConfigInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TalkSTTConfigInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string TalkSTTConfigInfo::GetConfig() const
{
    return m_config;
}

void TalkSTTConfigInfo::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool TalkSTTConfigInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

