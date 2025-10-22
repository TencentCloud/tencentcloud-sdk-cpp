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

#include <tencentcloud/teo/v20220901/model/IPReputation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IPReputation::IPReputation() :
    m_enabledHasBeenSet(false),
    m_iPReputationGroupHasBeenSet(false)
{
}

CoreInternalOutcome IPReputation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPReputation.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("IPReputationGroup") && !value["IPReputationGroup"].IsNull())
    {
        if (!value["IPReputationGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IPReputation.IPReputationGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPReputationGroup.Deserialize(value["IPReputationGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPReputationGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPReputation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_iPReputationGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPReputationGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPReputationGroup.ToJsonObject(value[key.c_str()], allocator);
    }

}


string IPReputation::GetEnabled() const
{
    return m_enabled;
}

void IPReputation::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool IPReputation::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

IPReputationGroup IPReputation::GetIPReputationGroup() const
{
    return m_iPReputationGroup;
}

void IPReputation::SetIPReputationGroup(const IPReputationGroup& _iPReputationGroup)
{
    m_iPReputationGroup = _iPReputationGroup;
    m_iPReputationGroupHasBeenSet = true;
}

bool IPReputation::IPReputationGroupHasBeenSet() const
{
    return m_iPReputationGroupHasBeenSet;
}

