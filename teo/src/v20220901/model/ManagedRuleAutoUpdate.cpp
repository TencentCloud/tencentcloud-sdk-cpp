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

#include <tencentcloud/teo/v20220901/model/ManagedRuleAutoUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ManagedRuleAutoUpdate::ManagedRuleAutoUpdate() :
    m_autoUpdateToLatestVersionHasBeenSet(false),
    m_rulesetVersionHasBeenSet(false)
{
}

CoreInternalOutcome ManagedRuleAutoUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoUpdateToLatestVersion") && !value["AutoUpdateToLatestVersion"].IsNull())
    {
        if (!value["AutoUpdateToLatestVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRuleAutoUpdate.AutoUpdateToLatestVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpdateToLatestVersion = string(value["AutoUpdateToLatestVersion"].GetString());
        m_autoUpdateToLatestVersionHasBeenSet = true;
    }

    if (value.HasMember("RulesetVersion") && !value["RulesetVersion"].IsNull())
    {
        if (!value["RulesetVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedRuleAutoUpdate.RulesetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rulesetVersion = string(value["RulesetVersion"].GetString());
        m_rulesetVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagedRuleAutoUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoUpdateToLatestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpdateToLatestVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoUpdateToLatestVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulesetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rulesetVersion.c_str(), allocator).Move(), allocator);
    }

}


string ManagedRuleAutoUpdate::GetAutoUpdateToLatestVersion() const
{
    return m_autoUpdateToLatestVersion;
}

void ManagedRuleAutoUpdate::SetAutoUpdateToLatestVersion(const string& _autoUpdateToLatestVersion)
{
    m_autoUpdateToLatestVersion = _autoUpdateToLatestVersion;
    m_autoUpdateToLatestVersionHasBeenSet = true;
}

bool ManagedRuleAutoUpdate::AutoUpdateToLatestVersionHasBeenSet() const
{
    return m_autoUpdateToLatestVersionHasBeenSet;
}

string ManagedRuleAutoUpdate::GetRulesetVersion() const
{
    return m_rulesetVersion;
}

void ManagedRuleAutoUpdate::SetRulesetVersion(const string& _rulesetVersion)
{
    m_rulesetVersion = _rulesetVersion;
    m_rulesetVersionHasBeenSet = true;
}

bool ManagedRuleAutoUpdate::RulesetVersionHasBeenSet() const
{
    return m_rulesetVersionHasBeenSet;
}

