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

#include <tencentcloud/cdb/v20170320/model/ParameterDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ParameterDetail::ParameterDetail() :
    m_nameHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_needRebootHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_minHasBeenSet(false),
    m_enumValueHasBeenSet(false),
    m_maxFuncHasBeenSet(false),
    m_minFuncHasBeenSet(false),
    m_isNotSupportEditHasBeenSet(false)
{
}

CoreInternalOutcome ParameterDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("NeedReboot") && !value["NeedReboot"].IsNull())
    {
        if (!value["NeedReboot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.NeedReboot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needReboot = value["NeedReboot"].GetInt64();
        m_needRebootHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.Max` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetInt64();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.Min` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetInt64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.EnumValue` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValue.push_back((*itr).GetString());
        }
        m_enumValueHasBeenSet = true;
    }

    if (value.HasMember("MaxFunc") && !value["MaxFunc"].IsNull())
    {
        if (!value["MaxFunc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.MaxFunc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxFunc = string(value["MaxFunc"].GetString());
        m_maxFuncHasBeenSet = true;
    }

    if (value.HasMember("MinFunc") && !value["MinFunc"].IsNull())
    {
        if (!value["MinFunc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.MinFunc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minFunc = string(value["MinFunc"].GetString());
        m_minFuncHasBeenSet = true;
    }

    if (value.HasMember("IsNotSupportEdit") && !value["IsNotSupportEdit"].IsNull())
    {
        if (!value["IsNotSupportEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterDetail.IsNotSupportEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNotSupportEdit = value["IsNotSupportEdit"].GetBool();
        m_isNotSupportEditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParameterDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_needRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReboot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needReboot, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
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

    if (m_maxFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxFunc.c_str(), allocator).Move(), allocator);
    }

    if (m_minFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minFunc.c_str(), allocator).Move(), allocator);
    }

    if (m_isNotSupportEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNotSupportEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNotSupportEdit, allocator);
    }

}


string ParameterDetail::GetName() const
{
    return m_name;
}

void ParameterDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ParameterDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ParameterDetail::GetParamType() const
{
    return m_paramType;
}

void ParameterDetail::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool ParameterDetail::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

string ParameterDetail::GetDefault() const
{
    return m_default;
}

void ParameterDetail::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool ParameterDetail::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

string ParameterDetail::GetDescription() const
{
    return m_description;
}

void ParameterDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ParameterDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ParameterDetail::GetCurrentValue() const
{
    return m_currentValue;
}

void ParameterDetail::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool ParameterDetail::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

int64_t ParameterDetail::GetNeedReboot() const
{
    return m_needReboot;
}

void ParameterDetail::SetNeedReboot(const int64_t& _needReboot)
{
    m_needReboot = _needReboot;
    m_needRebootHasBeenSet = true;
}

bool ParameterDetail::NeedRebootHasBeenSet() const
{
    return m_needRebootHasBeenSet;
}

int64_t ParameterDetail::GetMax() const
{
    return m_max;
}

void ParameterDetail::SetMax(const int64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ParameterDetail::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

int64_t ParameterDetail::GetMin() const
{
    return m_min;
}

void ParameterDetail::SetMin(const int64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ParameterDetail::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

vector<string> ParameterDetail::GetEnumValue() const
{
    return m_enumValue;
}

void ParameterDetail::SetEnumValue(const vector<string>& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool ParameterDetail::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}

string ParameterDetail::GetMaxFunc() const
{
    return m_maxFunc;
}

void ParameterDetail::SetMaxFunc(const string& _maxFunc)
{
    m_maxFunc = _maxFunc;
    m_maxFuncHasBeenSet = true;
}

bool ParameterDetail::MaxFuncHasBeenSet() const
{
    return m_maxFuncHasBeenSet;
}

string ParameterDetail::GetMinFunc() const
{
    return m_minFunc;
}

void ParameterDetail::SetMinFunc(const string& _minFunc)
{
    m_minFunc = _minFunc;
    m_minFuncHasBeenSet = true;
}

bool ParameterDetail::MinFuncHasBeenSet() const
{
    return m_minFuncHasBeenSet;
}

bool ParameterDetail::GetIsNotSupportEdit() const
{
    return m_isNotSupportEdit;
}

void ParameterDetail::SetIsNotSupportEdit(const bool& _isNotSupportEdit)
{
    m_isNotSupportEdit = _isNotSupportEdit;
    m_isNotSupportEditHasBeenSet = true;
}

bool ParameterDetail::IsNotSupportEditHasBeenSet() const
{
    return m_isNotSupportEditHasBeenSet;
}

