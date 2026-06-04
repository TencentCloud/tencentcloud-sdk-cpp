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

#include <tencentcloud/adp/v20260520/model/AgentToolConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentToolConfig::AgentToolConfig() :
    m_configHasBeenSet(false)
{
}

CoreInternalOutcome AgentToolConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolConfig.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentToolConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

}


AgentToolBasicConfig AgentToolConfig::GetConfig() const
{
    return m_config;
}

void AgentToolConfig::SetConfig(const AgentToolBasicConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool AgentToolConfig::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

