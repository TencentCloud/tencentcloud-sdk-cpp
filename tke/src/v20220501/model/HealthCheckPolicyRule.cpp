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

#include <tencentcloud/tke/v20220501/model/HealthCheckPolicyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

HealthCheckPolicyRule::HealthCheckPolicyRule() :
    m_nameHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_autoRepairEnabledHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckPolicyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckPolicyRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckPolicyRule.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("AutoRepairEnabled") && !value["AutoRepairEnabled"].IsNull())
    {
        if (!value["AutoRepairEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckPolicyRule.AutoRepairEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoRepairEnabled = value["AutoRepairEnabled"].GetBool();
        m_autoRepairEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckPolicyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_autoRepairEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRepairEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRepairEnabled, allocator);
    }

}


string HealthCheckPolicyRule::GetName() const
{
    return m_name;
}

void HealthCheckPolicyRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HealthCheckPolicyRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool HealthCheckPolicyRule::GetEnabled() const
{
    return m_enabled;
}

void HealthCheckPolicyRule::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool HealthCheckPolicyRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

bool HealthCheckPolicyRule::GetAutoRepairEnabled() const
{
    return m_autoRepairEnabled;
}

void HealthCheckPolicyRule::SetAutoRepairEnabled(const bool& _autoRepairEnabled)
{
    m_autoRepairEnabled = _autoRepairEnabled;
    m_autoRepairEnabledHasBeenSet = true;
}

bool HealthCheckPolicyRule::AutoRepairEnabledHasBeenSet() const
{
    return m_autoRepairEnabledHasBeenSet;
}

