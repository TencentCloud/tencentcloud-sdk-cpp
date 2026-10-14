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

#include <tencentcloud/dlc/v20210125/model/WarehouseProfileBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

WarehouseProfileBriefInfo::WarehouseProfileBriefInfo() :
    m_profileCodeHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_specHasBeenSet(false),
    m_scenarioHasBeenSet(false)
{
}

CoreInternalOutcome WarehouseProfileBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProfileCode") && !value["ProfileCode"].IsNull())
    {
        if (!value["ProfileCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseProfileBriefInfo.ProfileCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profileCode = string(value["ProfileCode"].GetString());
        m_profileCodeHasBeenSet = true;
    }

    if (value.HasMember("ProfileName") && !value["ProfileName"].IsNull())
    {
        if (!value["ProfileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseProfileBriefInfo.ProfileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profileName = string(value["ProfileName"].GetString());
        m_profileNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseProfileBriefInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseProfileBriefInfo.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("Scenario") && !value["Scenario"].IsNull())
    {
        if (!value["Scenario"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarehouseProfileBriefInfo.Scenario` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenario = string(value["Scenario"].GetString());
        m_scenarioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WarehouseProfileBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_profileCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profileCode.c_str(), allocator).Move(), allocator);
    }

    if (m_profileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profileName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenario";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenario.c_str(), allocator).Move(), allocator);
    }

}


string WarehouseProfileBriefInfo::GetProfileCode() const
{
    return m_profileCode;
}

void WarehouseProfileBriefInfo::SetProfileCode(const string& _profileCode)
{
    m_profileCode = _profileCode;
    m_profileCodeHasBeenSet = true;
}

bool WarehouseProfileBriefInfo::ProfileCodeHasBeenSet() const
{
    return m_profileCodeHasBeenSet;
}

string WarehouseProfileBriefInfo::GetProfileName() const
{
    return m_profileName;
}

void WarehouseProfileBriefInfo::SetProfileName(const string& _profileName)
{
    m_profileName = _profileName;
    m_profileNameHasBeenSet = true;
}

bool WarehouseProfileBriefInfo::ProfileNameHasBeenSet() const
{
    return m_profileNameHasBeenSet;
}

string WarehouseProfileBriefInfo::GetDescription() const
{
    return m_description;
}

void WarehouseProfileBriefInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WarehouseProfileBriefInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WarehouseProfileBriefInfo::GetSpec() const
{
    return m_spec;
}

void WarehouseProfileBriefInfo::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool WarehouseProfileBriefInfo::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string WarehouseProfileBriefInfo::GetScenario() const
{
    return m_scenario;
}

void WarehouseProfileBriefInfo::SetScenario(const string& _scenario)
{
    m_scenario = _scenario;
    m_scenarioHasBeenSet = true;
}

bool WarehouseProfileBriefInfo::ScenarioHasBeenSet() const
{
    return m_scenarioHasBeenSet;
}

