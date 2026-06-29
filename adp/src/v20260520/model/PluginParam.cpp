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

#include <tencentcloud/adp/v20260520/model/PluginParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginParam::PluginParam() :
    m_isGlobalHiddenHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome PluginParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsGlobalHidden") && !value["IsGlobalHidden"].IsNull())
    {
        if (!value["IsGlobalHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginParam.IsGlobalHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobalHidden = value["IsGlobalHidden"].GetBool();
        m_isGlobalHiddenHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginParam.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginParam.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isGlobalHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobalHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobalHidden, allocator);
    }

    if (m_isRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRequired, allocator);
    }

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

}


bool PluginParam::GetIsGlobalHidden() const
{
    return m_isGlobalHidden;
}

void PluginParam::SetIsGlobalHidden(const bool& _isGlobalHidden)
{
    m_isGlobalHidden = _isGlobalHidden;
    m_isGlobalHiddenHasBeenSet = true;
}

bool PluginParam::IsGlobalHiddenHasBeenSet() const
{
    return m_isGlobalHiddenHasBeenSet;
}

bool PluginParam::GetIsRequired() const
{
    return m_isRequired;
}

void PluginParam::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool PluginParam::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

string PluginParam::GetName() const
{
    return m_name;
}

void PluginParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PluginParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PluginParam::GetValue() const
{
    return m_value;
}

void PluginParam::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool PluginParam::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

