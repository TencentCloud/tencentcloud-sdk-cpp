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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DeliveryTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DeliveryTarget::DeliveryTarget() :
    m_typeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

CoreInternalOutcome DeliveryTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryTarget.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryTarget.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryTarget.Options` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_options.Deserialize(value["Options"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_optionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliveryTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_options.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DeliveryTarget::GetType() const
{
    return m_type;
}

void DeliveryTarget::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeliveryTarget::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool DeliveryTarget::GetEnabled() const
{
    return m_enabled;
}

void DeliveryTarget::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool DeliveryTarget::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

TargetOptions DeliveryTarget::GetOptions() const
{
    return m_options;
}

void DeliveryTarget::SetOptions(const TargetOptions& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool DeliveryTarget::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

