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

#include <tencentcloud/tke/v20180525/model/SchedulerPolicyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

SchedulerPolicyConfig::SchedulerPolicyConfig() :
    m_schedulerNameHasBeenSet(false),
    m_pluginConfigsHasBeenSet(false),
    m_pluginSetHasBeenSet(false)
{
}

CoreInternalOutcome SchedulerPolicyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SchedulerName") && !value["SchedulerName"].IsNull())
    {
        if (!value["SchedulerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerPolicyConfig.SchedulerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerName = string(value["SchedulerName"].GetString());
        m_schedulerNameHasBeenSet = true;
    }

    if (value.HasMember("PluginConfigs") && !value["PluginConfigs"].IsNull())
    {
        if (!value["PluginConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulerPolicyConfig.PluginConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["PluginConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SchedulerPluginConfigs item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pluginConfigs.push_back(item);
        }
        m_pluginConfigsHasBeenSet = true;
    }

    if (value.HasMember("PluginSet") && !value["PluginSet"].IsNull())
    {
        if (!value["PluginSet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerPolicyConfig.PluginSet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pluginSet.Deserialize(value["PluginSet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pluginSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulerPolicyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_schedulerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerName.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginConfigs.begin(); itr != m_pluginConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pluginSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pluginSet.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SchedulerPolicyConfig::GetSchedulerName() const
{
    return m_schedulerName;
}

void SchedulerPolicyConfig::SetSchedulerName(const string& _schedulerName)
{
    m_schedulerName = _schedulerName;
    m_schedulerNameHasBeenSet = true;
}

bool SchedulerPolicyConfig::SchedulerNameHasBeenSet() const
{
    return m_schedulerNameHasBeenSet;
}

vector<SchedulerPluginConfigs> SchedulerPolicyConfig::GetPluginConfigs() const
{
    return m_pluginConfigs;
}

void SchedulerPolicyConfig::SetPluginConfigs(const vector<SchedulerPluginConfigs>& _pluginConfigs)
{
    m_pluginConfigs = _pluginConfigs;
    m_pluginConfigsHasBeenSet = true;
}

bool SchedulerPolicyConfig::PluginConfigsHasBeenSet() const
{
    return m_pluginConfigsHasBeenSet;
}

PluginSet SchedulerPolicyConfig::GetPluginSet() const
{
    return m_pluginSet;
}

void SchedulerPolicyConfig::SetPluginSet(const PluginSet& _pluginSet)
{
    m_pluginSet = _pluginSet;
    m_pluginSetHasBeenSet = true;
}

bool SchedulerPolicyConfig::PluginSetHasBeenSet() const
{
    return m_pluginSetHasBeenSet;
}

