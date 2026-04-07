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

#include <tencentcloud/tke/v20180525/model/PluginSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PluginSet::PluginSet() :
    m_enabledHasBeenSet(false),
    m_disabledHasBeenSet(false)
{
}

CoreInternalOutcome PluginSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PluginSet.Enabled` is not array type"));

        const rapidjson::Value &tmpValue = value["Enabled"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SchedulerPolicyPriority item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_enabled.push_back(item);
        }
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Disabled") && !value["Disabled"].IsNull())
    {
        if (!value["Disabled"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PluginSet.Disabled` is not array type"));

        const rapidjson::Value &tmpValue = value["Disabled"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SchedulerPolicyPriority item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_disabled.push_back(item);
        }
        m_disabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_enabled.begin(); itr != m_enabled.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_disabled.begin(); itr != m_disabled.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SchedulerPolicyPriority> PluginSet::GetEnabled() const
{
    return m_enabled;
}

void PluginSet::SetEnabled(const vector<SchedulerPolicyPriority>& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool PluginSet::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<SchedulerPolicyPriority> PluginSet::GetDisabled() const
{
    return m_disabled;
}

void PluginSet::SetDisabled(const vector<SchedulerPolicyPriority>& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool PluginSet::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

