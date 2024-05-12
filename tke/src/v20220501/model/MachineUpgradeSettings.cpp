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

#include <tencentcloud/tke/v20220501/model/MachineUpgradeSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

MachineUpgradeSettings::MachineUpgradeSettings() :
    m_autoUpgradeHasBeenSet(false),
    m_upgradeOptionsHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_maxUnavailableHasBeenSet(false)
{
}

CoreInternalOutcome MachineUpgradeSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoUpgrade") && !value["AutoUpgrade"].IsNull())
    {
        if (!value["AutoUpgrade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MachineUpgradeSettings.AutoUpgrade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpgrade = value["AutoUpgrade"].GetBool();
        m_autoUpgradeHasBeenSet = true;
    }

    if (value.HasMember("UpgradeOptions") && !value["UpgradeOptions"].IsNull())
    {
        if (!value["UpgradeOptions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MachineUpgradeSettings.UpgradeOptions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upgradeOptions.Deserialize(value["UpgradeOptions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upgradeOptionsHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineUpgradeSettings.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_components.push_back((*itr).GetString());
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("MaxUnavailable") && !value["MaxUnavailable"].IsNull())
    {
        if (!value["MaxUnavailable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MachineUpgradeSettings.MaxUnavailable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxUnavailable.Deserialize(value["MaxUnavailable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxUnavailableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineUpgradeSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoUpgrade, allocator);
    }

    if (m_upgradeOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upgradeOptions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxUnavailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUnavailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxUnavailable.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool MachineUpgradeSettings::GetAutoUpgrade() const
{
    return m_autoUpgrade;
}

void MachineUpgradeSettings::SetAutoUpgrade(const bool& _autoUpgrade)
{
    m_autoUpgrade = _autoUpgrade;
    m_autoUpgradeHasBeenSet = true;
}

bool MachineUpgradeSettings::AutoUpgradeHasBeenSet() const
{
    return m_autoUpgradeHasBeenSet;
}

AutoUpgradeOptions MachineUpgradeSettings::GetUpgradeOptions() const
{
    return m_upgradeOptions;
}

void MachineUpgradeSettings::SetUpgradeOptions(const AutoUpgradeOptions& _upgradeOptions)
{
    m_upgradeOptions = _upgradeOptions;
    m_upgradeOptionsHasBeenSet = true;
}

bool MachineUpgradeSettings::UpgradeOptionsHasBeenSet() const
{
    return m_upgradeOptionsHasBeenSet;
}

vector<string> MachineUpgradeSettings::GetComponents() const
{
    return m_components;
}

void MachineUpgradeSettings::SetComponents(const vector<string>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool MachineUpgradeSettings::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

IntOrString MachineUpgradeSettings::GetMaxUnavailable() const
{
    return m_maxUnavailable;
}

void MachineUpgradeSettings::SetMaxUnavailable(const IntOrString& _maxUnavailable)
{
    m_maxUnavailable = _maxUnavailable;
    m_maxUnavailableHasBeenSet = true;
}

bool MachineUpgradeSettings::MaxUnavailableHasBeenSet() const
{
    return m_maxUnavailableHasBeenSet;
}

