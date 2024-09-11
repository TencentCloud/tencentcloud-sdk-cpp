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

#include <tencentcloud/tke/v20220501/model/HealthCheckTemplateRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

HealthCheckTemplateRule::HealthCheckTemplateRule() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_repairActionHasBeenSet(false),
    m_repairEffectHasBeenSet(false),
    m_shouldEnableHasBeenSet(false),
    m_shouldRepairHasBeenSet(false),
    m_severityHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckTemplateRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplateRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplateRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RepairAction") && !value["RepairAction"].IsNull())
    {
        if (!value["RepairAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplateRule.RepairAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repairAction = string(value["RepairAction"].GetString());
        m_repairActionHasBeenSet = true;
    }

    if (value.HasMember("RepairEffect") && !value["RepairEffect"].IsNull())
    {
        if (!value["RepairEffect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplateRule.RepairEffect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repairEffect = string(value["RepairEffect"].GetString());
        m_repairEffectHasBeenSet = true;
    }

    if (value.HasMember("ShouldEnable") && !value["ShouldEnable"].IsNull())
    {
        if (!value["ShouldEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplateRule.ShouldEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_shouldEnable = value["ShouldEnable"].GetBool();
        m_shouldEnableHasBeenSet = true;
    }

    if (value.HasMember("ShouldRepair") && !value["ShouldRepair"].IsNull())
    {
        if (!value["ShouldRepair"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplateRule.ShouldRepair` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_shouldRepair = value["ShouldRepair"].GetBool();
        m_shouldRepairHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckTemplateRule.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckTemplateRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_repairActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repairAction.c_str(), allocator).Move(), allocator);
    }

    if (m_repairEffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairEffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repairEffect.c_str(), allocator).Move(), allocator);
    }

    if (m_shouldEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShouldEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shouldEnable, allocator);
    }

    if (m_shouldRepairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShouldRepair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shouldRepair, allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

}


string HealthCheckTemplateRule::GetName() const
{
    return m_name;
}

void HealthCheckTemplateRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HealthCheckTemplateRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HealthCheckTemplateRule::GetDescription() const
{
    return m_description;
}

void HealthCheckTemplateRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool HealthCheckTemplateRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string HealthCheckTemplateRule::GetRepairAction() const
{
    return m_repairAction;
}

void HealthCheckTemplateRule::SetRepairAction(const string& _repairAction)
{
    m_repairAction = _repairAction;
    m_repairActionHasBeenSet = true;
}

bool HealthCheckTemplateRule::RepairActionHasBeenSet() const
{
    return m_repairActionHasBeenSet;
}

string HealthCheckTemplateRule::GetRepairEffect() const
{
    return m_repairEffect;
}

void HealthCheckTemplateRule::SetRepairEffect(const string& _repairEffect)
{
    m_repairEffect = _repairEffect;
    m_repairEffectHasBeenSet = true;
}

bool HealthCheckTemplateRule::RepairEffectHasBeenSet() const
{
    return m_repairEffectHasBeenSet;
}

bool HealthCheckTemplateRule::GetShouldEnable() const
{
    return m_shouldEnable;
}

void HealthCheckTemplateRule::SetShouldEnable(const bool& _shouldEnable)
{
    m_shouldEnable = _shouldEnable;
    m_shouldEnableHasBeenSet = true;
}

bool HealthCheckTemplateRule::ShouldEnableHasBeenSet() const
{
    return m_shouldEnableHasBeenSet;
}

bool HealthCheckTemplateRule::GetShouldRepair() const
{
    return m_shouldRepair;
}

void HealthCheckTemplateRule::SetShouldRepair(const bool& _shouldRepair)
{
    m_shouldRepair = _shouldRepair;
    m_shouldRepairHasBeenSet = true;
}

bool HealthCheckTemplateRule::ShouldRepairHasBeenSet() const
{
    return m_shouldRepairHasBeenSet;
}

string HealthCheckTemplateRule::GetSeverity() const
{
    return m_severity;
}

void HealthCheckTemplateRule::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool HealthCheckTemplateRule::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

