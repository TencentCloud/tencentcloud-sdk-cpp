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

#include <tencentcloud/tcss/v20201101/model/ComplianceBenchmarkStandard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceBenchmarkStandard::ComplianceBenchmarkStandard() :
    m_standardIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyItemCountHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceBenchmarkStandard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StandardId") && !value["StandardId"].IsNull())
    {
        if (!value["StandardId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceBenchmarkStandard.StandardId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardId = value["StandardId"].GetUint64();
        m_standardIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceBenchmarkStandard.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PolicyItemCount") && !value["PolicyItemCount"].IsNull())
    {
        if (!value["PolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceBenchmarkStandard.PolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyItemCount = value["PolicyItemCount"].GetUint64();
        m_policyItemCountHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceBenchmarkStandard.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceBenchmarkStandard.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceBenchmarkStandard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_standardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_policyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyItemCount, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComplianceBenchmarkStandard::GetStandardId() const
{
    return m_standardId;
}

void ComplianceBenchmarkStandard::SetStandardId(const uint64_t& _standardId)
{
    m_standardId = _standardId;
    m_standardIdHasBeenSet = true;
}

bool ComplianceBenchmarkStandard::StandardIdHasBeenSet() const
{
    return m_standardIdHasBeenSet;
}

string ComplianceBenchmarkStandard::GetName() const
{
    return m_name;
}

void ComplianceBenchmarkStandard::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComplianceBenchmarkStandard::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ComplianceBenchmarkStandard::GetPolicyItemCount() const
{
    return m_policyItemCount;
}

void ComplianceBenchmarkStandard::SetPolicyItemCount(const uint64_t& _policyItemCount)
{
    m_policyItemCount = _policyItemCount;
    m_policyItemCountHasBeenSet = true;
}

bool ComplianceBenchmarkStandard::PolicyItemCountHasBeenSet() const
{
    return m_policyItemCountHasBeenSet;
}

bool ComplianceBenchmarkStandard::GetEnabled() const
{
    return m_enabled;
}

void ComplianceBenchmarkStandard::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ComplianceBenchmarkStandard::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ComplianceBenchmarkStandard::GetDescription() const
{
    return m_description;
}

void ComplianceBenchmarkStandard::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ComplianceBenchmarkStandard::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

