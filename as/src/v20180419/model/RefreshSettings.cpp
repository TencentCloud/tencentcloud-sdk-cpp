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

#include <tencentcloud/as/v20180419/model/RefreshSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

RefreshSettings::RefreshSettings() :
    m_rollingUpdateSettingsHasBeenSet(false),
    m_checkInstanceTargetHealthHasBeenSet(false)
{
}

CoreInternalOutcome RefreshSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RollingUpdateSettings") && !value["RollingUpdateSettings"].IsNull())
    {
        if (!value["RollingUpdateSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshSettings.RollingUpdateSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rollingUpdateSettings.Deserialize(value["RollingUpdateSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rollingUpdateSettingsHasBeenSet = true;
    }

    if (value.HasMember("CheckInstanceTargetHealth") && !value["CheckInstanceTargetHealth"].IsNull())
    {
        if (!value["CheckInstanceTargetHealth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RefreshSettings.CheckInstanceTargetHealth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkInstanceTargetHealth = value["CheckInstanceTargetHealth"].GetBool();
        m_checkInstanceTargetHealthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefreshSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rollingUpdateSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollingUpdateSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rollingUpdateSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkInstanceTargetHealthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckInstanceTargetHealth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkInstanceTargetHealth, allocator);
    }

}


RollingUpdateSettings RefreshSettings::GetRollingUpdateSettings() const
{
    return m_rollingUpdateSettings;
}

void RefreshSettings::SetRollingUpdateSettings(const RollingUpdateSettings& _rollingUpdateSettings)
{
    m_rollingUpdateSettings = _rollingUpdateSettings;
    m_rollingUpdateSettingsHasBeenSet = true;
}

bool RefreshSettings::RollingUpdateSettingsHasBeenSet() const
{
    return m_rollingUpdateSettingsHasBeenSet;
}

bool RefreshSettings::GetCheckInstanceTargetHealth() const
{
    return m_checkInstanceTargetHealth;
}

void RefreshSettings::SetCheckInstanceTargetHealth(const bool& _checkInstanceTargetHealth)
{
    m_checkInstanceTargetHealth = _checkInstanceTargetHealth;
    m_checkInstanceTargetHealthHasBeenSet = true;
}

bool RefreshSettings::CheckInstanceTargetHealthHasBeenSet() const
{
    return m_checkInstanceTargetHealthHasBeenSet;
}

