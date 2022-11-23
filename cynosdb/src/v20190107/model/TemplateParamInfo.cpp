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

#include <tencentcloud/cynosdb/v20190107/model/TemplateParamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

TemplateParamInfo::TemplateParamInfo() :
    m_currentValueHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_enumValueHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_minHasBeenSet(false),
    m_paramNameHasBeenSet(false),
    m_needRebootHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_paramTypeHasBeenSet(false)
{
}

CoreInternalOutcome TemplateParamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.EnumValue` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValue.push_back((*itr).GetString());
        }
        m_enumValueHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.Max` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_max = string(value["Max"].GetString());
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.Min` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_min = string(value["Min"].GetString());
        m_minHasBeenSet = true;
    }

    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("NeedReboot") && !value["NeedReboot"].IsNull())
    {
        if (!value["NeedReboot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.NeedReboot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needReboot = value["NeedReboot"].GetInt64();
        m_needRebootHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateParamInfo.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateParamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_enumValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValue.begin(); itr != m_enumValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_max.c_str(), allocator).Move(), allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_min.c_str(), allocator).Move(), allocator);
    }

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_needRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReboot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needReboot, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

}


string TemplateParamInfo::GetCurrentValue() const
{
    return m_currentValue;
}

void TemplateParamInfo::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool TemplateParamInfo::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

string TemplateParamInfo::GetDefault() const
{
    return m_default;
}

void TemplateParamInfo::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool TemplateParamInfo::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

vector<string> TemplateParamInfo::GetEnumValue() const
{
    return m_enumValue;
}

void TemplateParamInfo::SetEnumValue(const vector<string>& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool TemplateParamInfo::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}

string TemplateParamInfo::GetMax() const
{
    return m_max;
}

void TemplateParamInfo::SetMax(const string& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool TemplateParamInfo::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

string TemplateParamInfo::GetMin() const
{
    return m_min;
}

void TemplateParamInfo::SetMin(const string& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool TemplateParamInfo::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

string TemplateParamInfo::GetParamName() const
{
    return m_paramName;
}

void TemplateParamInfo::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool TemplateParamInfo::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

int64_t TemplateParamInfo::GetNeedReboot() const
{
    return m_needReboot;
}

void TemplateParamInfo::SetNeedReboot(const int64_t& _needReboot)
{
    m_needReboot = _needReboot;
    m_needRebootHasBeenSet = true;
}

bool TemplateParamInfo::NeedRebootHasBeenSet() const
{
    return m_needRebootHasBeenSet;
}

string TemplateParamInfo::GetDescription() const
{
    return m_description;
}

void TemplateParamInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemplateParamInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TemplateParamInfo::GetParamType() const
{
    return m_paramType;
}

void TemplateParamInfo::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool TemplateParamInfo::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

