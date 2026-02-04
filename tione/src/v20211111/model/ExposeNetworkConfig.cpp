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

#include <tencentcloud/tione/v20211111/model/ExposeNetworkConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ExposeNetworkConfig::ExposeNetworkConfig() :
    m_sSHConfigHasBeenSet(false),
    m_exposePortConfigHasBeenSet(false)
{
}

CoreInternalOutcome ExposeNetworkConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SSHConfig") && !value["SSHConfig"].IsNull())
    {
        if (!value["SSHConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeNetworkConfig.SSHConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sSHConfig.Deserialize(value["SSHConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sSHConfigHasBeenSet = true;
    }

    if (value.HasMember("ExposePortConfig") && !value["ExposePortConfig"].IsNull())
    {
        if (!value["ExposePortConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeNetworkConfig.ExposePortConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_exposePortConfig.Deserialize(value["ExposePortConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_exposePortConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExposeNetworkConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sSHConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSHConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_exposePortConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposePortConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exposePortConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


SSHConfig ExposeNetworkConfig::GetSSHConfig() const
{
    return m_sSHConfig;
}

void ExposeNetworkConfig::SetSSHConfig(const SSHConfig& _sSHConfig)
{
    m_sSHConfig = _sSHConfig;
    m_sSHConfigHasBeenSet = true;
}

bool ExposeNetworkConfig::SSHConfigHasBeenSet() const
{
    return m_sSHConfigHasBeenSet;
}

ExposePortConfig ExposeNetworkConfig::GetExposePortConfig() const
{
    return m_exposePortConfig;
}

void ExposeNetworkConfig::SetExposePortConfig(const ExposePortConfig& _exposePortConfig)
{
    m_exposePortConfig = _exposePortConfig;
    m_exposePortConfigHasBeenSet = true;
}

bool ExposeNetworkConfig::ExposePortConfigHasBeenSet() const
{
    return m_exposePortConfigHasBeenSet;
}

