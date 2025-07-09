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

#include <tencentcloud/teo/v20220901/model/ClientAttestationRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ClientAttestationRule::ClientAttestationRule() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_attesterIdHasBeenSet(false),
    m_deviceProfilesHasBeenSet(false),
    m_invalidAttestationActionHasBeenSet(false)
{
}

CoreInternalOutcome ClientAttestationRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttestationRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttestationRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttestationRule.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttestationRule.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttestationRule.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("AttesterId") && !value["AttesterId"].IsNull())
    {
        if (!value["AttesterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttestationRule.AttesterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attesterId = string(value["AttesterId"].GetString());
        m_attesterIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceProfiles") && !value["DeviceProfiles"].IsNull())
    {
        if (!value["DeviceProfiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClientAttestationRule.DeviceProfiles` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceProfiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceProfile item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceProfiles.push_back(item);
        }
        m_deviceProfilesHasBeenSet = true;
    }

    if (value.HasMember("InvalidAttestationAction") && !value["InvalidAttestationAction"].IsNull())
    {
        if (!value["InvalidAttestationAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAttestationRule.InvalidAttestationAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invalidAttestationAction.Deserialize(value["InvalidAttestationAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invalidAttestationActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientAttestationRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_attesterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttesterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attesterId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceProfilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceProfiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceProfiles.begin(); itr != m_deviceProfiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invalidAttestationActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidAttestationAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invalidAttestationAction.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ClientAttestationRule::GetId() const
{
    return m_id;
}

void ClientAttestationRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ClientAttestationRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ClientAttestationRule::GetName() const
{
    return m_name;
}

void ClientAttestationRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClientAttestationRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClientAttestationRule::GetEnabled() const
{
    return m_enabled;
}

void ClientAttestationRule::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ClientAttestationRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

uint64_t ClientAttestationRule::GetPriority() const
{
    return m_priority;
}

void ClientAttestationRule::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ClientAttestationRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string ClientAttestationRule::GetCondition() const
{
    return m_condition;
}

void ClientAttestationRule::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ClientAttestationRule::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string ClientAttestationRule::GetAttesterId() const
{
    return m_attesterId;
}

void ClientAttestationRule::SetAttesterId(const string& _attesterId)
{
    m_attesterId = _attesterId;
    m_attesterIdHasBeenSet = true;
}

bool ClientAttestationRule::AttesterIdHasBeenSet() const
{
    return m_attesterIdHasBeenSet;
}

vector<DeviceProfile> ClientAttestationRule::GetDeviceProfiles() const
{
    return m_deviceProfiles;
}

void ClientAttestationRule::SetDeviceProfiles(const vector<DeviceProfile>& _deviceProfiles)
{
    m_deviceProfiles = _deviceProfiles;
    m_deviceProfilesHasBeenSet = true;
}

bool ClientAttestationRule::DeviceProfilesHasBeenSet() const
{
    return m_deviceProfilesHasBeenSet;
}

SecurityAction ClientAttestationRule::GetInvalidAttestationAction() const
{
    return m_invalidAttestationAction;
}

void ClientAttestationRule::SetInvalidAttestationAction(const SecurityAction& _invalidAttestationAction)
{
    m_invalidAttestationAction = _invalidAttestationAction;
    m_invalidAttestationActionHasBeenSet = true;
}

bool ClientAttestationRule::InvalidAttestationActionHasBeenSet() const
{
    return m_invalidAttestationActionHasBeenSet;
}

