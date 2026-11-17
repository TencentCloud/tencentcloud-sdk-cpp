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

#include <tencentcloud/adp/v20260520/model/AgentBuiltinToolConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentBuiltinToolConfig::AgentBuiltinToolConfig() :
    m_nameHasBeenSet(false),
    m_disabledHasBeenSet(false)
{
}

CoreInternalOutcome AgentBuiltinToolConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBuiltinToolConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Disabled") && !value["Disabled"].IsNull())
    {
        if (!value["Disabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBuiltinToolConfig.Disabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disabled = value["Disabled"].GetBool();
        m_disabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentBuiltinToolConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disabled, allocator);
    }

}


string AgentBuiltinToolConfig::GetName() const
{
    return m_name;
}

void AgentBuiltinToolConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentBuiltinToolConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool AgentBuiltinToolConfig::GetDisabled() const
{
    return m_disabled;
}

void AgentBuiltinToolConfig::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool AgentBuiltinToolConfig::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

