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

#include <tencentcloud/dlc/v20210125/model/EngineResourceGroupConfigPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

EngineResourceGroupConfigPair::EngineResourceGroupConfigPair() :
    m_configItemHasBeenSet(false),
    m_configValueHasBeenSet(false)
{
}

CoreInternalOutcome EngineResourceGroupConfigPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigItem") && !value["ConfigItem"].IsNull())
    {
        if (!value["ConfigItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineResourceGroupConfigPair.ConfigItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configItem = string(value["ConfigItem"].GetString());
        m_configItemHasBeenSet = true;
    }

    if (value.HasMember("ConfigValue") && !value["ConfigValue"].IsNull())
    {
        if (!value["ConfigValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineResourceGroupConfigPair.ConfigValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configValue = string(value["ConfigValue"].GetString());
        m_configValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EngineResourceGroupConfigPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configItem.c_str(), allocator).Move(), allocator);
    }

    if (m_configValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configValue.c_str(), allocator).Move(), allocator);
    }

}


string EngineResourceGroupConfigPair::GetConfigItem() const
{
    return m_configItem;
}

void EngineResourceGroupConfigPair::SetConfigItem(const string& _configItem)
{
    m_configItem = _configItem;
    m_configItemHasBeenSet = true;
}

bool EngineResourceGroupConfigPair::ConfigItemHasBeenSet() const
{
    return m_configItemHasBeenSet;
}

string EngineResourceGroupConfigPair::GetConfigValue() const
{
    return m_configValue;
}

void EngineResourceGroupConfigPair::SetConfigValue(const string& _configValue)
{
    m_configValue = _configValue;
    m_configValueHasBeenSet = true;
}

bool EngineResourceGroupConfigPair::ConfigValueHasBeenSet() const
{
    return m_configValueHasBeenSet;
}

