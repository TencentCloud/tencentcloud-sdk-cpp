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

#include <tencentcloud/teo/v20220901/model/CustomField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CustomField::CustomField() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome CustomField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomField.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomField.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomField.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string CustomField::GetName() const
{
    return m_name;
}

void CustomField::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomField::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomField::GetValue() const
{
    return m_value;
}

void CustomField::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CustomField::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

bool CustomField::GetEnabled() const
{
    return m_enabled;
}

void CustomField::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CustomField::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

